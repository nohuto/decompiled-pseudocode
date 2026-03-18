/*
 * XREFs of MmQueryApiSetSchema @ 0x14035EB68
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403E3B24 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407D468C (PsQueryCurrentApiSetSchema.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C658F8;
  result = &qword_140C65900;
  *a2 = &qword_140C65900;
  return result;
}
