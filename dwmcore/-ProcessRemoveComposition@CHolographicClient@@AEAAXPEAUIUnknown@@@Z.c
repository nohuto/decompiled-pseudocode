void __fastcall CHolographicClient::ProcessRemoveComposition(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  CHolographicClient::UninitializeResources(this);
  lpVtbl = a2->lpVtbl;
  v5 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_f6510650_98a1_40e3_b87a_8dc216605fda,
         &v5) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 176LL))(*((_QWORD *)this + 3), v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
