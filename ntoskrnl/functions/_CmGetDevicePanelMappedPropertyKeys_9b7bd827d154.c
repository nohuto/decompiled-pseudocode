__int64 __fastcall CmGetDevicePanelMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 **v7; // r11
  unsigned int v8; // r9d
  __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // edx

  v7 = &off_14000B218;
  v8 = 0;
  *a7 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( a5 && (unsigned int)v9 < a6 )
    {
      v10 = *v7;
      v11 = 5 * v9;
      *(_OWORD *)(a5 + 4 * v11) = *(_OWORD *)*v7;
      *(_DWORD *)(a5 + 4 * v11 + 16) = *((_DWORD *)v10 + 4);
    }
    v12 = *a7;
    v9 = 0xFFFFFFFFLL;
    v13 = *a7 + 1;
    if ( v13 >= *a7 )
      v9 = v13;
    v14 = v13 < v12 ? 0xC0000095 : 0;
    *a7 = v9;
    if ( v13 < v12 )
      break;
    ++v8;
    v7 += 2;
    if ( v8 >= 3 )
      return a6 < (unsigned int)v9 ? 0xC0000023 : 0;
  }
  *a7 = 0;
  return v14;
}
