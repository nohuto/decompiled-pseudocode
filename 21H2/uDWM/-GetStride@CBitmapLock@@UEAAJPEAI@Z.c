/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180050480
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x1800584E0 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180050CCC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  char *v4; // rcx
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (char *)this - 56;
  v7 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      *a2 = *((_DWORD *)this + 10);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292412, 0x8Eu);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x8Cu);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v7);
  return v3;
}
