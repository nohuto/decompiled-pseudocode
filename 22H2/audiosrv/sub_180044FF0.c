/*
 * XREFs of sub_180044FF0 @ 0x180044FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180044FF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = (*a2 - 8LL) & -(__int64)(*a2 != 0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 152LL))(v2);
}
