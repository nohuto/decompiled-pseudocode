/*
 * XREFs of MiDereferencePerSessionProtos @ 0x14075B72C
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiSectionDelete @ 0x1407C8780 (MiSectionDelete.c)
 *     MiFinishCreateSection @ 0x1407D0800 (MiFinishCreateSection.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiMapSystemImage @ 0x1407F5DFC (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiInitializeImageExtents @ 0x140A311CC (MiInitializeImageExtents.c)
 *     MiDeletePartialCloneVads @ 0x140A461CC (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiDereferenceSubsectionProtos @ 0x14075B80C (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x14075C87C (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *i; // rdi
  bool v10; // zf
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *a1;
  v12 = 0LL;
  v6 = (unsigned __int64 *)(v4 + 40);
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)v6, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &v12);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return MiFreeSubsectionProtos(&v12);
}
