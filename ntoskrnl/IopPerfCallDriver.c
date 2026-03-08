/*
 * XREFs of IopPerfCallDriver @ 0x14045728A
 * Callers:
 *     IofCallDriverSpecifyReturn @ 0x1402B91D0 (IofCallDriverSpecifyReturn.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IovCallDriver @ 0x140ABE1D0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140ABE96C (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140ABE9B4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopAllocateIrpExtension @ 0x1402B22EC (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x1402B903C (IopfCallDriver.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14035AA40 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x140556E18 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x140556EEC (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, ULONG_PTR a2)
{
  _WORD *IrpExtension; // rcx
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebp

  if ( (IopPerfStatus & 2) != 0 && IopIrpHasValidCombinationOfExtensionTypes(a2, 1) )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 1);
    if ( IrpExtension )
      *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v5 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), a2, v5);
    v6 = IopfCallDriver((__int64)Object, a2);
    IopPerfLogCallReturnEvent(a2, v5);
    ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)Object, a2);
  }
  return v6;
}
