CColorKeyBitmapRealization *__fastcall CColorKeyBitmapRealization::CColorKeyBitmapRealization(
        CColorKeyBitmapRealization *this)
{
  CColorKeyBitmapRealization *v1; // r11
  CColorKeyBitmapRealization *result; // rax

  *((_QWORD *)this + 2) = &CColorKeyBitmapRealization::`vbtable'{for `CD2DBitmapCache'};
  *((_QWORD *)this + 11) = &CColorKeyBitmapRealization::`vbtable'{for `IGDIBitmapRealization'};
  *((_QWORD *)this + 18) = &CColorKeyBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 20) = &CColorKeyBitmapRealization::`vbtable'{for `IBitmapRealization'};
  CD2DBitmapCache::CD2DBitmapCache(this, 0);
  *(_QWORD *)v1 = &CColorKeyBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)v1 + 10) = &CColorKeyBitmapRealization::`vftable'{for `IGDIBitmapRealization'};
  *((_QWORD *)v1 + 12) = &CColorKeyBitmapRealization::`vftable';
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 4LL) + 16) = &CColorKeyBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 8LL) + 16) = &CColorKeyBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 12LL) + 16) = &CColorKeyBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 16LL) + 16) = &CColorKeyBitmapRealization::`vftable'{for `IBitmapRealization'};
  result = v1;
  *(_DWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 2) + 4LL) + 12) = 0;
  *((_QWORD *)v1 + 13) = 0LL;
  return result;
}
