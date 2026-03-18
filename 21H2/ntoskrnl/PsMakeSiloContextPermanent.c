/*
 * XREFs of PsMakeSiloContextPermanent @ 0x140690B00
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspStorageMakeSlotReadOnly @ 0x140690B2C (PspStorageMakeSlotReadOnly.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1)
{
  __int64 v1; // rcx

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1496);
  else
    v1 = qword_140D32A90;
  return PspStorageMakeSlotReadOnly(v1);
}
