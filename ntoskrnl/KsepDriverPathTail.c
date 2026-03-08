/*
 * XREFs of KsepDriverPathTail @ 0x14079D8C0
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x14079D690 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall KsepDriverPathTail(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // r10
  const WCHAR *v6; // rdx

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *a1 >> 1;
  if ( !v3 )
    goto LABEL_7;
  v4 = *((_QWORD *)a1 + 1);
  while ( 1 )
  {
    v5 = v3 - 1;
    if ( *(_WORD *)(v4 + 2 * v5) == 92 )
      break;
    --v3;
    if ( !(_DWORD)v5 )
      goto LABEL_7;
  }
  v6 = (const WCHAR *)(v4 + 2LL * v3);
  if ( !v6 )
LABEL_7:
    v6 = (const WCHAR *)*((_QWORD *)a1 + 1);
  RtlInitUnicodeString(a2, v6);
  return 0LL;
}
