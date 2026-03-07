void __fastcall CSuperWetInkManager::TurnOffScribblingForTarget(CSuperWetInkManager *this, struct IMonitorTarget *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, GUID *, CSuperWetInkManager **); // rbx
  CComputeScribbleRenderer *v6; // rax
  __int64 v7; // rcx
  CSuperWetInkManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v2 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 144LL))(a2);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    v8 = 0LL;
    v4 = v2 + *(int *)(v3 + 4);
    v5 = **(int (__fastcall ***)(__int64, GUID *, CSuperWetInkManager **))(v4 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v8);
    if ( v5(v4 + 8, &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37, &v8) >= 0 )
    {
      (*(void (__fastcall **)(CSuperWetInkManager *, _QWORD))(*(_QWORD *)v8 + 312LL))(v8, 0LL);
      v6 = (CComputeScribbleRenderer *)(*(__int64 (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v8 + 280LL))(v8);
      if ( v6 )
        CComputeScribbleRenderer::DeactivateOnNextFrame(v6);
    }
    if ( v8 )
    {
      v7 = (__int64)v8 + *(int *)(*((_QWORD *)v8 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
}
