__int64 __fastcall SddlAddScopedPolicyIDAce(__int64 a1, __int64 a2, int a3, int a4, char *Sid)
{
  __int64 result; // rax
  int v9; // ecx
  char v10; // bp
  __int16 v11; // ax
  __int64 v12; // rbx
  unsigned __int16 v13; // ax
  ULONG v14; // eax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]
  unsigned __int16 v17; // [rsp+2Ch] [rbp-2Ch]

  v15 = 0LL;
  v16 = 0;
  v17 = 4352;
  if ( !a1 )
    return 3221225591LL;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  v9 = *(_DWORD *)(Sid + 2) - v16;
  if ( !v9 )
    v9 = *((unsigned __int16 *)Sid + 3) - v17;
  if ( v9 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u )
    return 3221225561LL;
  v10 = 2;
  if ( *(_BYTE *)a1 > 2u )
    v10 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, &v15) )
    return 3221225591LL;
  v11 = RtlLengthSid(Sid);
  v12 = v15;
  v13 = v11 + 8;
  if ( !v15 || v15 + (unsigned __int64)v13 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_DWORD *)(v15 + 4) = 0;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 19;
  *(_WORD *)(v12 + 2) = v13;
  v14 = RtlLengthSid(Sid);
  RtlCopySid(v14, (PSID)(v12 + 8), Sid);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v10;
  return result;
}
