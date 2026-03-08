/*
 * XREFs of RtlpOpenThreadToken @ 0x140783C68
 * Callers:
 *     RtlAcquirePrivilege @ 0x140783964 (RtlAcquirePrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x1404128F0 (ZwOpenThreadTokenEx.c)
 */

int __fastcall RtlpOpenThreadToken(ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  int result; // eax

  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, DesiredAccess, 1u, 0x200u, TokenHandle);
  if ( result < 0 )
    return ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, DesiredAccess, 0, 0x200u, TokenHandle);
  return result;
}
