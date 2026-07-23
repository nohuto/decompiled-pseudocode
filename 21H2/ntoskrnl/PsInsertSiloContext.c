/*
 * XREFs of PsInsertSiloContext @ 0x1405D25C0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspAssignSiloSystemRootPath @ 0x140905F60 (PspAssignSiloSystemRootPath.c)
 *     ObCreateSiloRootDirectory @ 0x1409806B0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     PspIsSiloContext @ 0x1406C4364 (PspIsSiloContext.c)
 *     PspStorageInsertObject @ 0x1406C4480 (PspStorageInsertObject.c)
 */

__int64 __fastcall PsInsertSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11

  if ( !(unsigned __int8)PspIsSiloContext(a3) )
    return PspStorageInsertObject(v7, a2, 0LL, v4);
  if ( (*(_BYTE *)(v4 - 48 + 26) & 0x40) != 0 )
    v5 = (_QWORD *)(*(_QWORD *)(v4 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v4 - 48 + 26) & 0x7F]) + 32LL);
  if ( *v5 != v6 )
    return 3221225485LL;
  else
    return PspStorageInsertObject(v7, a2, 0LL, v4);
}
