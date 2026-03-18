/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1406C04DC
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpAccessCheckFromState @ 0x1406C03D4 (EtwpAccessCheckFromState.c)
 *     EtwpAllocGuidEntry @ 0x140781F2C (EtwpAllocGuidEntry.c)
 *     EtwpCheckGuidAccess @ 0x140782074 (EtwpCheckGuidAccess.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     EtwpFixBootLoggers @ 0x140B68B2C (EtwpFixBootLoggers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSecurityDescriptor(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (void *)EtwpDefaultTraceSecurityDescriptor && v2 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
