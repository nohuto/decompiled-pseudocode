/*
 * XREFs of TppUpdateSubQueueTimer @ 0x180013B20
 * Callers:
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 *     TppSetTimer @ 0x1800139EC (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x18009E750 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A0AD0 (ZwSetTimer2.c)
 *     TppETWTimerCancelNtTimer @ 0x180112924 (TppETWTimerCancelNtTimer.c)
 *     TppETWTimerSetNtTimer @ 0x180112BF4 (TppETWTimerSetNtTimer.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v6 = *(_QWORD *)(v3 + 32) - v5;
    v7 = (unsigned __int128)(v6 * (__int128)0x346DC5D63886594BLL) >> 64;
    v8 = v6 / 10000;
    if ( *(_QWORD *)a1 != v5 || *(_DWORD *)(a1 + 112) != (_DWORD)v8 )
    {
      v9 = 10000LL * (unsigned int)v8;
      *(_QWORD *)a1 = v5;
      v14 = v9;
      *(_DWORD *)(a1 + 112) = v8;
      if ( !v4 )
      {
        v7 = RtlpFreezeTimeBias;
        v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
        if ( v9 > v5 )
        {
          v5 = 0LL;
        }
        else
        {
          v9 -= v5;
          v5 = v9;
        }
      }
      v12 = v5;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v7) )
        v10 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v10 = 2147353478LL;
      if ( *(_BYTE *)v10 )
        TppETWTimerSetNtTimer(a1, v5, (unsigned int)v8);
      ZwSetTimer2(*(_QWORD *)(a1 + 24), &v12, 0LL, &v13);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(0LL, a2) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL);
  }
}
