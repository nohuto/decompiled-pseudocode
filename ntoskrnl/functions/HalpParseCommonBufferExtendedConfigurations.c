__int64 __fastcall HalpParseCommonBufferExtendedConfigurations(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // r9d
  _QWORD *i; // rdx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  if ( !a1 )
    return 0LL;
  v4 = 0;
  if ( !a2 )
    return 0LL;
  for ( i = (_QWORD *)(a1 + 8); ; i += 5 )
  {
    v6 = *((_DWORD *)i - 2);
    if ( v6 )
      break;
    if ( *(_BYTE *)(a3 + 36) )
      return 3221225485LL;
    v9 = *i;
    *(_QWORD *)a3 = *i;
    v10 = i[1];
    *(_QWORD *)(a3 + 8) = v10;
    if ( v9 >= v10 )
      return 3221225485LL;
    *(_BYTE *)(a3 + 36) = 1;
LABEL_16:
    if ( ++v4 >= a2 )
      return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *(_BYTE *)(a3 + 37) )
      return 3221225485LL;
    v8 = *((unsigned int *)i + 2);
    *(_QWORD *)(a3 + 16) = v8;
    if ( !v8 )
      return 3221225485LL;
    *(_QWORD *)(a3 + 24) = *i;
    *(_BYTE *)(a3 + 37) = 1;
    goto LABEL_16;
  }
  if ( v7 != 1 )
    return 3221225659LL;
  if ( !*(_BYTE *)(a3 + 38) && *(int *)i < 3 )
  {
    *(_DWORD *)(a3 + 32) = *(_DWORD *)i;
    *(_BYTE *)(a3 + 38) = 1;
    goto LABEL_16;
  }
  return 3221225485LL;
}
