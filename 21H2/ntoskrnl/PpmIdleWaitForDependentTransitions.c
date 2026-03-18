/*
 * XREFs of PpmIdleWaitForDependentTransitions @ 0x1405C86F0
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405C7A38 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PpmIdleTransitionStall @ 0x1405C85B0 (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmIdleWaitForDependentTransitions(__int64 a1)
{
  unsigned __int16 *v1; // rax
  unsigned int v2; // ebx
  __int64 Prcb; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v8; // [rsp+30h] [rbp-30h]
  int v9; // [rsp+32h] [rbp-2Eh]
  __int16 v10; // [rsp+36h] [rbp-2Ah]
  _QWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v12; // [rsp+48h] [rbp-18h]
  unsigned int v13; // [rsp+70h] [rbp+10h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 8);
  v2 = 0;
  v9 = 0;
  v10 = 0;
  v13 = 0;
  v8 = 0;
  v7[1] = v1;
  v7[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v7) )
  {
    Prcb = KeGetPrcb(v13);
    v12 = 0LL;
    BYTE12(v12) = 1;
    v4 = Prcb;
    v5 = *(_QWORD *)(Prcb + 33600);
    v11[0] = 0LL;
    *(_QWORD *)&v12 = Prcb;
    v11[1] = PopIdleTransitionTimeout;
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(v5 + 664))(*(_QWORD *)(v5 + 680)) )
    {
      if ( (*(_DWORD *)(v4 + 33672) & 0xFF000000) != 0x5000000 )
        return (unsigned int)-1073741782;
      PpmIdleTransitionStall((__int64)v11);
    }
  }
  return v2;
}
