bool __fastcall LooksLikeALocalHandle(const struct COMPOSITION_INPUT_QUEUE *a1)
{
  int v1; // eax

  if ( (*(_DWORD *)a1 & 0xFFFFFFFA) != 0 || *(_DWORD *)a1 == 5 )
    return *((_DWORD *)a1 + 2) >> 31;
  else
    LOBYTE(v1) = 0;
  return v1;
}
