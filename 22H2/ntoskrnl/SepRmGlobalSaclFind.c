/*
 * XREFs of SepRmGlobalSaclFind @ 0x1408A6A92
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1405B8F4C (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x1407BC2C0 (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14084E6D0 (SepRmGlobalSaclSetWrkr.c)
 *     SeExamineGlobalSacl @ 0x1408A6BEA (SeExamineGlobalSacl.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1409CD5C0 (SeAuditingFileOrGlobalEvents.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1409D24D4 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     RtlCompareUnicodeString @ 0x1406DA1F0 (RtlCompareUnicodeString.c)
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
