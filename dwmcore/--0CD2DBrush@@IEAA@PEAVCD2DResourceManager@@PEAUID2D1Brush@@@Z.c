CD2DBrush *__fastcall CD2DBrush::CD2DBrush(CD2DBrush *this, struct CD2DResourceManager *a2, struct ID2D1Brush *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  *((_QWORD *)this + 2) = &CD2DBrush::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 15) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  CD2DResource::CD2DResource(this, a2, 0);
  *(_QWORD *)this = &CD2DBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DEffect::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DBrush::`vftable'{for `IDeviceResource'};
  v5 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 80;
  v6 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 96;
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
