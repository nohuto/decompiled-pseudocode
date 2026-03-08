/*
 * XREFs of ??1?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ @ 0x1C00F4820
 * Callers:
 *     ??1CMonitorAPI@@QEAA@XZ @ 0x1C00F47E0 (--1CMonitorAPI@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall OPM::CList<CPhysicalMonitorHandle>::~CList<CPhysicalMonitorHandle>(__int64 a1, void *a2)
{
  __int64 i; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
  {
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)a1 + 8 * i);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = 0LL;
    }
  }
  OPM::OPMFreeMemory(*(OPM **)a1, a2);
}
