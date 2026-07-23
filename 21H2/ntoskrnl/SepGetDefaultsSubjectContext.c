/*
 * XREFs of SepGetDefaultsSubjectContext @ 0x140921170
 * Callers:
 *     RtlpSetSecurityObject @ 0x1406531E0 (RtlpSetSecurityObject.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140228CC8 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x14028587C (SepLocateTokenIntegrity.c)
 */

__int64 __fastcall SepGetDefaultsSubjectContext(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 *a7,
        _QWORD *a8)
{
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *TokenIntegrity; // rax
  __int64 *v14; // r11
  __int64 result; // rax

  v9 = *a1;
  v10 = a1[2];
  if ( !v9 )
    v9 = a1[2];
  v11 = *(_QWORD *)(v9 + 168);
  *a2 = *(_QWORD *)(*(_QWORD *)(v9 + 152) + 16LL * *(unsigned int *)(v9 + 144));
  v12 = *(_QWORD *)(v9 + 184);
  *a3 = v11;
  *a8 = v12;
  *a4 = *(_QWORD *)(*(_QWORD *)(v10 + 152) + 16LL * *(unsigned int *)(v10 + 144));
  *a5 = *(_QWORD *)(v10 + 168);
  TokenIntegrity = (_QWORD *)SepLocateTokenIntegrity(v9);
  if ( TokenIntegrity )
    *a6 = *TokenIntegrity;
  else
    *a6 = SepDefaultMandatorySid;
  result = SepLocateTokenTrustLevel(v14);
  *a7 = result;
  return result;
}
