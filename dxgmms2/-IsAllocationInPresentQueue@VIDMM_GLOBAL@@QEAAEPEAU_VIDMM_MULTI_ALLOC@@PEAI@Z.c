char __fastcall VIDMM_GLOBAL::IsAllocationInPresentQueue(
        VIDMM_GLOBAL *this,
        _VIDMM_GLOBAL_ALLOC_NONPAGED **a2,
        unsigned int *a3)
{
  _VIDMM_GLOBAL_ALLOC_NONPAGED **v3; // r10
  char v4; // r9
  bool HasOutstandingPresentReferences; // al
  char v6; // r11
  char v7; // cl

  v3 = a2;
  if ( *((int *)a2 + 26) <= 0 )
  {
    HasOutstandingPresentReferences = _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(a2[12]);
    v7 = v6;
    if ( HasOutstandingPresentReferences )
      v7 = 1;
    v4 = v7;
  }
  else
  {
    v4 = 1;
  }
  if ( a3 )
    *a3 = *((_DWORD *)v3[12] + 3);
  return v4;
}
