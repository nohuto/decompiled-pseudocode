__int64 __fastcall CBitmapResource::ProcessSource(
        CBitmapResource *this,
        struct CResourceTable *a2,
        struct IWICBitmapSource **a3)
{
  struct IBitmapRealization **v3; // rdi
  __int64 v5; // r8
  struct IBitmapRealization *v7; // rdx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  struct IWICBitmapSource *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int DefaultDevice; // eax
  unsigned int v16; // ecx
  struct IBitmapRealization *StockTransparentBitmap; // rax
  CD3DDevice *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v3 = (struct IBitmapRealization **)((char *)this + 72);
  v5 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v5 )
  {
    v13 = *(int *)(*(_QWORD *)(v5 + 8) + 4LL) + v5 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( a3[1] )
  {
    v7 = *v3;
    *v3 = 0LL;
    if ( v7 )
    {
      v14 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v8 = CWICBitmapRealization::Create(a3[1], v3);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18u, 0LL);
  }
  else
  {
    v18 = 0LL;
    DefaultDevice = CDeviceManager::GetDefaultDevice(this, &v18);
    v10 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, DefaultDevice, 0x1Fu, 0LL);
    }
    else
    {
      StockTransparentBitmap = CD3DDevice::GetStockTransparentBitmap(v18);
      wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(
        (__int64 *)v3,
        (__int64)StockTransparentBitmap);
    }
    if ( v18 )
      CD3DDevice::Release(v18);
  }
  v11 = a3[1];
  if ( v11 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v11->lpVtbl->Release)(v11);
  (*(void (__fastcall **)(CBitmapResource *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return v10;
}
