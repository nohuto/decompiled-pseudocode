__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v7; // edx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp
  bool v12; // zf

  v1 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire((__int64)&qword_140C651D0, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C651D0, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140C651D0, v9, (__int64)&qword_140C651D0);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C651C8, (unsigned __int64 *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651D0);
    KeAbPostRelease((ULONG_PTR)&qword_140C651D0);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( (*(_BYTE *)(v4 + 56) & 0x20) == 0 && (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 && *(_QWORD *)(v4 + 64) )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  if ( (*(_DWORD *)(v4 + 56) & 0x8000000) != 0 )
  {
    v7 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( v7 == 0x7FFFF )
      v7 = -1;
    MiDereferencePerSessionProtos((__int64 *)v4, v7);
  }
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 && !*(_QWORD *)(v4 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v4, v1);
}
