/*
 * XREFs of RtlpOpenThreadToken @ 0x1406CBA3C
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406CB6DC (RtlAcquirePrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x14041BD40 (ZwOpenThreadTokenEx.c)
 */

int __fastcall RtlpOpenThreadToken(ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  int result; // eax

  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, DesiredAccess, 1u, 0x200u, TokenHandle);
  if ( result < 0 )
    return ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, DesiredAccess, 0, 0x200u, TokenHandle);
  return result;
}
