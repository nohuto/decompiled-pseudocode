/*
 * XREFs of SepRmDereferenceCap @ 0x1405965A0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 * Callees:
 *     SepRmDereferenceCapTable @ 0x1405965C0 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    return SepRmDereferenceCapTable(v4, a2, a3, a4);
  return result;
}
