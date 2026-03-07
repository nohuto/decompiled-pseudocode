CWICBitmapRealization *__fastcall CWICBitmapRealization::CWICBitmapRealization(CWICBitmapRealization *this)
{
  CWICBitmapRealization *v1; // r11
  CWICBitmapRealization *result; // rax

  *((_QWORD *)this + 2) = &CWICBitmapRealization::`vbtable';
  *((_QWORD *)this + 11) = &CWICBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 17) = &CWICBitmapRealization::`vbtable'{for `IPixelFormat'};
  CD2DBitmapCache::CD2DBitmapCache(this, 0);
  *(_QWORD *)v1 = &CWICBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)v1 + 10) = &CWICBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)v1 + 12) = &CWICBitmapRealization::`vftable'{for `IWICDecoderBitmapSource'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 4LL) + 16) = &CWICBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 8LL) + 16) = &CWICBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 12LL) + 16) = &CWICBitmapRealization::`vftable'{for `IPixelFormat'};
  result = v1;
  *(_DWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 4LL) + 12) = 0;
  return result;
}
