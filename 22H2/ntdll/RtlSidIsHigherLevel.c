/*
 * XREFs of RtlSidIsHigherLevel @ 0x1800E7070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlSidIsHigherLevel(PSID Sid1, PSID Sid2, PBOOLEAN HigherLevel)
{
  int v3; // r9d
  int v5; // ecx

  v3 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v3 )
    v3 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v3 )
    return -1073741811;
  v5 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v5 )
    v5 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v5 )
    return -1073741811;
  *HigherLevel = *((_DWORD *)Sid1 + 2) > *((_DWORD *)Sid2 + 2);
  return 0;
}
