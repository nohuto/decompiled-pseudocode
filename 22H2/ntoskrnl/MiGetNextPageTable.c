/*
 * XREFs of MiGetNextPageTable @ 0x1402E56B0
 * Callers:
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MiMakeHyperRangeAccessible @ 0x140277590 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiComputePageCommitment @ 0x1402E4AB0 (MiComputePageCommitment.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D1AC (MiFlushDirtyBitsToPfn.c)
 *     MiGetNextNonGapPfnPage @ 0x14038D410 (MiGetNextNonGapPfnPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617CA0 (MiCheckCommitReleaseFromVad.c)
 *     MiCloneCaptureVadCommit @ 0x1406435E0 (MiCloneCaptureVadCommit.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648FBC (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D730 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiUpdateForkMaps @ 0x1406654A0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiFastLockLeafPageTable @ 0x140237260 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTables @ 0x14025BBE0 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x1402E5A20 (MiGetLeafVa.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, __int64 a3, __int8 a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  __int32 v12; // eax
  unsigned __int64 LeafVa; // rax
  char v14; // r9
  char *AnyMultiplexedVm; // rbx
  int v16; // eax
  int v17; // edx
  __int64 result; // rax
  __int128 v19; // [rsp+20h] [rbp-108h] BYREF
  __m128i v20[11]; // [rsp+30h] [rbp-F8h] BYREF

  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  v10 = a1 << 25 >> 16;
  v11 = a2 << 25 >> 16;
  v12 = 2145;
  if ( (a5 & 1) != 0 )
    v12 = 2273;
  v20[0].m128i_i32[0] = v12;
  if ( (a5 & 2) != 0 )
    v20[0].m128i_i32[0] = v12 | 0x200;
  LeafVa = MiGetLeafVa(v10);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C6A658 && LeafVa <= qword_140C67170 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( (v14 & 4) != 0 )
    goto LABEL_15;
  v16 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v10, 0);
  if ( !v16 )
  {
    v20[0].m128i_i32[0] |= 4u;
LABEL_15:
    v20[1].m128i_i64[0] = a3;
    v20[10].m128i_i64[1] = (__int64)&v19;
    v20[1].m128i_i64[1] = (__int64)AnyMultiplexedVm;
    v20[0].m128i_i8[7] = a4;
    v20[0].m128i_i8[4] = v20[0].m128i_i8[4] & 0xE3 | 4;
    v20[10].m128i_i64[0] = (__int64)MiGetNextPageTableTail;
    v20[2].m128i_i64[0] = v10;
    v20[2].m128i_i64[1] = v11;
    MiWalkPageTables(v20);
    *a6 = v19;
    return *((_QWORD *)&v19 + 1);
  }
  v17 = v16 - 1;
  result = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a6 = v17;
  return result;
}
