PMDL __fastcall FxMdlAllocateDebug(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *Owner,
        void *VirtualAddress,
        ULONG Length,
        unsigned __int8 ChargeQuota,
        BOOLEAN CallersAddress,
        void *FxDriverGlobals_0)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  unsigned __int64 *p_AllocatedMdlsLock; // rsi
  __int64 *v13; // rdi
  __int64 p_AllocatedMdls; // rbx
  PMDL v15; // rbp
  KIRQL v16; // r14
  __int64 Pool2; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rax
  PMDL Mdl; // rax
  __int64 v21; // r8

  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( !DebugExtension )
    return IoAllocateMdl(VirtualAddress, Length, 0, CallersAddress, 0LL);
  p_AllocatedMdlsLock = &DebugExtension->AllocatedMdlsLock;
  v13 = 0LL;
  p_AllocatedMdls = (__int64)&DebugExtension->AllocatedMdls;
  v15 = 0LL;
  v16 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedMdlsLock);
  while ( p_AllocatedMdls )
  {
    if ( *(_DWORD *)(p_AllocatedMdls + 384) != 16 )
      goto LABEL_9;
    v13 = (__int64 *)(p_AllocatedMdls + 392);
    p_AllocatedMdls = *(_QWORD *)(p_AllocatedMdls + 392);
  }
  Pool2 = ExAllocatePool2(64LL, 400LL, FxDriverGlobals->Tag);
  p_AllocatedMdls = Pool2;
  if ( !Pool2 )
  {
    KeReleaseSpinLock(p_AllocatedMdlsLock, v16);
    return 0LL;
  }
  *v13 = Pool2;
LABEL_9:
  v18 = 0LL;
  v19 = (_QWORD *)p_AllocatedMdls;
  while ( *v19 )
  {
    v18 = (unsigned int)(v18 + 1);
    v19 += 3;
    if ( (unsigned int)v18 >= 0x10 )
      goto LABEL_15;
  }
  Mdl = IoAllocateMdl(VirtualAddress, Length, 0, CallersAddress, 0LL);
  v15 = Mdl;
  if ( Mdl )
  {
    v21 = 3 * v18;
    *(_QWORD *)(p_AllocatedMdls + 8 * v21) = Mdl;
    *(_QWORD *)(p_AllocatedMdls + 8 * v21 + 8) = Owner;
    *(_QWORD *)(p_AllocatedMdls + 8 * v21 + 16) = FxDriverGlobals_0;
    ++*(_DWORD *)(p_AllocatedMdls + 384);
  }
LABEL_15:
  KeReleaseSpinLock(p_AllocatedMdlsLock, v16);
  return v15;
}
