/*
 * XREFs of RtlSidDominates @ 0x1402ED880
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140205B1C (SepMandatorySubProcessToken.c)
 *     SeIsTokenAssignableToProcess @ 0x140695160 (SeIsTokenAssignableToProcess.c)
 *     SepValidLabelSubjectContext @ 0x14079DB4C (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x14079E024 (SepAdjustPrivileges.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

__int64 __fastcall RtlSidDominates(_DWORD *Buf1, _DWORD *Buf2, bool *a3)
{
  int v4; // r9d
  int v7; // eax
  __int16 v8; // si
  __int16 v9; // bp
  bool v10; // al
  unsigned int v12; // edx

  *a3 = 0;
  v4 = *(_DWORD *)((char *)Buf1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Buf1 + 3) - 4096;
  if ( v4 )
    return 3221225485LL;
  v7 = *(_DWORD *)((char *)Buf2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Buf2 + 3) - 4096;
  if ( v7 )
    return 3221225485LL;
  v8 = HIBYTE(*(_WORD *)Buf1);
  v9 = HIBYTE(*(_WORD *)Buf2);
  v10 = 1;
  if ( *(_WORD *)Buf1 != *(_WORD *)Buf2 || memcmp(Buf1, Buf2, 4LL * (unsigned __int8)v8 + 8) )
  {
    v12 = (_BYTE)v8 ? Buf1[(unsigned __int8)v8 + 1] : 0;
    if ( (_BYTE)v9 && v12 < Buf2[(unsigned __int8)v9 + 1] )
      v10 = 0;
  }
  *a3 = v10;
  return 0LL;
}
