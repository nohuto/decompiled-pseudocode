__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 54) == 0;
  *((_WORD *)this + 5) = 0;
  return BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
           this,
           (struct _LUID *)((char *)this + 12),
           *((_DWORD *)this + 5),
           *((_DWORD *)this + 6),
           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)this + 7),
           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)this + 8),
           *((_BYTE *)this + 53) != 0,
           *((_BYTE *)this + 60) != 0,
           !v1);
}
