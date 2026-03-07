void __fastcall CHolographicClient::ProcessAttachExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  CHolographicExclusiveView *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = this;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CHolographicExclusiveView **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v2) >= 0 )
  {
    CHolographicExclusiveView::OnSwapChainAttach((RTL_SRWLOCK *)v2);
    (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
