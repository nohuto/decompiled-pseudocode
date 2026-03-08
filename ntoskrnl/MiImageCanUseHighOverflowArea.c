/*
 * XREFs of MiImageCanUseHighOverflowArea @ 0x140A45530
 * Callers:
 *     MiSelectImageBase @ 0x1406A1934 (MiSelectImageBase.c)
 *     MiSelectOverflowDllBase @ 0x140A4555C (MiSelectOverflowDllBase.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageCanUseHighOverflowArea(__int64 a1, __int64 a2)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 44LL) & 0x20) != 0 && (unsigned __int64)(a2 - 0x80000000LL) <= 0x7FFFFFFF;
}
