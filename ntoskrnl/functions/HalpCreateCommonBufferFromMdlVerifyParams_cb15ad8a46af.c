__int64 __fastcall HalpCreateCommonBufferFromMdlVerifyParams(__int64 **a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // edx
  __int64 **v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 *v11; // rcx

  if ( (*((_BYTE *)*a1 + 10) & 5) == 0 )
    return (unsigned int)-1073741585;
  v6 = HalpParseCommonBufferExtendedConfigurations(a2, a3, a4);
  if ( v6 < 0 )
    return (unsigned int)-1073741584;
  v7 = (__int64 **)*a1;
  if ( *(_BYTE *)(a4 + 37) )
  {
    v8 = *(_QWORD *)(a4 + 24);
    v9 = *(_QWORD *)(a4 + 16);
    if ( !v7 )
      return (unsigned int)-1073741585;
    while ( 1 )
    {
      v10 = *((unsigned int *)v7 + 10);
      if ( v8 < v10 )
        break;
      v8 -= v10;
      v11 = *v7;
      *a1 = *v7;
      v7 = (__int64 **)v11;
      if ( !v11 )
        return (unsigned int)-1073741585;
    }
    *(_QWORD *)(a4 + 24) = v8;
    if ( v8 + v9 > *((unsigned int *)*a1 + 10) )
      return (unsigned int)-1073741585;
  }
  else
  {
    LODWORD(v8) = 0;
    v9 = *((unsigned int *)v7 + 10);
    if ( *v7 )
      return (unsigned int)-1073741585;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 16) = v9;
    *(_BYTE *)(a4 + 37) = 1;
  }
  if ( (v9 & 0xFFF) != 0
    || (((_DWORD)v8 + *((_DWORD *)*a1 + 11)) & 0xFFF) != 0
    || *(_BYTE *)(a4 + 36) && *(_QWORD *)(a4 + 8) - *(_QWORD *)a4 < (unsigned __int64)(v9 - 1) )
  {
    return (unsigned int)-1073741584;
  }
  if ( !*(_BYTE *)(a4 + 38) )
  {
    *(_DWORD *)(a4 + 32) = 2;
    *(_BYTE *)(a4 + 38) = 1;
  }
  return (unsigned int)v6;
}
