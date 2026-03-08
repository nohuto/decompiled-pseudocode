/*
 * XREFs of PsRemoveSiloContext @ 0x1409A9700
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140735A88 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AA748 (PspSiloInitializeSystemRootBuffer.c)
 * Callees:
 *     PspStorageRemoveObject @ 0x1409B4F94 (PspStorageRemoveObject.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1520);
  else
    v3 = qword_140D49ED0;
  if ( a3 )
    *a3 = 0LL;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
