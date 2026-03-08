/*
 * XREFs of SeSecurityAttributePresent @ 0x1402464F0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1405B5D24 (SepVerifyDesktopAppxPackageName.c)
 *     PsQueryProcessAttributesByToken @ 0x1406D44E0 (PsQueryProcessAttributesByToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1402478D0 (AuthzBasepFindSecurityAttribute.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

bool __fastcall SeSecurityAttributePresent(__int64 a1, __int64 a2)
{
  char v4; // di
  PERESOURCE *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v7; // si

  v4 = 0;
  v5 = (PERESOURCE *)(a1 + 48);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*v5, 1u);
  }
  v7 = AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), a2) != 0;
  if ( v4 )
  {
    ExReleaseResourceLite(*v5);
    KeLeaveCriticalRegion();
  }
  return v7;
}
