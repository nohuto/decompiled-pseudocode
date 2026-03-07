__int64 __fastcall SddlAddProcessTrustLabelAce(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  int v10; // ecx
  char v11; // bp
  __int16 v12; // ax
  __int64 v13; // rbx
  unsigned __int16 v14; // ax
  ULONG v15; // eax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  unsigned __int16 v18; // [rsp+2Ch] [rbp-3Ch]

  v16 = 0LL;
  v17 = 0;
  v18 = 4864;
  if ( !a1 || !RtlValidAcl(a1) )
    return 3221225591LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2) - v17;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - v18;
  if ( v10 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u )
    return 3221225561LL;
  v11 = 2;
  if ( *(_BYTE *)a1 > 2u )
    v11 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(a1, &v16) )
    return 3221225591LL;
  v12 = RtlLengthSid((PSID)a4);
  v13 = v16;
  v14 = v12 + 8;
  if ( !v16 || v16 + (unsigned __int64)v14 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v16 + 1) = a3;
  *(_BYTE *)v13 = 20;
  *(_WORD *)(v13 + 2) = v14;
  *(_DWORD *)(v13 + 4) = a6;
  v15 = RtlLengthSid((PSID)a4);
  RtlCopySid(v15, (PSID)(v13 + 8), (PSID)a4);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v11;
  return result;
}
