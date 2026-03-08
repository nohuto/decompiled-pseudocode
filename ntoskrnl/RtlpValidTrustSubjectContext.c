/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x1402CAAC0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v4; // r10
  int v6; // r8d
  unsigned int v7; // r9d
  int v8; // r8d
  unsigned int v9; // eax

  v4 = 0;
  if ( !a1 || *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    goto LABEL_20;
  v6 = *(_DWORD *)(a1 + 2);
  if ( !v6 )
    v6 = *(unsigned __int16 *)(a1 + 6) - 4864;
  if ( v6 )
    goto LABEL_20;
  v7 = *(_DWORD *)(a1 + 8);
  if ( !v7 )
  {
    if ( *(_DWORD *)(a1 + 12) )
      goto LABEL_20;
  }
  if ( !a2 )
    goto LABEL_17;
  if ( *(_BYTE *)(a2 + 1) != 2 || *(_BYTE *)a2 != 1 )
    goto LABEL_20;
  v8 = *(_DWORD *)(a2 + 2);
  if ( !v8 )
    v8 = *(unsigned __int16 *)(a2 + 6) - 4864;
  if ( v8 )
    goto LABEL_20;
  v9 = *(_DWORD *)(a2 + 8);
  if ( !v9 )
  {
    if ( *(_DWORD *)(a2 + 12) )
      goto LABEL_20;
  }
  if ( v7 >= v9 && *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a2 + 12) )
LABEL_17:
    v4 = 1;
  *a4 = 0;
  if ( !v4 )
LABEL_20:
    *a4 = -1073741790;
  return v4;
}
