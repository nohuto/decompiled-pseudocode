__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2)
{
  int inserted; // edi
  __int64 v5; // rsi
  int v6; // eax
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // r14
  __int64 v12; // rcx
  bool v13; // zf
  $115DCDF994C6370D29323EAB0E0C9502 v15; // [rsp+20h] [rbp-78h] BYREF

  inserted = 0;
  memset(&v15, 0, sizeof(v15));
  KiStackAttachProcess(a1, 0, (__int64)&v15);
  v5 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(a2 + 48) & 0x200000) == 0 )
      {
        inserted = MiUpControlAreaRefs(a2, 1);
        if ( inserted < 0 )
          break;
      }
      inserted = MiCommitPageTableRangesForVad(a2);
      if ( inserted < 0 )
      {
        v13 = (*(_DWORD *)(a2 + 48) & 0x200000) == 0;
LABEL_24:
        if ( v13 )
          MiUpControlAreaRefs(a2, 0);
        break;
      }
      inserted = MiInsertVadCharges(a2, a1);
      v6 = *(_DWORD *)(a2 + 48) & 0x200000;
      if ( inserted < 0 )
      {
        v13 = v6 == 0;
        goto LABEL_24;
      }
      a2 = *(_QWORD *)a2;
      if ( !v6 )
      {
        v7 = *(void **)(v5 + 128);
        if ( v7 )
          ObfReferenceObject(v7);
      }
      if ( (*(_DWORD *)(v5 + 48) & 0x200000) == 0 && *(__int64 *)(v5 + 120) < 0 )
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
        v12 = *(_QWORD *)(***(_QWORD ***)(v5 + 72) + 32LL);
        ++*(_DWORD *)(v12 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651D0);
        KeAbPostRelease((ULONG_PTR)&qword_140C651D0);
        v13 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v13
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      *(_QWORD *)(v5 + 16) = -2LL;
      MiInsertVad(v5, (__int64)a1, 0);
      v5 = a2;
      if ( !a2 )
        goto LABEL_27;
    }
    MiDeletePartialCloneVads((char *)a2);
  }
LABEL_27:
  KiUnstackDetachProcess(&v15);
  return (unsigned int)inserted;
}
