char __fastcall RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion(
        unsigned int **this,
        const struct RGNCOREOBJ *a2,
        unsigned int *a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // ecx

  v3 = *(_DWORD **)a2;
  v4 = **this;
  v5 = 112;
  v6 = v3[6];
  if ( (v4 >= v6 || *v3 <= 0x70u) && (v4 <= 0x70 || *v3 > 0x70u) )
    return 0;
  if ( v6 > 0x70 )
    v5 = v3[6];
  *a3 = v5;
  return 1;
}
