/*
 * XREFs of PsInsertSiloContext @ 0x14077CEF0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A578 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspAssignSiloSystemRootPath @ 0x1409ACA60 (PspAssignSiloSystemRootPath.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     PspStorageInsertObject @ 0x14077D040 (PspStorageInsertObject.c)
 *     PspIsSiloContext @ 0x14077D1A4 (PspIsSiloContext.c)
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
