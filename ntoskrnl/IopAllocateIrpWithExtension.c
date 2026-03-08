/*
 * XREFs of IopAllocateIrpWithExtension @ 0x1402B18A4
 * Callers:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrpEx @ 0x140352E90 (IoAllocateIrpEx.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140B6AAE8 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x1402B1D90 (IopIsActivityTracingEnabled.c)
 *     IopAllocateIrpPrivate @ 0x1403122C0 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140553324 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 IrpPrivate; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  LOBYTE(a2) = a2 + 2;
  IrpPrivate = IopAllocateIrpPrivate(0LL, a2, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 144LL;
    v5 = *(_QWORD *)(IrpPrivate + 184);
    *(_BYTE *)(IrpPrivate + 67) -= 2;
    *(_BYTE *)(IrpPrivate + 66) -= 2;
    *(_QWORD *)(IrpPrivate + 200) = v5;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v4);
  }
  return v4;
}
