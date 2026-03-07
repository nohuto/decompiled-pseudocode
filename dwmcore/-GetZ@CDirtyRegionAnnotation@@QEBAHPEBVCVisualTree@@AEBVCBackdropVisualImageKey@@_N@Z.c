__int64 __fastcall CDirtyRegionAnnotation::GetZ(
        CVisual **this,
        const struct CVisualTree *a2,
        const struct CBackdropVisualImageKey *a3)
{
  unsigned int *OcclusionInfo; // rcx
  __int64 result; // rax

  OcclusionInfo = (unsigned int *)CVisual::GetOcclusionInfo(this[2], a2, a3);
  result = 0LL;
  if ( OcclusionInfo )
  {
    if ( *((_BYTE *)this + 40) )
      return OcclusionInfo[7];
    else
      return (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)OcclusionInfo + 16LL))(OcclusionInfo);
  }
  return result;
}
