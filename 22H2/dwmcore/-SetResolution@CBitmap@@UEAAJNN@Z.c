/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180218210
 * Callers:
 *     ?SetResolution@CBitmap@@WBI@EAAJNN@Z @ 0x1800F55B0 (-SetResolution@CBitmap@@WBI@EAAJNN@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v4 = a2;
  v5 = a3;
  *((float *)this + 40) = v4;
  *((float *)this + 41) = v5;
  if ( (*((_DWORD *)this + 24))++ == -1 )
    ++*((_DWORD *)this + 24);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return 0LL;
}
