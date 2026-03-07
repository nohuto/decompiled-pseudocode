__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  struct ID2DBitmapCacheSource *v10; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v3 = CWICBitmapWrapper::Create(a1, &v10);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x51u, 0LL);
  }
  else
  {
    v6 = (char *)v10 + *(int *)(*((_QWORD *)v10 + 1) + 4LL) + 8;
    v7 = (**(__int64 (__fastcall ***)(char *, GUID *, struct IBitmapSource **))v6)(
           v6,
           &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213,
           a2);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x53u, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
  return v5;
}
