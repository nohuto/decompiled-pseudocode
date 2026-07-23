/*
 * XREFs of SeGetLinkedToken @ 0x1409229F0
 * Callers:
 *     <none>
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140243B50 (SepDeReferenceLogonSessionDirect.c)
 *     SeIsSModeAdminlessEnabled @ 0x140285D40 (SeIsSModeAdminlessEnabled.c)
 *     SepReferenceLogonSessionSilo @ 0x1406CBF7C (SepReferenceLogonSessionSilo.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 */

__int64 __fastcall SeGetLinkedToken(int a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]
  __int128 v14; // [rsp+60h] [rbp-10h]
  _QWORD *v15; // [rsp+A0h] [rbp+30h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v15 = 0LL;
  v5 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (unsigned int)(a1 - 2) > 1 )
    return 3221225485LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 || a1 != 2 || !SeIsSModeAdminlessEnabled() )
  {
    v9 = *(_QWORD *)(v5 + 216);
    v10 = *(_DWORD *)(v9 + 32);
    if ( (v10 & 4) != 0 && a1 == 2 || (v10 & 2) != 0 && a1 == 3 )
    {
      v11 = SepReferenceLogonSessionSilo((_DWORD *)(v9 + 16), *(_QWORD *)(v9 + 160), (__int64 *)&v15);
      v3 = v15;
      v8 = v11;
      if ( v11 < 0 )
        goto LABEL_14;
      v5 = v15[6];
    }
    *((_QWORD *)&v12 + 1) = 0LL;
    DWORD2(v13) = 0;
    *(_QWORD *)&v13 = 0LL;
    LODWORD(v12) = 48;
    v14 = 0LL;
    v8 = SepDuplicateToken(v5, (int)&v12, 0, 1, 0, 0, 0, a3);
LABEL_14:
    if ( v3 )
      SepDeReferenceLogonSessionDirect(v3);
    return v8;
  }
  return (unsigned int)-1073741729;
}
