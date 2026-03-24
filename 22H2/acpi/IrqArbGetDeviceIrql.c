/*
 * XREFs of IrqArbGetDeviceIrql @ 0x1C0095178
 * Callers:
 *     IrqTranslatepQueryDeviceIrql @ 0x1C00924E4 (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbAddAllocation @ 0x1C0092810 (IrqArbAddAllocation.c)
 *     IcSetPossibleInput @ 0x1C0096628 (IcSetPossibleInput.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0097104 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C00936A0 (ProcessorGetDeviceIdtAssignment.c)
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
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))HalPrivateDispatchTable[62])(0LL, (unsigned int)a1[14]) )
    {
      v7 = 0LL;
      if ( ((int (__fastcall *)(_DWORD *, int *))HalPrivateDispatchTable[59])(a1, &v8) >= 0
        && (int)ProcessorGetDeviceIdtAssignment(0LL, v8, 0, &v6) >= 0 )
      {
        v4 = DWORD1(v7);
      }
    }
  }
  *a2 = HalConvertDeviceIdtToIrql(v4);
  return 0LL;
}
