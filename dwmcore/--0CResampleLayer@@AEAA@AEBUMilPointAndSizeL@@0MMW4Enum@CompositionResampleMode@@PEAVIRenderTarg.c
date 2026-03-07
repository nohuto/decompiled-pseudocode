__int64 __fastcall CResampleLayer::CResampleLayer(
        __int64 a1,
        __int128 *a2,
        const struct MilPointAndSizeL *a3,
        float a4,
        float a5,
        int a6,
        struct IRenderTargetBitmap *a7,
        __int64 a8)
{
  __int64 result; // rax
  __int128 v11; // xmm0

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a3, a7);
  *(_QWORD *)a1 = &CResampleLayer::`vftable';
  *(_DWORD *)(a1 + 120) = a6;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 128),
    a8);
  result = a1;
  *(float *)(a1 + 140) = fmaxf(a5, 1.0);
  v11 = *a2;
  *(float *)(a1 + 136) = fmaxf(a4, 1.0);
  *(_OWORD *)(a1 + 144) = v11;
  return result;
}
