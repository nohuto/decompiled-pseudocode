/*
 * XREFs of ?GetPixelFormatInfo@CFormatConverter@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802B8940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v4; // eax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v4 = *(_DWORD *)(a1 + 92);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 84);
  *(_DWORD *)(a2 + 8) = v4;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return a2;
}
