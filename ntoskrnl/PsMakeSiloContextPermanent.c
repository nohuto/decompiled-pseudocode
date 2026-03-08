/*
 * XREFs of PsMakeSiloContextPermanent @ 0x1409A96D0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageMakeSlotReadOnly @ 0x1407359D8 (PspStorageMakeSlotReadOnly.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  if ( a1 )
    v2 = *(_QWORD *)(a1 + 1520);
  else
    v2 = qword_140D49ED0;
  return PspStorageMakeSlotReadOnly(v2, a2);
}
