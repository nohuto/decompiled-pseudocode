__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  __int64 ProcessPartition; // rsi
  ULONG_PTR v5; // rax
  __int64 v6; // r8
  ULONG_PTR v7; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0x600000) == 0 )
    return 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0) >= 0 )
  {
    v5 = MiReservePtes((__int64)&qword_140C695C0, 1u);
    v7 = v5;
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v5, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x220000000000LL, 0);
      *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v7 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources(ProcessPartition, 1LL, v6);
  }
  return 3221225626LL;
}
