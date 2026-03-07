__int64 __fastcall HalpSetSystemInformation(int a1, int a2, __int64 (__fastcall **a3)(_QWORD))
{
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( !a1 )
  {
    if ( a2 == 8 )
      return HalpSetProfileSourceInterval();
    return 3221225476LL;
  }
  if ( a1 != 1 )
  {
    if ( a1 == 10 )
    {
      if ( a2 == 8 )
        return HalpRegisterTimerInterruptHandler((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*a3);
      return 3221225476LL;
    }
    if ( a1 != 19 )
    {
      if ( a1 == 20 )
      {
        if ( (unsigned int)(a2 - 288) <= 0x1F6 )
          return ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD), _QWORD))HalpProfileInterface[11])(a3, 0LL);
      }
      else
      {
        if ( a1 != 21 )
          return HaliSetSystemInformation();
        if ( a2 == 272 )
          return ((__int64 (__fastcall *)(_QWORD))HalpProfileInterface[12])(a3);
      }
      return 3221225476LL;
    }
    if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, &v6) || v6 != 2 )
      return 3221225659LL;
    if ( a2 == 8 )
    {
      if ( (HalpFeatureBits & 0x41) == 0x41 )
        return HalpRegisterProcessorTraceInterruptHandler(*a3);
      return 3221225659LL;
    }
    return 3221225476LL;
  }
  if ( a2 != 8 )
    return 3221225476LL;
  if ( (HalpFeatureBits & 1) != 0 )
    return HalpRegisterProfileSourceInterruptHandler(*a3);
  else
    return 3221225473LL;
}
