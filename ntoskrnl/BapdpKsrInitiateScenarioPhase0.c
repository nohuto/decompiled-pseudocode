__int64 __fastcall BapdpKsrInitiateScenarioPhase0(int a1, int a2)
{
  unsigned int v2; // eax

  v2 = a2 & 0x3000000;
  if ( (a1 & 0x3000000) != 0 || !v2 )
    return 3221225485LL;
  if ( (_QWORD)ExKsrInterface )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))ExKsrInterface)(v2, 0LL);
  return 3221225659LL;
}
