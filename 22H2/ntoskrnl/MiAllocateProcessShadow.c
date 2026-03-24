/*
 * XREFs of MiAllocateProcessShadow @ 0x1406FE00C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CEF24 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021AD00 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiReleaseNonPagedResources @ 0x1402E9CE0 (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x140355C04 (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x140356708 (MiMarkPfnTradable.c)
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x1406FE0F4 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  ULONG_PTR *ProcessPartition; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rdi
  __int64 TopLevelPage; // rbx
  __int64 v10; // r8
  _DWORD *v11; // r9

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0) >= 0 )
  {
    v7 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v5, v6);
    v8 = v7;
    if ( v7 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v7, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0LL, v10, v11);
      *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v8 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources((__int64)ProcessPartition, 1LL);
  }
  return 3221225626LL;
}
