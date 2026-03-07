__int64 __fastcall CKMAdapterHandle::Initialize(CKMAdapterHandle *this, struct IDXGIAdapter *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _BYTE v9[296]; // [rsp+30h] [rbp-148h] BYREF
  struct _LUID v10; // [rsp+158h] [rbp-20h]

  v3 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))a2->lpVtbl->GetDesc)(a2, v9);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x33u, 0LL);
  }
  else
  {
    v6 = CKMAdapterHandle::Initialize(this, v10);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x35u, 0LL);
  }
  return v5;
}
