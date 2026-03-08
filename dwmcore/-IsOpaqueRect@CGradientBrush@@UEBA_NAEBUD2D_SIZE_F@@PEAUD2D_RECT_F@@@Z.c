/*
 * XREFs of ?IsOpaqueRect@CGradientBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18012F600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CGradientBrush::IsOpaqueRect(CGradientBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  FLOAT width; // xmm0_4
  bool result; // al
  FLOAT height; // xmm1_4

  if ( !*((_BYTE *)this + 224)
    || !*((_BYTE *)this + 225)
    || (*(unsigned __int8 (__fastcall **)(CGradientBrush *))(*(_QWORD *)this + 192LL))(this) )
  {
    return 0;
  }
  width = a2->width;
  result = 1;
  height = a2->height;
  a3->left = 0.0;
  a3->top = 0.0;
  a3->right = width;
  a3->bottom = height;
  return result;
}
