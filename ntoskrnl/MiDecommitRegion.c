/*
 * XREFs of MiDecommitRegion @ 0x1406EBCC0
 * Callers:
 *     MiFreeToSubAllocatedRegion @ 0x1406A5278 (MiFreeToSubAllocatedRegion.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3B45C (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiFillCommitReturnInfo @ 0x140289968 (MiFillCommitReturnInfo.c)
 *     MiReturnFullProcessCharges @ 0x140289980 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiFreeLargePages @ 0x140665C70 (MiFreeLargePages.c)
 */

__int64 __fastcall MiDecommitRegion(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r14
  _KPROCESS *Process; // rbp
  unsigned __int64 PteAddress; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 ProcessPartition; // rax
  __int64 v19; // r10
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v23; // [rsp+60h] [rbp-48h]
  __int64 v24; // [rsp+70h] [rbp-38h]
  __int64 v25; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+20h] BYREF

  v24 = 0LL;
  memset(v22, 0, sizeof(v22));
  v4 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  PteAddress = MiGetPteAddress(a3);
  v8 = MiDecommitPages(a2, PteAddress, (__int64)Process, a1, 1, v22);
  v9 = MiGetPteAddress(a2);
  v10 = v24;
  v11 = ((__int64)(PteAddress - v9) >> 3) - v23 + 1;
  v25 = 0LL;
  if ( v24 )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    v20 = MiFreeLargePages(ProcessPartition, v19, &v25, &v26, 0);
    v10 = v24;
    v4 = v25;
    *((_QWORD *)&v22[0] + 1) = v20;
  }
  v12 = *(_DWORD *)(a1 + 52);
  v13 = v12;
  LODWORD(v13) = v12 & 0x7FFFFFFF;
  v14 = (v13 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) - v11;
  *(_BYTE *)(a1 + 34) = v14 >> 31;
  *(_DWORD *)(a1 + 52) = v12 ^ (v14 ^ v12) & 0x7FFFFFFF;
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) == 0xA00000 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Spare2[39], -v11);
    v4 = v25;
    v10 = v24;
  }
  if ( v10 )
    v11 = v4 + *((_QWORD *)&v22[0] + 1);
  MiFillCommitReturnInfo(v11, (__int64)v22, &v21);
  if ( (_QWORD)v21 )
    MiReturnFullProcessCharges((__int64)Process, v21);
  if ( *((_QWORD *)&v21 + 1) && *((_QWORD *)&v21 + 1) != v4 )
  {
    v15 = MiGetProcessPartition((__int64)Process);
    MiReturnCommit(v15, v16, v16);
  }
  return v8;
}
