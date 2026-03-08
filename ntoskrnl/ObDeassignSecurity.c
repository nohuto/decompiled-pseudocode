/*
 * XREFs of ObDeassignSecurity @ 0x14076BE90
 * Callers:
 *     WmipSecurityMethod @ 0x14076BC30 (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObDeassignSecurity(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  ObDereferenceSecurityDescriptor(v1 & 0xFFFFFFFFFFFFFFF0uLL, (v1 & 0xF) + 1);
  return 0LL;
}
