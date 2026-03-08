/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x14085ACF4
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     VslFreeSecureImageIat @ 0x14054B9F8 (VslFreeSecureImageIat.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineImportInfo(__int64 a1)
{
  unsigned __int64 v1; // rax
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // rdi
  bool v9; // zf
  __int64 v10; // rax

  if ( *(_QWORD *)(a1 + 112) )
  {
    v1 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    CurrentThread = KeGetCurrentThread();
    v3 = v1;
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 32LL);
    --CurrentThread->SpecialApcDisable;
    v5 = KeAbPreAcquire(v4 + 24, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 24), v5, v4 + 24);
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    v7 = *(_QWORD *)(v4 + 88);
    v8 = *(void **)(v7 + 16);
    *(_QWORD *)(v7 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 24));
    KeAbPostRelease(v4 + 24);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( (MiFlags & 0x8000) != 0 )
      VslFreeSecureImageIat(*(_QWORD *)(*(_QWORD *)(v3 + 96) + 56LL));
    MiWalkEntireImage(v3, qword_140C654E8, 0x10u, 0xFFFFFFFF);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 320);
    v8 = *(void **)(v10 + 16);
    *(_QWORD *)(v10 + 16) = 0LL;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
