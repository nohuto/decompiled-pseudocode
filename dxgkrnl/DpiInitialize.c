/*
 * XREFs of DpiInitialize @ 0x1C005E090
 * Callers:
 *     <none>
 * Callees:
 *     DpiInitializeInternal @ 0x1C00210F8 (DpiInitializeInternal.c)
 */

__int64 __fastcall DpiInitialize(void *a1, const UNICODE_STRING *a2, _QWORD *a3)
{
  return DpiInitializeInternal(a1, a2, a3, 0);
}
