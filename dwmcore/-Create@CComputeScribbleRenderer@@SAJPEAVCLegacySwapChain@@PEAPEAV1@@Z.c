__int64 __fastcall CComputeScribbleRenderer::Create(struct CLegacySwapChain *a1, struct CComputeScribbleRenderer **a2)
{
  char *v4; // rax
  CComputeScribbleRenderer *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = (char *)DefaultHeap::Alloc(0x38uLL);
  v5 = (CComputeScribbleRenderer *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_WORD *)v4 + 24) = 0;
    *(_QWORD *)v4 = &CComputeScribbleRenderer::`vftable';
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 2) = a1;
    v12 = (volatile signed __int32 *)v4;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
    v6 = CComputeScribbleRenderer::Initialize(v5);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    v8 = (unsigned int)v6;
    v9 = 63LL;
  }
  else
  {
    v12 = 0LL;
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 61LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
    (const char *)v8);
  wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::~com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>(&v12);
  return v7;
}
