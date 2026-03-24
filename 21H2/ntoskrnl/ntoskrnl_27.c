/*
 * XREFs of ntoskrnl_27 @ 0x1407200D0
 * Callers:
 *     NtQueryLicenseValue @ 0x140720160 (NtQueryLicenseValue.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB014 (SLQueryLicenseValueInternal.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rcx

  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 113);
  if ( qword_140D2D4E0 )
    return qword_140D2D4E0(v9, a1, a2, a3, a4, a5);
  else
    return SLQueryLicenseValueInternal(v9, a1, a2, a3, a4, a5);
}
