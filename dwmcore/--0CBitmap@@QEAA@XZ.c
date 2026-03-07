CBitmap *__fastcall CBitmap::CBitmap(CBitmap *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  CBitmap *result; // rax

  *(_QWORD *)this = &IBitmapLock::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = &IBitmapUnlock::`vftable';
  *((_QWORD *)this + 4) = &IBitmapDest2::`vftable';
  *((_QWORD *)this + 5) = &IBitmapUnlock::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &CBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  v2 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 25) = 0;
  *(_QWORD *)((char *)this + *(int *)(v2 + 4) + 8) = &CBitmap::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 136;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  return result;
}
