__int64 __fastcall CDirectFlipInfo::GetCutoffZ(CVisual **this, const struct CVisualTree *a2)
{
  unsigned int v2; // ebx
  struct COcclusionInfo *OcclusionInfo; // rax

  v2 = 0x7FFFFFFF;
  if ( *((int *)this + 13) >= 3 )
  {
    OcclusionInfo = CVisual::GetOcclusionInfo(
                      this[1],
                      a2,
                      (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
    if ( OcclusionInfo )
      return (*(unsigned int (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 16LL))(OcclusionInfo);
  }
  return v2;
}
