bool __fastcall CRenderingTechniqueFragment::SurfaceDescription::operator==(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_BYTE *)(a1 + 4) == *(_BYTE *)(a2 + 4)
      && *(_BYTE *)(a1 + 8) == *(_BYTE *)(a2 + 8)
      && *(_BYTE *)(a1 + 9) == *(_BYTE *)(a2 + 9);
}
