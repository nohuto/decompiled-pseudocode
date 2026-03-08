/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x1800F1B00
 * Callers:
 *     ?GetStride@CBitmapLock@@WBI@EAAJPEAI@Z @ 0x18011A810 (-GetStride@CBitmapLock@@WBI@EAAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 72) )
    {
      v5 = 0;
      *a2 = *((_DWORD *)this + 24);
    }
    else
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003292412, 0x8Cu, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024809, 0x8Au, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return v5;
}
