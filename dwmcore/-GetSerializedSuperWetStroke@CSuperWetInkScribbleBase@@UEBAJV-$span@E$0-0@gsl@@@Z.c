/*
 * XREFs of ?GetSerializedSuperWetStroke@CSuperWetInkScribbleBase@@UEBAJV?$span@E$0?0@gsl@@@Z @ 0x1802B5A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSuperWetInkScribbleBase::GetSerializedSuperWetStroke(__int64 a1, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 64LL))(
           *(_QWORD *)(a1 + 16),
           *((_QWORD *)a2 + 1),
           *a2);
}
