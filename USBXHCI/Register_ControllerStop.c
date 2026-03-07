__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  unsigned int v1; // edi
  __int64 *v3; // rsi
  __int64 v4; // rbx
  int Ulong; // eax
  int i; // r15d
  int v7; // edx
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  v3 = (__int64 *)(a1 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(*v3 + 72), 4, 6, 57, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
  if ( Controller_IsControllerAccessible(*v3) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    Ulong = XilRegister_ReadUlong(a1, v4);
    XilRegister_WriteUlong(a1, v4, Ulong & 0xFFFFFFFE);
    for ( i = 16; ; --i )
    {
      if ( (XilRegister_ReadUlong(a1, v4 + 4) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*v3 + 72),
            v7,
            6,
            58,
            (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
            16 - i,
            1);
        }
        return v1;
      }
      if ( !i )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(*v3 + 72), v7, 6, 59, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids, 16);
    }
    return (unsigned int)-1073741823;
  }
  return v1;
}
