/*
 * XREFs of NtUnmapViewOfSection @ 0x1406A2480
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x1406A24A0 (NtUnmapViewOfSectionEx.c)
 */

__int64 __fastcall NtUnmapViewOfSection(__int64 a1, __int64 a2)
{
  return NtUnmapViewOfSectionEx(a1, a2, 0LL);
}
