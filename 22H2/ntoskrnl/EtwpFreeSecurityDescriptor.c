/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1406BD0EC
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1406BD064 (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x140716B20 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x1407176D0 (EtwpAllocGuidEntry.c)
 *     EtwpUpdateTrace @ 0x140791BF8 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
