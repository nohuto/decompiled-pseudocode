/*
 * XREFs of ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180050150
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18004FE5C (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x180050DC0 (--0CBitmap@@QEAA@XZ.c)
 */

CWICBitmapWrapper *__fastcall CWICBitmapWrapper::CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 30) = 0LL;
  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CWICBitmapWrapper::`vftable'{for `CMTALock'};
  return this;
}
