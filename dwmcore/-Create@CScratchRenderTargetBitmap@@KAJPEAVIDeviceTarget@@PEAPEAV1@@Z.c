__int64 __fastcall CScratchRenderTargetBitmap::Create(struct IDeviceTarget *a1, struct CScratchRenderTargetBitmap **a2)
{
  unsigned int v3; // ebx
  CScratchRenderTargetBitmap *v5; // rax
  unsigned int v6; // ecx
  CScratchRenderTargetBitmap *v7; // rax
  CRenderTargetBitmap *v8; // rdi

  v3 = 0;
  *a2 = 0LL;
  v5 = (CScratchRenderTargetBitmap *)DefaultHeap::Alloc(0x120uLL);
  if ( v5 && (v7 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v5), (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CScratchRenderTargetBitmap *)((char *)v7 + 8));
    CRenderTargetBitmap::Initialize(v8, a1);
    *a2 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v3;
}
