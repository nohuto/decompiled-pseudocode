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
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *TokenIntegrity; // rax
  __int64 *v13; // r10
  __int64 result; // rax

  v8 = *a1;
  if ( !*a1 )
    v8 = a1[2];
  v9 = *(_QWORD *)(v8 + 168);
  *a2 = *(_QWORD *)(*(_QWORD *)(v8 + 152) + 16LL * *(unsigned int *)(v8 + 144));
  v10 = *(_QWORD *)(v8 + 184);
  *a3 = v9;
  v11 = a1[2];
  *a8 = v10;
  *a4 = *(_QWORD *)(*(_QWORD *)(v11 + 152) + 16LL * *(unsigned int *)(v11 + 144));
  *a5 = *(_QWORD *)(v11 + 168);
  TokenIntegrity = (_QWORD *)SepLocateTokenIntegrity(v8);
  if ( TokenIntegrity )
    *a6 = *TokenIntegrity;
  else
    *a6 = SepDefaultMandatorySid;
  result = SepLocateTokenTrustLevel(v13);
  *a7 = result;
  return result;
}
