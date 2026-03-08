/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x140A3404C
 * Callers:
 *     MiGetAllRegisteredPatches @ 0x140A342EC (MiGetAllRegisteredPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A38EEC (MiQuerySingleLoadedPatch.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeQueryUserSidToken @ 0x1407187E4 (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x140A33EBC (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x140A3420C (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(__int64 a1, int a2, int a3, int a4, UNICODE_STRING *StringOut)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *v10; // rsi
  __int64 v11; // rdi
  __int64 UserSidHotPatchContext; // rax
  unsigned int HotPatchRecord; // edi
  bool v14; // zf
  _BYTE v16[80]; // [rsp+40h] [rbp-98h] BYREF

  memset(v16, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire((__int64)&xmmword_140C694C8, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&xmmword_140C694C8, 0, v11, (__int64)&xmmword_140C694C8);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
  }
  if ( !qword_140C694A8
    || (v10 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u),
        SeQueryUserSidToken((__int64)v10, v16, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v16)) == 0)
    || (HotPatchRecord = MiFindHotPatchRecord((__int64 *)(UserSidHotPatchContext + 24), 1, a2, a3, StringOut),
        HotPatchRecord == -1073741275) )
  {
    HotPatchRecord = MiFindHotPatchRecord((__int64 *)&xmmword_140C694B0, 1, a2, a3, StringOut);
  }
  if ( !a4 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&xmmword_140C694C8);
    KeAbPostRelease((ULONG_PTR)&xmmword_140C694C8);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return HotPatchRecord;
}
