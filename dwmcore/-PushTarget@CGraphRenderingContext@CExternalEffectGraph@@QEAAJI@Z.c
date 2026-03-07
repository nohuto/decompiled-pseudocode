__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::PushTarget(
        CExternalEffectGraph::CGraphRenderingContext *this,
        unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  struct IBitmapRealization *v8; // rdx
  CDrawListBitmap *v9; // rax
  int v11; // [rsp+20h] [rbp-38h]
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v13[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v15 = 0LL;
  v4 = a2;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v15);
  v5 = CDrawingContext::PushOffScreenRenderingLayer(
         v2,
         *((_QWORD *)this + 2) + 1560LL,
         (char *)this + 40,
         *((unsigned int *)this + 2),
         3,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v5,
      v11);
  }
  else
  {
    v7 = v15;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1LL);
    *((_DWORD *)this + 9) = v4;
    if ( v7 )
      v8 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v7 + 8) + 16LL) + v7 + 8);
    else
      v8 = 0LL;
    v9 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v12, v8);
    CDrawListBitmap::operator=(*((_QWORD *)this + 6) + 104 * v4, v9);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v13);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v12);
    v6 = 0;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v15);
  return v6;
}
