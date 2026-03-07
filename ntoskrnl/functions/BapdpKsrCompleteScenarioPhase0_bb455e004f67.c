__int64 __fastcall BapdpKsrCompleteScenarioPhase0(int a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 & 0x3000000;
  if ( (a1 & 0x3000000) == v2 && *((_QWORD *)&ExKsrInterface + 1) )
    return (*((__int64 (__fastcall **)(_QWORD))&ExKsrInterface + 1))(v2);
  else
    return 3221225659LL;
}
