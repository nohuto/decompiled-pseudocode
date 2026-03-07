__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  char v11; // al
  __int64 v12; // r8

  v3 = *(unsigned int **)(a2 + 104);
  v5 = *(unsigned int *)(a2 + 24);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 3912) + 2820LL);
  if ( *v3 >= 0x10 )
  {
    v7 = 1LL;
    v8 = (unsigned __int64)*v3 >> 4;
LABEL_25:
    WdLogSingleEntry3(2LL, v8, v5, v7);
    return 3221225485LL;
  }
  v9 = v3[16];
  if ( v9 >= 0x1000 )
  {
    v8 = (unsigned __int64)v9 >> 12;
    v7 = 2LL;
    goto LABEL_25;
  }
  if ( (v6 != 2300 || *(_DWORD *)(a1 + 1124) != 1297040209)
    && (int)DpiFdoValidateDxgkColorimetry((__int64)(v3 + 17)) < 0 )
  {
    return 3221225485LL;
  }
  v10 = *((unsigned __int8 *)v3 + 120);
  v7 = 3LL;
  if ( (unsigned __int8)(v10 - 1) > 3u
    || (v10 = *((unsigned __int8 *)v3 + 121), v7 = 4LL, (unsigned __int8)(v10 - 1) > 4u) )
  {
    v8 = v10;
    goto LABEL_25;
  }
  if ( *((_BYTE *)v3 + 122) <= 0x10u )
  {
    v11 = *((_BYTE *)v3 + 123);
    if ( v11 == 1 )
    {
      if ( *(_WORD *)(a2 + 94) < 0x80u || !DpiIsValidEdid(*(_QWORD *)(a2 + 112)) )
      {
        v12 = 8LL;
LABEL_16:
        WdLogSingleEntry2(2LL, v5, v12);
        return 3221225485LL;
      }
    }
    else if ( v11 != 2 )
    {
      v8 = *((unsigned __int8 *)v3 + 123);
      v7 = 6LL;
      goto LABEL_25;
    }
    if ( (v3[16] & 0x200) == 0 || *(_BYTE *)(a1 + 2695) || *(_BYTE *)(a1 + 2692) )
      return 0LL;
    v12 = 10LL;
    goto LABEL_16;
  }
  WdLogSingleEntry4(2LL, *((unsigned __int8 *)v3 + 122), 16LL, v5, 5LL);
  return 3221225485LL;
}
