/*
 * XREFs of MmFreePoolMemory @ 0x14020DD58
 * Callers:
 *     RtlpHpEnvFreeVA @ 0x14020DD14 (RtlpHpEnvFreeVA.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1403046C4 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x14030BD10 (RtlpHpVaMgrCtxFree.c)
 *     MmAllocatePoolMemory @ 0x140330628 (MmAllocatePoolMemory.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14020DEF0 (MiDeterminePoolType.c)
 *     MiCountSystemPool @ 0x14020DF44 (MiCountSystemPool.c)
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v3; // rsi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // r10
  int v8; // edi
  BOOL v9; // ebp
  __int64 AnyMultiplexedVm; // rbx
  __int64 v11; // r15
  int v13; // r8d
  __int64 v14; // r10
  _OWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v2 = *a2;
  v3 = *a1;
  v4 = MiDeterminePoolType(*a1);
  if ( v4 == 32 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v3, v2, v6);
  v8 = v6 | 0x4000;
  v9 = v4 != 0;
  if ( (v6 & 0x8000) == 0 )
    v8 = v6;
  LODWORD(AnyMultiplexedVm) = v8;
  if ( (v8 & 0x4000) != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      memset(v15, 0, sizeof(v15));
      v17 = 0LL;
      v16 = 0LL;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL, v5);
      ((void (__fastcall *)(__int64, _QWORD, ULONG_PTR, __int64, bool, _OWORD *))MiDeleteSystemPagableVm)(
        AnyMultiplexedVm,
        0LL,
        ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        v14,
        v13 != 0,
        v15);
      v11 = v16;
      MiReturnCommit(
        *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174)),
        v16 - *((_QWORD *)&v15[0] + 1));
      LOWORD(AnyMultiplexedVm) = v8;
    }
    else
    {
      if ( (v8 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        LODWORD(AnyMultiplexedVm) = v8 | 0x40000000;
      v11 = MiClearNonPagedPtes(v3, v7, (unsigned int)AnyMultiplexedVm, 1LL);
    }
    if ( v11 )
      MiCountSystemPool((unsigned int)(v9 + 5), v11, 0LL);
  }
  if ( (AnyMultiplexedVm & 0x8000) != 0 )
    MiReturnSystemVa(v3, v2 + v3, (unsigned int)(v9 + 5), 2LL);
  return 0LL;
}
