char __fastcall COcclusionContext::DoesImageOcclude(COcclusionContext *this, struct IUnknown *a2, char a3)
{
  bool v3; // bl
  struct IUnknownVtbl *lpVtbl; // rax
  COcclusionContext *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      return 1;
    }
    else
    {
      lpVtbl = a2->lpVtbl;
      v6 = 0LL;
      if ( ((int (__fastcall *)(struct IUnknown *, GUID *, COcclusionContext **))lpVtbl->QueryInterface)(
             a2,
             &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
             &v6) >= 0 )
        v3 = (*(unsigned __int8 (__fastcall **)(COcclusionContext *))(*(_QWORD *)v6 + 8LL))(v6) != 0;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v6);
    }
  }
  return v3;
}
