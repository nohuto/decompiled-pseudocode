/*
 * XREFs of MmQueryApiSetSchema @ 0x1402F3614
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DE604 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x14078495C (PsQueryCurrentApiSetSchema.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C65478;
  result = &qword_140C65480;
  *a2 = &qword_140C65480;
  return result;
}
