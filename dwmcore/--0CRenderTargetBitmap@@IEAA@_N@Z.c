CRenderTargetBitmap *__fastcall CRenderTargetBitmap::CRenderTargetBitmap(CRenderTargetBitmap *this, char a2, int a3)
{
  char *v3; // rdi
  CRenderTargetBitmap *result; // rax

  v3 = (char *)this + 16;
  if ( a3 )
  {
    *(_QWORD *)v3 = &CRenderTargetBitmap::`vbtable';
    *((_QWORD *)this + 11) = &CRenderTargetBitmap::`vbtable'{for `CDeviceResource'};
    *((_QWORD *)this + 16) = &CRenderTargetBitmap::`vbtable'{for `IRenderTargetBitmap'};
    *((_QWORD *)this + 25) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 28) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 31) = &CRenderTargetBitmap::`vbtable'{for `IBitmapRealization'};
  }
  CD2DBitmapCache::CD2DBitmapCache(this, 0);
  CDeviceResource::CDeviceResource((CRenderTargetBitmap *)((char *)this + 80));
  IRenderTargetBitmap::IRenderTargetBitmap((CRenderTargetBitmap *)((char *)this + 120));
  *((_QWORD *)this + 10) = &CRenderTargetBitmap::`vftable';
  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 15) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 4LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 8LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 12LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 16LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 20LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 4LL) + 12) = *(_DWORD *)(*(_QWORD *)v3 + 4LL) - 144;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 8LL) + 12) = *(_DWORD *)(*(_QWORD *)v3 + 8LL) - 160;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 12LL) + 12) = *(_DWORD *)(*(_QWORD *)v3 + 12LL) - 176;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 16LL) + 12) = *(_DWORD *)(*(_QWORD *)v3 + 16LL) - 200;
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 20LL) + 12) = *(_DWORD *)(*(_QWORD *)v3 + 20LL) - 224;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 144) = a2;
  *((_BYTE *)this + 145) = 0;
  return result;
}
