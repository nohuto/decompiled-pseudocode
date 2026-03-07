void __fastcall CHolographicClient::ProcessRemoveExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  CHolographicExclusiveView *v3; // rcx
  CHolographicExclusiveView *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CHolographicExclusiveView **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v4) >= 0 )
  {
    v3 = (CHolographicExclusiveView *)*((_QWORD *)this + 25);
    if ( v3 == v4 )
    {
      CHolographicExclusiveView::DeactivateView(v3, this);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
    }
    if ( (unsigned int)DynArray<CHolographicExclusiveView *,0>::Remove((__int64 *)this + 9, &v4) )
      (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
