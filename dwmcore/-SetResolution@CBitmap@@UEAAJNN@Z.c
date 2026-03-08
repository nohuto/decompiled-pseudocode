/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x18027E900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v4 = a2;
  v5 = a3;
  *((float *)this + 16) = v4;
  *((float *)this + 17) = v5;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return 0LL;
}
