/*
 * XREFs of MiAllocateProcessShadow @ 0x14070615C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14085D578 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x14021B53C (MiMarkPfnTradable.c)
 *     MiGetProcessPartition @ 0x140275574 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     KeMakeUserDirectoryTableBase @ 0x140291918 (KeMakeUserDirectoryTableBase.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResources @ 0x1406610DC (MiReleaseNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  __int64 ProcessPartition; // rsi
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0x600000) == 0 )
    return 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0) >= 0 )
  {
    v5 = MiReservePtes((__int64)&qword_140C69A40, 1u);
    v6 = v5;
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v5, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x220000000000LL, 0);
      *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources(ProcessPartition, 1LL);
  }
  return 3221225626LL;
}
