void __fastcall COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  *((_BYTE *)this + 180) = *((_BYTE *)a2 + 180);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_BYTE *)this + 183) = *((_BYTE *)a2 + 183);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_BYTE *)this + 181) = *((_BYTE *)a2 + 181);
  *((_BYTE *)this + 182) = *((_BYTE *)a2 + 182);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_BYTE *)this + 184) = *((_BYTE *)a2 + 184);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
}
