/*
 * XREFs of VfIoInitializeIrp @ 0x140ACA99C
 * Callers:
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 *     IovInitializeIrp @ 0x140ABE758 (IovInitializeIrp.c)
 * Callees:
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140ADE768 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIoInitializeIrp(__int64 a1, const void *a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rdi

  result = VfIrpDatabaseEntryFindAndLock(a1);
  v7 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 240) )
      ViErrorReport1(0x310u, a2, (const void *)a1);
    if ( !a3 && (*(_DWORD *)(v7 + 56) & 0x200000) != 0 && (*(_BYTE *)(a1 + 71) & 1) != 0 )
      ViErrorReport1(0x20Du, a2, (const void *)a1);
    if ( (*(_DWORD *)(a1 + 16) & 8) != 0 || (*(_DWORD *)(v7 + 56) & 0x1000) != 0 )
      ViErrorReport1(0x311u, a2, (const void *)a1);
    return VfIrpDatabaseEntryReleaseLock(v7);
  }
  return result;
}
