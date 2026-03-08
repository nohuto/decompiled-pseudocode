/*
 * XREFs of SeGetLinkedToken @ 0x1409CC300
 * Callers:
 *     <none>
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1402BE52C (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x140773DF8 (SepReferenceLogonSessionSilo.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 */

__int64 __fastcall SeGetLinkedToken(int a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rbx
  __int128 *v5; // r10
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h]
  __int128 v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = 0;
  v5 = (__int128 *)a2;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)(a1 - 2) > 1 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a2 + 216);
  v8 = *(_DWORD *)(v7 + 32);
  if ( ((v8 & 4) == 0 || a1 != 2) && ((v8 & 2) == 0 || a1 != 3) )
    goto LABEL_9;
  v9 = SepReferenceLogonSessionSilo((_DWORD *)(v7 + 16), *(_QWORD *)(v7 + 160), &v14);
  v3 = (_QWORD *)v14;
  v10 = v9;
  if ( v9 >= 0 )
  {
    v5 = *(__int128 **)(v14 + 48);
LABEL_9:
    *((_QWORD *)&v11 + 1) = 0LL;
    DWORD2(v12) = 0;
    *(_QWORD *)&v12 = 0LL;
    LODWORD(v11) = 48;
    v13 = 0LL;
    v10 = SepDuplicateToken(v5, (__int64)&v11, 0, 1, 0, 0, 0, a3);
  }
  if ( v3 )
    SepDeReferenceLogonSessionDirect(v3);
  return v10;
}
