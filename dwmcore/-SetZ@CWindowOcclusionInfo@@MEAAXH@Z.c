void __fastcall CWindowOcclusionInfo::SetZ(CWindowOcclusionInfo *this, int a2)
{
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 12) = a2;
  *((_DWORD *)this + 11) = a2;
  *((_DWORD *)this + 10) = a2;
}
