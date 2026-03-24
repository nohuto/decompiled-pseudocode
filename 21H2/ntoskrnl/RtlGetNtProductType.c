/*
 * XREFs of RtlGetNtProductType @ 0x1402C2020
 * Callers:
 *     IoFillDumpHeader @ 0x140501AF8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140505040 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x140538DBC (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x1406AC620 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14071B950 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409155A8 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206540 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D24 (KeIsExecutingInArbitraryThreadContext.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14077AA04 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v6; // rax

  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(v3, v2)
      || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
    {
      v6 = &PspHostSiloGlobals;
    }
    else
    {
      v6 = *(_QWORD **)(ThreadServerSilo + 1272);
    }
    v4 = 1;
    *a1 = *(_DWORD *)(v6[141] + 16LL);
  }
  else
  {
    v4 = 1;
    if ( MEMORY[0xFFFFF78000000268] )
    {
      *a1 = MEMORY[0xFFFFF78000000264];
    }
    else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
    {
      *a1 = 1;
      return 0;
    }
  }
  return v4;
}
