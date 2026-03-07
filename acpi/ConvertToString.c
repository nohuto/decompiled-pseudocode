__int64 __fastcall ConvertToString(__int64 a1, unsigned int a2, __int64 a3)
{
  size_t v3; // rbx
  unsigned int v4; // edi
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // r14
  void *v12; // r14
  size_t v13; // r8
  unsigned int v14; // eax
  size_t v15; // r14
  _BYTE *v16; // rax
  _BYTE *v17; // rsi
  __int128 v19; // [rsp+20h] [rbp-50h]
  __int128 v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-30h]
  char pszDest[16]; // [rsp+48h] [rbp-28h] BYREF
  char v23; // [rsp+58h] [rbp-18h]

  v3 = a2;
  v4 = 0;
  v23 = 0;
  v6 = *(unsigned __int16 *)(a1 + 2);
  v19 = 0LL;
  WORD1(v19) = 2;
  *(_OWORD *)pszDest = 0LL;
  v20 = 0LL;
  v8 = v6 - 1;
  if ( !v8 )
  {
    if ( IsCompatableDSDTRevision() )
    {
      v15 = 17LL;
      RtlStringCchPrintfA(pszDest, 0x11uLL, "%I64x", *(_QWORD *)(a1 + 16));
    }
    else
    {
      v15 = 9LL;
      RtlStringCchPrintfA(pszDest, 9uLL, "%x", *(_DWORD *)(a1 + 16));
    }
    if ( !(_DWORD)v3 || v3 >= v15 )
      LODWORD(v3) = strnlen(pszDest, v15);
    DWORD2(v20) = v3 + 1;
    v16 = (_BYTE *)HeapAlloc(gpheapGlobal, 1381258056, (int)v3 + 1);
    v21 = (__int64)v16;
    v17 = v16;
    if ( v16 )
    {
      memmove(v16, pszDest, (unsigned int)(v3 + 1));
      v17[(unsigned int)v3] = 0;
      goto LABEL_31;
    }
    return (unsigned int)-1073741670;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v14 = *(_DWORD *)(a1 + 24) - 1;
    if ( a2 <= v14 )
    {
      if ( !a2 )
        v3 = v14;
      DWORD2(v20) = v3 + 1;
      v21 = HeapAlloc(gpheapGlobal, 1381258056, (int)v3 + 1);
      v12 = (void *)v21;
      if ( v21 )
      {
        v13 = (unsigned int)(v3 + 1);
        goto LABEL_21;
      }
      return (unsigned int)-1073741670;
    }
    return (unsigned int)-1072431098;
  }
  if ( v9 == 1 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v11 = v10;
    if ( v10 > 0xC9 )
      v11 = 201LL;
    if ( !a2 )
    {
      if ( v10 )
      {
        LODWORD(v3) = strnlen(*(const char **)(a1 + 32), (unsigned int)v11);
        if ( (unsigned int)v3 == v11 )
          return (unsigned int)-1073741306;
      }
LABEL_13:
      DWORD2(v20) = v3 + 1;
      v21 = HeapAlloc(gpheapGlobal, 1381258056, (int)v3 + 1);
      v12 = (void *)v21;
      if ( v21 )
      {
        v3 = (unsigned int)v3;
        v13 = (unsigned int)v3;
LABEL_21:
        memmove(v12, *(const void **)(a1 + 32), v13);
        *((_BYTE *)v12 + v3) = 0;
LABEL_31:
        FreeDataBuffs(a3, 1u);
        *(_OWORD *)a3 = v19;
        *(_OWORD *)(a3 + 16) = v20;
        *(_QWORD *)(a3 + 32) = v21;
        return v4;
      }
      return (unsigned int)-1073741670;
    }
    if ( a2 <= v10 && a2 <= 0xC8 )
      goto LABEL_13;
    return (unsigned int)-1072431098;
  }
  return (unsigned int)-1072431095;
}
