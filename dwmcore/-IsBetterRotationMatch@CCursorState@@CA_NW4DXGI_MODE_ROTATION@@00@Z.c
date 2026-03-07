bool __fastcall CCursorState::IsBetterRotationMatch(
        enum DXGI_MODE_ROTATION a1,
        enum DXGI_MODE_ROTATION a2,
        enum DXGI_MODE_ROTATION a3)
{
  return a1 == a3 || a2 != a3 && (a1 - a3 + 4) % 4 == 2;
}
