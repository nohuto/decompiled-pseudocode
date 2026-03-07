char __fastcall CGlobalCompositionSurfaceInfo::IsSwapChain(CGlobalCompositionSurfaceInfo *this)
{
  char v1; // dl

  v1 = 1;
  if ( (unsigned int)((__int64)(*((_QWORD *)this + 23) - *((_QWORD *)this + 22)) >> 3) <= 1 )
    return *((_DWORD *)this + 34) == 3;
  return v1;
}
