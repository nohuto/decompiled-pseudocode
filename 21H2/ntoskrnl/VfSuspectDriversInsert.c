/*
 * XREFs of VfSuspectDriversInsert @ 0x140A9A8C4
 * Callers:
 *     VfTriageAddDrivers @ 0x140B53724 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B53B88 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140C1B2C8;
  if ( *(__int64 **)qword_140C1B2C8 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_140C1B2C8 = (__int64)a1;
  return result;
}
