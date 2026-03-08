/*
 * XREFs of MmMarkHiberPhase @ 0x140AA9B70
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiQuerySystemBase @ 0x1403030C4 (MiQuerySystemBase.c)
 *     MiIsRetpolineEnabled @ 0x14036905C (MiIsRetpolineEnabled.c)
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 *     MiMarkHiberNotCachedPages @ 0x140AA9138 (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x140AA9288 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140AA9324 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 MmMarkHiberPhase()
{
  __int64 SystemBase; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  _QWORD *v5; // rax
  _QWORD *i; // rbx
  _QWORD **v7; // rax
  void *v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx

  MiMarkKernelPageTablePages();
  PoSetHiberRange(0LL, 0x14000u, (PVOID)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1uLL, 0x74706D4Du);
  MiMarkNonPagedHiberPhasePages(0xFFFFDE0000000000uLL, (MxPfnAllocation << 12) + MmPfnDatabase - 1, 0x200u);
  if ( (MiFlags & 0x800000000LL) != 0 )
  {
    SystemBase = MiQuerySystemBase(5);
    MiMarkNonPagedHiberPhasePages(SystemBase, SystemBase + 0xFFFFFFFFFFFLL, 0x200u);
  }
  PoSetHiberRange(0LL, 0x14000u, qword_140C693D8, 1uLL, 0x61676D4Du);
  PoSetHiberRange(0LL, 0x10000u, KeGetCurrentThread()->ApcState.Process, 0xB80uLL, 0x62706D4Du);
  Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( Flink )
    PoSetHiberRange(0LL, 0x10000u, Flink, 0x1000uLL, 0x62706D4Du);
  if ( MiIsRetpolineEnabled() )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      qword_140C654D8,
      8 * (((unsigned __int64)qword_140C654D0 >> 6) + ((qword_140C654D0 & 0x3F) != 0)),
      0x62706D4Du);
    PoSetHiberRange(0LL, 0x10000u, Base, (unsigned int)(dword_140C65500 << 12), 0x62706D4Du);
  }
  MiMarkNonPagedHiberPhasePages(qword_140C66BD0, qword_140C66BD0 + qword_140C66BD8 - 1, 0);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, MmUnloadedDrivers, 0x7D0uLL, 0x64736D4Du);
  v2 = 0LL;
  v3 = 50LL;
  do
  {
    v4 = *(void **)((char *)MmUnloadedDrivers + v2 + 8);
    if ( v4 )
      PoSetHiberRange(0LL, 0x10000u, v4, *(unsigned __int16 *)((char *)MmUnloadedDrivers + v2), 0x64736D4Du);
    v2 += 40LL;
    --v3;
  }
  while ( v3 );
  v5 = (_QWORD *)*((_QWORD *)&xmmword_140C69200 + 1);
  i = 0LL;
  while ( v5 )
  {
    i = v5;
    v5 = (_QWORD *)*v5;
  }
  while ( i )
  {
    v7 = (_QWORD **)i[1];
    v8 = i;
    v9 = i;
    if ( v7 )
    {
      v10 = *v7;
      for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
        i = v10;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v9 )
          break;
        v9 = i;
      }
    }
    PoSetHiberRange(0LL, 0x10000u, v8, 0x4B0uLL, 0x6F496D4Du);
  }
  return MiMarkHiberNotCachedPages();
}
