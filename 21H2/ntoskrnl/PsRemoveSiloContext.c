/*
 * XREFs of PsRemoveSiloContext @ 0x1409AB7E0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AC7F8 (PspSiloInitializeSystemRootBuffer.c)
 * Callees:
 *     PspStorageRemoveObject @ 0x1409B4B90 (PspStorageRemoveObject.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1496);
  else
    v3 = qword_140D32A90;
  if ( a3 )
    *a3 = 0LL;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
