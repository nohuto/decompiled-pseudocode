/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x18027E1A0
 * Callers:
 *     ?GetSize@CBitmap@@WDA@EAAJPEAI0@Z @ 0x180119170 (-GetSize@CBitmap@@WDA@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 26);
    *a3 = *((_DWORD *)this + 27);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
    return 0LL;
  }
  else
  {
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
    return 2147942487LL;
  }
}
