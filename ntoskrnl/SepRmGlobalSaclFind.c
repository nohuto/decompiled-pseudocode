/*
 * XREFs of SepRmGlobalSaclFind @ 0x1408A1C12
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1405B6A9C (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x14076A550 (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14084B320 (SepRmGlobalSaclSetWrkr.c)
 *     SeExamineGlobalSacl @ 0x1408A1D6A (SeExamineGlobalSacl.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1409CA720 (SeAuditingFileOrGlobalEvents.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1409CF634 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall SepRmGlobalSaclFind(__int64 **a1, __int64 **a2, const UNICODE_STRING *a3, char a4)
{
  char v4; // bp
  unsigned int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax

  v4 = 0;
  v8 = -1073741772;
  if ( SepRmGlobalSaclHead )
  {
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      v4 = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    }
    v10 = SepRmGlobalSaclHead;
    *a1 = (__int64 *)SepRmGlobalSaclHead;
    if ( a2 )
      *a2 = 0LL;
    while ( v10 )
    {
      if ( !RtlCompareUnicodeString(a3, (PCUNICODE_STRING)(v10 + 8), 0) )
      {
        v8 = 0;
        goto LABEL_13;
      }
      if ( a2 )
        *a2 = *a1;
      v10 = **a1;
      *a1 = (__int64 *)v10;
    }
    if ( a2 )
      *a2 = 0LL;
LABEL_13:
    if ( v4 )
    {
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegion();
    }
  }
  return v8;
}
