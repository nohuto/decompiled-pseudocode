_WORD *__fastcall CreateDIBPalette(unsigned __int16 *a1, int a2)
{
  int v2; // ebx
  unsigned __int16 v3; // r14
  __int64 v5; // rsi
  _WORD *result; // rax
  void *v7; // rdi
  _BYTE *v8; // rdx
  __int64 v9; // rsi
  _BYTE *v10; // rcx
  __int64 HalftonePalette; // rbx

  v2 = 0;
  v3 = a2;
  if ( !a2 )
  {
    HalftonePalette = GreCreateHalftonePalette(*(HDC *)(gpDispInfo + 64LL));
LABEL_12:
    GreSetPaletteOwner(HalftonePalette, 0LL);
    return (_WORD *)HalftonePalette;
  }
  if ( *(_DWORD *)a1 == 12 )
  {
    v5 = 1LL;
  }
  else
  {
    v5 = 0LL;
    if ( *((_DWORD *)a1 + 8) )
      v3 = a1[16];
  }
  result = (_WORD *)Win32AllocPoolWithQuotaZInit(4LL * v3 + 8, 1885565781LL);
  v7 = result;
  if ( result )
  {
    result[1] = v3;
    v8 = (char *)a1 + *a1;
    *result = 768;
    if ( v3 )
    {
      v9 = v5 ^ 1;
      v10 = (char *)result + 5;
      do
      {
        ++v2;
        *(v10 - 1) = v8[2];
        *v10 = v8[1];
        v10 += 4;
        *(v10 - 3) = *v8;
        v8 += v9 + 3;
        *(v10 - 2) = 4;
      }
      while ( v2 < (unsigned __int16)result[1] );
    }
    HalftonePalette = GreCreatePalette(result, v8);
    Win32FreePool(v7);
    goto LABEL_12;
  }
  return result;
}
