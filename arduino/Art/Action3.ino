#define THR_ACTION3 1


NIL_WORKING_AREA(waThreadAction3, 100);
NIL_THREAD(ThreadAction3, arg) {

  pinMode(RED1, OUTPUT);
  pinMode(GREEN1, OUTPUT);
  pinMode(BLUE1, OUTPUT);


  // action block
  int action3Step = 0;


  while (TRUE) {
    analogWrite(RED1, getParameter(PARAM_RED));
    analogWrite(GREEN1, getParameter(PARAM_GREEN));
    analogWrite(BLUE1, getParameter(PARAM_BLUE));


    action3Step++;
    setParameter(PARAM_ACTION3, action3Step);

    nilThdSleepMilliseconds(10);
  }

}

