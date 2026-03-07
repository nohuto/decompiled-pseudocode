CFormatConverter *__fastcall CFormatConverter::CFormatConverter(CFormatConverter *this)
{
  __int64 v2; // rcx
  CFormatConverter *result; // rax

  *((_QWORD *)this + 1) = &CFormatConverter::`vbtable';
  *(_QWORD *)this = &IBitmapLock::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 100) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *((_DWORD *)this + 4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CFormatConverter::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CFormatConverter::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 792;
  *((_QWORD *)this + 14) = &CScanPipeline::`vftable';
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 15) = (char *)this + 152;
  *((_QWORD *)this + 16) = (char *)this + 152;
  *((_DWORD *)this + 34) = 10;
  *((_DWORD *)this + 35) = 10;
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 81) = (char *)this + 680;
  *((_QWORD *)this + 82) = (char *)this + 680;
  *((_DWORD *)this + 166) = 3;
  *((_DWORD *)this + 167) = 3;
  *((_DWORD *)this + 182) = 0;
  *((_QWORD *)this + 88) = (char *)this + 736;
  *((_QWORD *)this + 89) = (char *)this + 736;
  *((_DWORD *)this + 180) = 2;
  *((_DWORD *)this + 181) = 2;
  result = this;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  return result;
}
