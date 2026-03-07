void __fastcall AcpiPccCallbackDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rbp
  unsigned int v5; // r14d
  KIRQL v7; // al
  int v8; // edx
  KSPIN_LOCK v9; // rbx
  void (__fastcall *v10)(_QWORD, KSPIN_LOCK); // rsi
  KSPIN_LOCK v11; // r15
  KIRQL v12; // r9
  KSPIN_LOCK *v13; // rax
  KSPIN_LOCK *v14; // rcx
  KSPIN_LOCK v15; // rcx
  unsigned int v16; // edx

  v4 = DeferredContext + 81;
  v5 = (unsigned int)SystemArgument1;
  v7 = KeAcquireSpinLockRaiseToDpc(DeferredContext + 81);
  v8 = *((_DWORD *)DeferredContext + 1);
  v9 = 0LL;
  v10 = (void (__fastcall *)(_QWORD, KSPIN_LOCK))DeferredContext[31];
  v11 = DeferredContext[32];
  DeferredContext[31] = 0LL;
  v12 = v7;
  DeferredContext[32] = 0LL;
  if ( (v8 & 0x1E) != 0xC )
  {
LABEL_6:
    v16 = v8 & 0xFFFFFFE1 | 0xA;
    goto LABEL_7;
  }
  v13 = DeferredContext + 29;
  v14 = (KSPIN_LOCK *)DeferredContext[29];
  if ( v14 != DeferredContext + 29 )
  {
    v9 = DeferredContext[29];
    if ( (KSPIN_LOCK *)v14[1] != v13 || (v15 = *v14, *(_QWORD *)(v15 + 8) != v9) )
      __fastfail(3u);
    *v13 = v15;
    *(_QWORD *)(v15 + 8) = v13;
    v8 = *((_DWORD *)DeferredContext + 1);
    goto LABEL_6;
  }
  v16 = v8 & 0xFFFFFFE1 | 6;
LABEL_7:
  *((_DWORD *)DeferredContext + 1) = v16;
  KeReleaseSpinLock(v4, v12);
  if ( v10 )
    v10(v5, v11);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 40) = 0;
    KeSetEvent((PRKEVENT)(v9 + 16), 0, 0);
  }
}
