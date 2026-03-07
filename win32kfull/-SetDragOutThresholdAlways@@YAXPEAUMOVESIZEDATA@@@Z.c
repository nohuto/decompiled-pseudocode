void __fastcall SetDragOutThresholdAlways(struct MOVESIZEDATA *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  int v3; // eax

  v1 = *((_DWORD *)a1 + 50);
  v2 = (v1 >> 15) & 7;
  if ( v2 < 2 )
  {
    v3 = v1 + 0x10000;
  }
  else
  {
    if ( v2 - 4 > 1 )
      return;
    v3 = ((*((_DWORD *)a1 + 50) >> 15) - 2) << 15;
  }
  *((_DWORD *)a1 + 50) = v1 ^ (v1 ^ v3) & 0x38000;
}
