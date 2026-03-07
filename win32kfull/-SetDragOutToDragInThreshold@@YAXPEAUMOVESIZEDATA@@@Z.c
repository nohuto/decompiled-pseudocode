void __fastcall SetDragOutToDragInThreshold(struct MOVESIZEDATA *a1)
{
  if ( ((*((_DWORD *)a1 + 50) >> 15) & 7u) - 2 <= 1 )
    *((_DWORD *)a1 + 50) ^= (*((_DWORD *)a1 + 50) ^ (((*((_DWORD *)a1 + 50) >> 15) - 2) << 15)) & 0x38000;
}
