/*
 * XREFs of SepRmDereferenceCapTable @ 0x1405F4304
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140383ABC (SepCommonAccessCheckEx.c)
 *     SepRmReferenceFindCap @ 0x1405F5D18 (SepRmReferenceFindCap.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     SepRmCapUpdateWrkr @ 0x14085D710 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x1409CF8D8 (SepRmDestroyCapTable.c)
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
