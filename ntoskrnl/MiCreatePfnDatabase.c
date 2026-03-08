/*
 * XREFs of MiCreatePfnDatabase @ 0x140B3A0B8
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiGetPartitionLargePageListCount @ 0x140370F84 (MiGetPartitionLargePageListCount.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14039C190 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiInitializePartition @ 0x140837D40 (MiInitializePartition.c)
 *     MiCreateSparsePfnDatabase @ 0x140B37C80 (MiCreateSparsePfnDatabase.c)
 *     MiInitializePartitions @ 0x140B3A308 (MiInitializePartitions.c)
 *     MiInitializeColors @ 0x140B6BC48 (MiInitializeColors.c)
 *     MiInitializeNumaGraph @ 0x140B71624 (MiInitializeNumaGraph.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // r10
  unsigned __int64 *v12; // r11
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 *v16; // rcx

  MiInitializeColors();
  v2 = (unsigned __int16)KeNumberNodes;
  v3 = dword_140C6577C * (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  v4 = qword_140C65820 + 1;
  dword_140C6577C = v3;
  if ( qword_140C67DE0 == qword_140C65820 + 1 )
    v4 = qword_140C65820 + 2049;
  v5 = 48 * v4;
  v6 = 264LL * v3;
  qword_140C6BA80 = v5;
  qword_140C6BA88 = v6 + v5;
  v7 = v6 + 15;
  v8 = (unsigned __int64 *)&unk_140C6CB58;
  v9 = (qword_140C6BA88 + v7) & 0xFFFFFFFFFFFFFFF0uLL;
  do
  {
    *v8 = v9;
    v9 += 16LL * v3;
    ++v8;
  }
  while ( (__int64)v8 < (__int64)qword_140C6CB68 );
  v10 = v9;
  qword_140C6EF68 = 25408LL * (unsigned __int16)KeNumberNodes + v9;
  qword_140C6F010 = qword_140C6EF68 + 24LL * (unsigned int)MiGetPartitionLargePageListCount();
  qword_140C65720 = (qword_140C6F010 + v11 * (16LL * (unsigned int)dword_140C65800[0] + 8) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = v2 * v2;
  v14 = 24576 * v11;
  qword_140C65718 = 376 * v11 + qword_140C65720;
  qword_140C68028 = (qword_140C65718 + 4 * v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = (qword_140C68028 + 360 * v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  MxPfnAllocation = (v15 + 24576 * v11 + 4095) >> 12;
  MmPfnDatabase = 0xFFFFDE0000000000uLL;
  v16 = &qword_140C6BA80;
  do
    *v16++ -= 0x220000000000LL;
  while ( (__int64)v16 < (__int64)qword_140C6BA90 );
  do
    *v12++ -= 0x220000000000LL;
  while ( (__int64)v12 < (__int64)qword_140C6CB68 );
  qword_140C6EF68 -= 0x220000000000LL;
  qword_140C6F010 -= 0x220000000000LL;
  qword_140C65720 -= 0x220000000000LL;
  qword_140C65718 -= 0x220000000000LL;
  qword_140C68028 -= 0x220000000000LL;
  qword_140C6B0D0 = v10 - 0x220000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0LL);
  MiInitializePartition((unsigned __int64)MiSystemPartition, 0);
  MiPopulateFreeKernelShadowStackCacheEntries(
    (union _SLIST_HEADER *)MiSystemPartition,
    (struct _SLIST_ENTRY *)(v15 + MmPfnDatabase),
    v14);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
