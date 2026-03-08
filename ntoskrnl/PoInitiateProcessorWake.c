/*
 * XREFs of PoInitiateProcessorWake @ 0x140581880
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     HalRequestIpi @ 0x1402EF7C0 (HalRequestIpi.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmIdleTransitionStall @ 0x1405831B0 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateSynchronizationState @ 0x140583360 (PpmIdleUpdateSynchronizationState.c)
 */

char __fastcall PoInitiateProcessorWake(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 Prcb; // r14
  __int64 v5; // rdi
  _DWORD *v6; // rsi
  int v7; // r11d
  char v8; // bl
  __int64 v9; // r15
  char updated; // al
  char v11; // r11
  _QWORD v13[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+30h] [rbp-D0h]
  _DWORD v15[68]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v15, 0, 0x108uLL);
  Prcb = KeGetPrcb(a1);
  v5 = *(_QWORD *)(Prcb + 33600);
  v6 = (_DWORD *)(Prcb + 33672);
  v7 = HIBYTE(*(_DWORD *)(Prcb + 33672));
  v8 = 0;
  v9 = *(_QWORD *)(v5 + 688);
  while ( (_BYTE)v7 != 1 && ((unsigned __int8)(v7 - 1) <= 5u || (unsigned __int8)v7 >= 9u) )
  {
    if ( (_BYTE)v7 == 2 )
    {
      v7 = HIBYTE(*v6);
    }
    else if ( (((_BYTE)v7 - 4) & 0xFD) != 0 )
    {
      if ( (_BYTE)v7 == 5 )
      {
        LOBYTE(v3) = 5;
        LOBYTE(v2) = 7;
        LOBYTE(v7) = PpmIdleUpdateSynchronizationState(v6, v2, v3);
        if ( (_BYTE)v7 == 5 )
        {
          v15[0] = 2097153;
          memset(&v15[1], 0, 0x104uLL);
          KiCopyAffinityEx((__int64)v15, 0x20u, (unsigned __int16 *)(v5 + 80));
          if ( !(unsigned int)KeIsEmptyAffinityEx(v15) )
            HalRequestIpi(0, (__int64)v15);
          return v8;
        }
      }
    }
    else
    {
      LOBYTE(v3) = v7;
      LOBYTE(v2) = 8;
      updated = PpmIdleUpdateSynchronizationState(v6, v2, v3);
      if ( updated == v11 )
      {
        if ( !*(_BYTE *)(Prcb + 33657) )
          return 1;
        v13[0] = 0LL;
        v13[1] = PopIdleTransitionTimeout;
        v14 = (unsigned __int64)Prcb;
        while ( !(*(unsigned __int8 (__fastcall **)(__int64))(v5 + 672))(v9) )
        {
          if ( HIBYTE(*v6) != 8 )
            return v8;
          PpmIdleTransitionStall(v13);
        }
        if ( *(_QWORD *)(v5 + 64) == -1LL )
          _InterlockedExchange64((volatile __int64 *)(v5 + 64), KeQueryPerformanceCounter(0LL).QuadPart);
        return (*(__int64 (__fastcall **)(__int64))(v5 + 680))(v9);
      }
      LOBYTE(v7) = updated;
    }
    _mm_pause();
  }
  return v8;
}
