/*
 * XREFs of SepRmDereferenceCapTable @ 0x1405965C0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372BC4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepRmDereferenceCap @ 0x1405965A0 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140598084 (SepRmReferenceFindCap.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepRmCapUpdateWrkr @ 0x1407CDEE0 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x140926198 (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCapTable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return SepRmDestroyCapTable((PVOID)a1);
  }
  return result;
}
