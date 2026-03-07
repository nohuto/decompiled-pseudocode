__int64 __fastcall AlpcpGetEffectiveTokenMessage(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _BYTE *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) != 0 )
    return 3221227267LL;
  v8 = *(_QWORD *)(a2 + 136);
  if ( v8 )
  {
    if ( *(int *)(v8 + 36) >= 1 )
    {
      v11 = *(_QWORD *)(v8 + 48);
      goto LABEL_8;
    }
    return 3221225506LL;
  }
  v9 = *(_QWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
    return 3221225506LL;
  if ( !v9 )
    return 3221225506LL;
  v10 = *(_DWORD *)(v9 + 416);
  if ( (v10 & 6) != 4 )
    return 3221225506LL;
  if ( (v10 & 0x400) == 0 )
  {
    v11 = *(_QWORD *)(v9 + 80);
    if ( v11 )
    {
LABEL_8:
      *a3 = v11;
      *a5 = 0;
      return 0LL;
    }
    return 3221225506LL;
  }
  v13 = *(_QWORD *)(a2 + 32);
  if ( !v13 )
    return 3221225506LL;
  result = SeCreateClientSecurityEx(v13, (int)v9 + 260, 0, a4);
  if ( (int)result >= 0 )
  {
    *a3 = *(_QWORD *)(a4 + 16);
    *a5 = 1;
    return 0LL;
  }
  return result;
}
