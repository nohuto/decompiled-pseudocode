__int64 __fastcall ProcessKeyboardInjectedInputViaRim(__int64 a1, __int64 a2)
{
  if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(
                       1LL,
                       gptiCurrent,
                       *(_QWORD *)(a2 + 392),
                       *(unsigned int *)(a2 + 400)) )
    return ProcessKeyboardInjectedInput(a1, (_QWORD *)a2, 0LL);
  else
    return InputTraceLogging::Keyboard::DropInput(0LL);
}
