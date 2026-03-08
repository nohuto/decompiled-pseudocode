/*
 * XREFs of AcpiArblibInitializeArbiter @ 0x1C000B688
 * Callers:
 *     ACPIBuildPdo @ 0x1C000DC84 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0017830 (ACPIDispatchIrpDepPdoQueryID.c)
 * Callees:
 *     AcpiArblibFreeArbiterInstance @ 0x1C000B64C (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C007CB64 (AcpiArblibAllocateArbiterInstance.c)
 *     AcpiInitializeBusNumberArbiter @ 0x1C008204C (AcpiInitializeBusNumberArbiter.c)
 *     AcpiInitializeMemoryArbiter @ 0x1C0088F2C (AcpiInitializeMemoryArbiter.c)
 *     AcpiInitializePortArbiter @ 0x1C008C02C (AcpiInitializePortArbiter.c)
 */

__int64 __fastcall AcpiArblibInitializeArbiter(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v6; // eax
  __int64 ArbiterInstance; // rax
  _BYTE *v8; // rbx
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // edi

  if ( a2 > 6 )
    return 3221225485LL;
  v6 = 74;
  if ( !_bittest(&v6, a2) )
    return 3221225485LL;
  ArbiterInstance = AcpiArblibAllocateArbiterInstance();
  v8 = (_BYTE *)ArbiterInstance;
  if ( !ArbiterInstance )
    return 3221225626LL;
  if ( a2 == 1 )
  {
    v10 = AcpiInitializePortArbiter(ArbiterInstance, a1);
  }
  else if ( a2 == 3 )
  {
    v10 = AcpiInitializeMemoryArbiter(ArbiterInstance, a1);
  }
  else
  {
    v10 = AcpiInitializeBusNumberArbiter(ArbiterInstance, a1);
  }
  v11 = v10;
  if ( v10 >= 0 )
  {
    v8[128] = 1;
    result = 0LL;
    *a3 = v8;
  }
  else
  {
    AcpiArblibFreeArbiterInstance(v8);
    return v11;
  }
  return result;
}
