void __fastcall CHolographicClient::ProcessReleaseExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknown **v3; // rax
  CHolographicExclusiveView *v4; // rcx
  CHolographicExclusiveView *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CHolographicExclusiveView **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v5) >= 0 )
  {
    v3 = (struct IUnknown **)v5;
    v4 = (CHolographicExclusiveView *)*((_QWORD *)this + 25);
    if ( v4 == v5 && !*((_BYTE *)v4 + 83) )
    {
      CHolographicExclusiveView::DeactivateView(v4, this);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
      v3 = (struct IUnknown **)v5;
    }
    CHolographicExclusiveView::OnSwapChainRelease(v3);
    (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
