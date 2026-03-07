void __fastcall SetDragInToDragOutThreshold(struct MOVESIZEDATA *a1)
{
  if ( (*((_DWORD *)a1 + 50) & 0x38000) == 0 || (*((_DWORD *)a1 + 50) & 0x38000) == 0x8000 )
    *((_DWORD *)a1 + 50) ^= (*((_DWORD *)a1 + 50) ^ (*((_DWORD *)a1 + 50) + 0x10000)) & 0x38000;
}
