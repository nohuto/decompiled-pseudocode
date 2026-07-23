/*
 * XREFs of RtlGetNtProductType @ 0x1402404C0
 * Callers:
 *     IoFillDumpHeader @ 0x140501A78 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140504FC0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x140538FFC (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x14060AD10 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1406C9DC0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x140915708 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74 (KeIsExecutingInArbitraryThreadContext.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14077ABC4 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  BOOLEAN v2; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v4; // rax

  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    if ( (unsigned int)KeIsExecutingInArbitraryThreadContext()
      || (ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread())) == 0 )
    {
      v4 = &PspHostSiloGlobals;
    }
    else
    {
      v4 = *(_QWORD **)(ThreadServerSilo + 1272);
    }
    v2 = 1;
    *NtProductType = *(PNT_PRODUCT_TYPE)(v4[141] + 16LL);
  }
  else
  {
    v2 = 1;
    if ( MEMORY[0xFFFFF78000000268] )
    {
      *NtProductType = MEMORY[0xFFFFF78000000264];
    }
    else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(NtProductType) < 0 )
    {
      *NtProductType = NtProductWinNt;
      return 0;
    }
  }
  return v2;
}
