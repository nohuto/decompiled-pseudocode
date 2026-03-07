char __fastcall CClipBrush::IsOpaqueRect(CClipBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  __int64 v3; // rcx
  char v4; // bl

  v3 = *((_QWORD *)this + 11);
  v4 = 0;
  if ( v3 )
    return (*(unsigned __int8 (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v3 + 296LL))(
             v3,
             a2,
             a3) != 0;
  return v4;
}
