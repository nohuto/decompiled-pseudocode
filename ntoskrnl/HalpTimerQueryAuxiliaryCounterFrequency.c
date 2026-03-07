__int64 __fastcall HalpTimerQueryAuxiliaryCounterFrequency(_QWORD *a1)
{
  if ( !HalpAuxiliaryCounter )
    return 3221225659LL;
  if ( a1 )
    *a1 = *(_QWORD *)(HalpAuxiliaryCounter + 192);
  return 0LL;
}
