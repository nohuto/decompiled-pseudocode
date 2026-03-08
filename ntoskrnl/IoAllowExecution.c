/*
 * XREFs of IoAllowExecution @ 0x140240058
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetDevicePDO @ 0x14023FFC4 (IopGetDevicePDO.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

bool __fastcall IoAllowExecution(__int64 a1)
{
  _DWORD *DevicePDO; // rax
  int v2; // ebx

  DevicePDO = IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  if ( !DevicePDO )
    return 1;
  v2 = DevicePDO[12];
  ObfDereferenceObject(DevicePDO);
  return (v2 & 0x800000) == 0;
}
