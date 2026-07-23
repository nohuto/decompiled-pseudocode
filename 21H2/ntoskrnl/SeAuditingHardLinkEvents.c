/*
 * XREFs of SeAuditingHardLinkEvents @ 0x140920A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingHardLinkEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // ax
  __int64 v3; // rax
  char *v4; // rax

  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v2 & 0x10) == 0 )
    return 0;
  if ( v2 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v3 )
      return 0;
    v4 = (char *)SecurityDescriptor + v3;
  }
  return v4 && *((_WORD *)v4 + 2) && (byte_140C1D5C4 && AccessGranted || byte_140C1D5C5 && !AccessGranted);
}
