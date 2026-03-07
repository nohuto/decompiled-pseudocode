void __fastcall SetDragInThresholdAlways(struct MOVESIZEDATA *a1)
{
  int v1; // r8d
  int v2; // eax

  v1 = *((_DWORD *)a1 + 50) >> 15;
  if ( (v1 & 7u) - 2 <= 1 )
  {
    v2 = v1 - 2;
  }
  else
  {
    if ( (v1 & 7u) - 4 > 1 )
      return;
    v2 = v1 - 4;
  }
  *((_DWORD *)a1 + 50) ^= (*((_DWORD *)a1 + 50) ^ (v2 << 15)) & 0x38000;
}
