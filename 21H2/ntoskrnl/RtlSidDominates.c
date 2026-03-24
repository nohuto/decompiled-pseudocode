/*
 * XREFs of RtlSidDominates @ 0x140252890
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1402517DC (SepMandatorySubProcessToken.c)
 *     SepValidLabelSubjectContext @ 0x140607A3C (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140608110 (SepAdjustPrivileges.c)
 *     SeTokenCanImpersonate @ 0x14065B420 (SeTokenCanImpersonate.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     SeIsTokenAssignableToProcess @ 0x14071694C (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memcmp @ 0x1403D29E0 (memcmp.c)
 */

__int64 __fastcall RtlSidDominates(char *Buf1, char *Buf2, bool *a3)
{
  int v4; // r9d
  int v7; // eax
  __int16 v8; // di
  __int16 v9; // bp
  bool v10; // al
  bool v11; // al
  unsigned int v13; // edx

  *a3 = 0;
  v4 = *(_DWORD *)(Buf1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Buf1 + 3) - 4096;
  if ( v4 )
    return 3221225485LL;
  v7 = *(_DWORD *)(Buf2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Buf2 + 3) - 4096;
  if ( v7 )
    return 3221225485LL;
  v8 = HIBYTE(*(_WORD *)Buf1);
  v9 = HIBYTE(*(_WORD *)Buf2);
  v10 = *(_WORD *)Buf1 == *(_WORD *)Buf2 && !memcmp(Buf1, Buf2, 4LL * (unsigned __int8)v8 + 8);
  v11 = 1;
  if ( !v10 )
  {
    v13 = (_BYTE)v8 ? *(_DWORD *)&Buf1[4 * (unsigned __int8)v8 + 4] : 0;
    if ( (_BYTE)v9 && v13 < *(_DWORD *)&Buf2[4 * (unsigned __int8)v9 + 4] )
      v11 = 0;
  }
  *a3 = v11;
  return 0LL;
}
