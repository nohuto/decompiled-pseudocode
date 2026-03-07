__int64 __fastcall CreateScreenPalette(HDC a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  int v7; // ebp
  signed int DeviceCaps; // esi
  unsigned __int64 v9; // rax
  char *v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  char *v13; // rcx
  __int64 Palette; // rax

  v6 = 0;
  if ( (unsigned int)GreGetSystemPaletteUse(a1) == 1 )
    v7 = (int)GreGetDeviceCaps(a1, 106LL) / 2;
  else
    v7 = 1;
  DeviceCaps = GreGetDeviceCaps(a1, 104LL);
  if ( DeviceCaps < 0 )
    return 3221225485LL;
  if ( DeviceCaps < v7 )
    return 3221225485LL;
  v9 = 4LL * (unsigned int)DeviceCaps;
  if ( v9 > 0xFFFFFFFF || (unsigned int)v9 >= 0xFFFFFFF8 )
    return 3221225485LL;
  v10 = (char *)Win32AllocPoolWithQuotaZInit((unsigned int)(v9 + 8), 1650684757LL);
  if ( v10 )
  {
    *((_WORD *)v10 + 1) = DeviceCaps;
    *(_WORD *)v10 = 768;
    if ( !(unsigned int)GreGetSystemPaletteEntries(a1, 0, DeviceCaps, (struct tagPALETTEENTRY *)v10 + 1) )
      goto LABEL_14;
    v11 = DeviceCaps - v7;
    if ( v7 < (__int64)v11 )
    {
      v12 = v11 - (__int64)v7;
      v13 = &v10[4 * v7 + 7];
      do
      {
        *v13 = 4;
        v13 += 4;
        --v12;
      }
      while ( v12 );
    }
    Palette = GreCreatePalette(v10, v7);
    if ( Palette )
    {
      *a2 = v10;
      *a3 = Palette;
    }
    else
    {
LABEL_14:
      Win32FreePool(v10);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
