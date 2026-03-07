__int64 __fastcall Register_WaitForControllerReady(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v3; // rdi
  __int64 v4; // r15
  int v5; // ebp
  char i; // r14
  int v7; // edx
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  v3 = (__int64 *)(a1 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(*v3 + 72), 4, 6, 68, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
  if ( Controller_IsControllerAccessible(*v3) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = 100;
    for ( i = 0; ; i += 100 )
    {
      if ( (XilRegister_ReadUlong(a1, (unsigned int *)(v4 + 4)) & 0x800) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*v3 + 72),
            v7,
            6,
            69,
            (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
            i);
        }
        return v1;
      }
      if ( !v5 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v5;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(*v3 + 72), v7, 6, 70, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids, 16);
    }
    return (unsigned int)-1073741823;
  }
  return v1;
}
