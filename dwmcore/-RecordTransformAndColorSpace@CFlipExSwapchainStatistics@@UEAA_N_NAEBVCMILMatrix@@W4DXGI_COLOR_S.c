char __fastcall CFlipExSwapchainStatistics::RecordTransformAndColorSpace(
        CFlipExSwapchainStatistics *this,
        char a2,
        const struct CMILMatrix *a3,
        enum DXGI_COLOR_SPACE_TYPE a4)
{
  enum DXGI_MODE_ROTATION Rotation; // eax

  if ( !a2 )
    return 0;
  Rotation = CMILMatrix::GetRotation(a3);
  if ( *((_DWORD *)this + 7) == Rotation )
    return 0;
  *((_DWORD *)this + 7) = Rotation;
  return 1;
}
