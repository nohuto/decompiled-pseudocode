__int64 __fastcall CRenderTargetBitmap::Create(struct IDeviceTarget *a1, struct IRenderTargetBitmap **a2)
{
  unsigned int v3; // ebx
  CRenderTargetBitmap *v5; // rax
  __int64 v6; // rcx
  CRenderTargetBitmap *v7; // rax
  CRenderTargetBitmap *v8; // rdi

  v3 = 0;
  *a2 = 0LL;
  v5 = (CRenderTargetBitmap *)DefaultHeap::Alloc(0x100uLL);
  if ( v5 && (v7 = CRenderTargetBitmap::CRenderTargetBitmap(v5, 0, 1), (v8 = v7) != 0LL) )
  {
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
    CRenderTargetBitmap::Initialize(v8, a1);
    *a2 = (CRenderTargetBitmap *)((char *)v8 + 120);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  return v3;
}
