/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x140A36D7C
 * Callers:
 *     MiGetAllRegisteredPatches @ 0x140A3701C (MiGetAllRegisteredPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A3BBCC (MiQuerySingleLoadedPatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     SeQueryUserSidToken @ 0x140714EB0 (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x140A36BEC (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x140A36F3C (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(__int64 a1, int a2, int a3, int a4, UNICODE_STRING *StringOut)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *v10; // rsi
  unsigned __int64 v11; // rdi
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
    v11 = KeAbPreAcquire((__int64)&xmmword_140C69948, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C69948, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&xmmword_140C69948, 0LL, v11, (__int64)&xmmword_140C69948);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
  }
  if ( !qword_140C69928
    || (v10 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u),
        SeQueryUserSidToken((__int64)v10, v16, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v16)) == 0)
    || (HotPatchRecord = MiFindHotPatchRecord((__int64 *)(UserSidHotPatchContext + 24), 1, a2, a3, StringOut),
        HotPatchRecord == -1073741275) )
  {
    HotPatchRecord = MiFindHotPatchRecord((__int64 *)&xmmword_140C69930, 1, a2, a3, StringOut);
  }
  if ( !a4 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C69948, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&xmmword_140C69948);
    KeAbPostRelease((ULONG_PTR)&xmmword_140C69948);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return HotPatchRecord;
}
