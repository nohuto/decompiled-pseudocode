/*
 * XREFs of ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x1C009FDC8
 * Callers:
 *     ??1COPM@@QEAA@XZ @ 0x1C009FC8C (--1COPM@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall OPM::CList<COPMProtectedOutput>::~CList<COPMProtectedOutput>(__int64 a1)
{
  __int64 i; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
  {
    v3 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)a1 + 8 * i);
    if ( v3 )
    {
      (**v3)(v3, 1LL);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = 0LL;
    }
  }
  if ( *(_QWORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)a1, 0x4D504F47u);
}
