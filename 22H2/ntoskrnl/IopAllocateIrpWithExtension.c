/*
 * XREFs of IopAllocateIrpWithExtension @ 0x1402E5F20
 * Callers:
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrpEx @ 0x1402F9A50 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x1403616C0 (IoAllocateIrp.c)
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140A6EBD4 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1402D2220 (IopAllocateIrpPrivate.c)
 *     IopIsActivityTracingEnabled @ 0x1402E66C0 (IopIsActivityTracingEnabled.c)
 *     IopInitActivityIdIrp @ 0x14050091C (IopInitActivityIdIrp.c)
 */

_QWORD *__fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  _QWORD *IrpPrivate; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 2, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    IrpPrivate[23] -= 144LL;
    v5 = IrpPrivate[23];
    *((_BYTE *)IrpPrivate + 67) -= 2;
    *((_BYTE *)IrpPrivate + 66) -= 2;
    IrpPrivate[25] = v5;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v4);
  }
  return v4;
}
