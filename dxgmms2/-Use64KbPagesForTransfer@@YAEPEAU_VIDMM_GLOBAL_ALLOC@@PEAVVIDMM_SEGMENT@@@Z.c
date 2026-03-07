bool __fastcall Use64KbPagesForTransfer(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_SEGMENT *a2)
{
  char v2; // r9

  v2 = 0;
  if ( !*((_WORD *)a1 + 16) && !*((_WORD *)a1 + 8) )
    return *((_DWORD *)a2 + 94) == 0x10000;
  return v2;
}
