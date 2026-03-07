CClientMemoryBitmap *__fastcall CClientMemoryBitmap::CClientMemoryBitmap(CClientMemoryBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CClientMemoryBitmap *result; // rax

  *((_QWORD *)this + 1) = &CClientMemoryBitmap::`vbtable';
  *((_QWORD *)this + 18) = &CClientMemoryBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 27) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  CSystemMemoryBitmap::CSystemMemoryBitmap(this);
  *(_QWORD *)this = &CClientMemoryBitmap::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 17) = &CSystemMemoryBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 19) = &CClientMemoryBitmap::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CClientMemoryBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CClientMemoryBitmap::`vftable'{for `IPixelFormat's `ID2DBitmapCacheSource'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 184;
  v3 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 200;
  *((_QWORD *)this + 22) = 0LL;
  return result;
}
