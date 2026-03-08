/*
 * XREFs of ?GetResolution@CFormatConverter@@UEAAJPEAN0@Z @ 0x1802B89A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFormatConverter::GetResolution(CFormatConverter *this, double *a2, double *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v6 = -2003292404;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v6 = (*(__int64 (__fastcall **)(__int64, double *, double *))(*(_QWORD *)v7 + 16LL))(v7, a2, a3);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
