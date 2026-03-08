/*
 * XREFs of IrqArbGetDeviceIrql @ 0x1C009D304
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0098DAC (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C009A6BC (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 *     IcSetPossibleInput @ 0x1C009F6B4 (IcSetPossibleInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C009ABF4 (ProcessorGetDeviceIdtAssignment.c)
 */

__int64 __fastcall IrqArbGetDeviceIrql(_DWORD *a1, _BYTE *a2)
{
  unsigned int v4; // edi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v4 = a1[1];
  if ( !*a1 )
  {
    if ( (unsigned __int8)HalPrivateDispatchTable[62](0LL, (unsigned int)a1[14]) )
    {
      v7 = 0LL;
      if ( (int)((__int64 (__fastcall **)(_DWORD *, __int64))HalPrivateDispatchTable)[59](a1, (__int64)&v8) >= 0
        && (int)ProcessorGetDeviceIdtAssignment(0LL, v8, 0, &v6) >= 0 )
      {
        v4 = DWORD1(v7);
      }
    }
  }
  *a2 = HalConvertDeviceIdtToIrql(v4);
  return 0LL;
}
