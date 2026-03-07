struct D2D_SIZE_U __fastcall CHolographicInteropTarget::GetSize(CHolographicInteropTarget *this, _DWORD *a2)
{
  struct D2D_SIZE_U result; // rax

  *a2 = 0;
  result = (struct D2D_SIZE_U)a2;
  a2[1] = 0;
  return result;
}
