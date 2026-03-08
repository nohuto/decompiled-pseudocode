/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x140696014
 * Callers:
 *     EtwpAllocGuidEntry @ 0x140690BD4 (EtwpAllocGuidEntry.c)
 *     EtwpCheckGuidAccess @ 0x1406910EC (EtwpCheckGuidAccess.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpAccessCheckFromState @ 0x140695F0C (EtwpAccessCheckFromState.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpFixBootLoggers @ 0x140B6569C (EtwpFixBootLoggers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
