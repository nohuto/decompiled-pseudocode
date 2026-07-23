/*
 * XREFs of VfSuspectDriversInsert @ 0x1409DAB64
 * Callers:
 *     VfTriageAddDrivers @ 0x140A94974 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A94DD8 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140C1D4F8;
  if ( *(__int64 **)qword_140C1D4F8 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_140C1D4F8 = (__int64)a1;
  return result;
}
