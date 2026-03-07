int *__fastcall KeEstimateClockTickDuration(
        __int64 a1,
        char a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        __int64 *a6,
        int *a7)
{
  int v7; // edi
  bool v8; // zf
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  int *result; // rax
  char v12; // [rsp+20h] [rbp-38h]
  char v13; // [rsp+20h] [rbp-38h]
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v7 = 2;
  v14[0] = 0LL;
  v8 = *(_BYTE *)(a1 + 33) == 0;
  v9 = KiClockTimerNextTickTime;
  v15 = 2;
  if ( v8 )
  {
    v12 = a4;
    LOBYTE(a4) = a3;
    KiGetNextTimerExpirationDueTime(a1, 0, a5, a4, v12, (__int64)v14, (__int64)&v15, 0LL);
    if ( v9 <= v14[0] )
      v9 = v14[0];
    goto LABEL_4;
  }
  if ( a2 )
  {
    if ( !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      v13 = a4;
      LOBYTE(a4) = a3;
      KiGetNextTimerExpirationDueTime(a1, 1, a5, a4, v13, (__int64)v14, (__int64)&v15, 0LL);
      if ( a5 + (unsigned int)KiLastRequestedTimeIncrement < v14[0] )
      {
        v9 = v14[0];
LABEL_4:
        v7 = v15;
      }
    }
  }
  v10 = -1LL;
  if ( v9 != -1LL )
  {
    if ( v9 <= a5 )
      v10 = 0LL;
    else
      v10 = v9 - a5;
  }
  *a6 = v10;
  result = a7;
  *a7 = v7;
  return result;
}
