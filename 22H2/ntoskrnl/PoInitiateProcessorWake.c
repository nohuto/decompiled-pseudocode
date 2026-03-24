/*
 * XREFs of PoInitiateProcessorWake @ 0x140565450
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140228520 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x140228DF0 (KeGetPrcb.c)
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     KeCopyAffinityEx @ 0x1402BBAE0 (KeCopyAffinityEx.c)
 *     HalRequestIpi @ 0x140343EB0 (HalRequestIpi.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     PpmIdleTransitionStall @ 0x140566ED8 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateSynchronizationState @ 0x140567078 (PpmIdleUpdateSynchronizationState.c)
 */

char __fastcall PoInitiateProcessorWake(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 Prcb; // rbp
  __int64 v4; // r8
  __int64 v5; // rdi
  _DWORD *v6; // rsi
  int v7; // r11d
  char v8; // bl
  __int64 v9; // r14
  char updated; // al
  char v11; // r11
  _QWORD v13[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v14; // [rsp+30h] [rbp-E8h]
  _WORD v15[88]; // [rsp+40h] [rbp-D8h] BYREF

  memset(v15, 0, 0xA8uLL);
  Prcb = KeGetPrcb(a1);
  v5 = *(_QWORD *)(Prcb + 0x8000);
  v6 = (_DWORD *)(Prcb + 32832);
  v7 = HIBYTE(*(_DWORD *)(Prcb + 32832));
  v8 = 0;
  v9 = *(_QWORD *)(v5 + 488);
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
        LOBYTE(v4) = 5;
        LOBYTE(v2) = 7;
        LOBYTE(v7) = PpmIdleUpdateSynchronizationState(v6, v2, v4);
        if ( (_BYTE)v7 == 5 )
        {
          KeCopyAffinityEx((__int64)v15, (unsigned __int16 *)(v5 + 72));
          if ( !(unsigned int)KeIsEmptyAffinityEx(v15) )
            HalRequestIpi(0, (__int64)v15);
          return v8;
        }
      }
    }
    else
    {
      LOBYTE(v4) = v7;
      LOBYTE(v2) = 8;
      updated = PpmIdleUpdateSynchronizationState(v6, v2, v4);
      if ( updated == v11 )
      {
        if ( !*(_BYTE *)(Prcb + 32817) )
          return 1;
        v13[0] = 0LL;
        v13[1] = PopIdleTransitionTimeout;
        v14 = (unsigned __int64)Prcb;
        while ( !(*(unsigned __int8 (__fastcall **)(__int64))(v5 + 472))(v9) )
        {
          if ( HIBYTE(*v6) != 8 )
            return v8;
          PpmIdleTransitionStall(v13);
        }
        if ( *(_QWORD *)(v5 + 56) == -1LL )
          _InterlockedExchange64((volatile __int64 *)(v5 + 56), KeQueryPerformanceCounter(0LL).QuadPart);
        return (*(__int64 (__fastcall **)(__int64))(v5 + 480))(v9);
      }
      LOBYTE(v7) = updated;
    }
    _mm_pause();
  }
  return v8;
}
