__int64 __fastcall PostProcessUMDFileName(enum _KMTQUERYADAPTERINFOTYPE a1, char *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned __int16 *v10; // rcx

  v3 = 0;
  v5 = a1 - 1;
  if ( !v5 )
  {
    if ( a3 < 0x20C )
      return (unsigned int)-1073741811;
    v10 = (unsigned __int16 *)(a2 + 4);
    return (unsigned int)TranslateUmdFileNameToVm(v10, 0x104u, 0LL);
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a3 < 0x210 )
      return (unsigned int)-1073741811;
    v10 = (unsigned __int16 *)a2;
    return (unsigned int)TranslateUmdFileNameToVm(v10, 0x104u, 0LL);
  }
  if ( v6 != 46 )
    return v3;
  if ( a3 < 0x228 )
    return (unsigned int)-1073741811;
  if ( !*((_DWORD *)a2 + 135) && ((*((_DWORD *)a2 + 1) & 1) != 0 || (unsigned int)(*(_DWORD *)a2 - 2) <= 1) )
  {
    v7 = *(_DWORD *)a2 - 2;
    v8 = (((unsigned __int64)a3 - 552) >> 1) + 1;
    if ( v7 > 1 && *((_DWORD *)a2 + 132) == 7 )
      v9 = TranslateUmdFileNameToVmMultiString((unsigned __int16 *)a2 + 272, v8, (unsigned int *)a2 + 134);
    else
      v9 = TranslateUmdFileNameToVm((unsigned __int16 *)a2 + 272, v8, (unsigned int *)a2 + 134);
    v3 = v9;
    if ( v9 == -2147483643 )
    {
      v3 = 0;
      *((_DWORD *)a2 + 135) = 1;
    }
  }
  return v3;
}
