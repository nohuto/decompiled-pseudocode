void __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // rsi
  int v5; // eax
  void *v6; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbp
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v14; // rdx

  v2 = *(_DWORD *)(a2 + 64);
  if ( (v2 & 1) != 0 )
  {
    v4 = (_QWORD *)(a2 + 120);
    if ( *(_QWORD *)(a2 + 120) )
    {
      if ( (v2 & 8) == 0 )
        MiTerminateHardwareEnclave(a1, a2);
      if ( (MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a2 + 80)) & 1) != 0 )
      {
        v5 = KeRemoveEnclavePage();
        if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741795 )
          KeBugCheckEx(0x1Au, 0x18011544uLL, *(_QWORD *)(a2 + 80), v5, 0LL);
        MiDeleteEnclavePage(*(_QWORD *)(a2 + 80), 0);
      }
      MiReleasePtes((__int64)&qword_140C695C0, *(__int64 **)(a2 + 80), 1u);
      v6 = *(void **)(a2 + 88);
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      MiReturnReservedEnclavePages(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((__int64)&qword_140C69540, 0LL);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69540, 0LL);
      v10 = v8;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(&qword_140C69540, v8, (__int64)&qword_140C69540);
      if ( v10 )
        *(_BYTE *)(v10 + 18) = 1;
      v11 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v12 = (_QWORD *)v4[1], (_QWORD *)*v12 != v4) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v4 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C69540);
      KeAbPostRelease((ULONG_PTR)&qword_140C69540);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    v14 = *(_QWORD **)(a2 + 72);
    if ( v14 )
      PsDeleteVsmEnclave(a1, v14);
  }
}
