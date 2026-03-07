bool __fastcall DXGTARGETENTRY::operator!=(_DWORD *a1, _DWORD *a2)
{
  return a1[6] != a2[6] || a1[7] != a2[7] || a1[8] != a2[8];
}
