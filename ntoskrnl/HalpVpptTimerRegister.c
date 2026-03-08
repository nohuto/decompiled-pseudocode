/*
 * XREFs of HalpVpptTimerRegister @ 0x140507BF4
 * Callers:
 *     HalpTimerSelectRoles @ 0x140376F4C (HalpTimerSelectRoles.c)
 * Callees:
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 *     ExtEnvInitializeSpinLock @ 0x1403AF45C (ExtEnvInitializeSpinLock.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpVpptTimerRegister(__int64 a1, char a2)
{
  __int64 result; // rax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  _QWORD v8[18]; // [rsp+30h] [rbp-69h] BYREF
  __int128 v9; // [rsp+C0h] [rbp+27h] BYREF
  __int128 v10; // [rsp+D0h] [rbp+37h]
  __int128 v11; // [rsp+E0h] [rbp+47h]

  if ( !a1 )
    return 3221225485LL;
  if ( a2 && (*(_DWORD *)(a1 + 224) & 0x8000) == 0 )
    return 3221225659LL;
  if ( (*(_DWORD *)(a1 + 224) & 1) != 0 )
    return 3221225659LL;
  v4 = *(_DWORD *)(a1 + 224) & 0xB00;
  if ( !v4 )
    return 3221225659LL;
  result = HalSocRequestApi(a1, 0LL, 7, 16LL, &HalpVpptSkipApi);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedExchange(&HalpVpptRegistered, 1) )
    {
      return 3221227288LL;
    }
    else
    {
      HalpVpptPhysicalTimerTarget = -1;
      *(_QWORD *)&HalpVpptPhysicalTimer = a1;
      ExtEnvInitializeSpinLock(HalpVpptLock);
      qword_140C62468 = (__int64)&HalpVpptQueue;
      *(_QWORD *)&HalpVpptQueue = &HalpVpptQueue;
      memset(v8, 0, sizeof(v8));
      v8[1] = HalpVpptInitialize;
      v8[0] = 0x9000000001LL;
      v8[4] = HalpVpptArmTimer;
      v8[5] = HalpVpptStop;
      v8[3] = HalpVpptAcknowledgeInterrupt;
      v5 = *(_DWORD *)(a1 + 224) & 0x8000;
      v8[12] = 0x4000000030LL;
      HIDWORD(v8[14]) = v4 | v5 | 0x210031;
      v8[16] = *(_QWORD *)(a1 + 92);
      HIDWORD(v8[15]) = *(_DWORD *)(a1 + 88);
      v6 = *(_DWORD *)(a1 + 84);
      v10 = 0LL;
      LODWORD(v10) = -1;
      v7 = *(_DWORD *)(a1 + 228) == 2;
      LODWORD(v8[15]) = v6;
      v8[11] = &v9;
      v9 = 0LL;
      v8[17] = 11LL;
      v11 = 0LL;
      if ( v7 )
        v8[13] = *(_QWORD *)(a1 + 192);
      else
        v8[13] = 10000000LL;
      return HalpTimerRegister((__int64)v8, 0LL);
    }
  }
  return result;
}
