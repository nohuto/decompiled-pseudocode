/*
 * XREFs of RtlGetNtProductType @ 0x14031B310
 * Callers:
 *     IoFillDumpHeader @ 0x140501778 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140504CC0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x140538CFC (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x14068F5D0 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1407195A0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409155F8 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14077A904 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v7; // rax

  if ( PsIsCurrentThreadInServerSilo((__int64)a1, a2) )
  {
    if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(v4, v3)
      || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
    {
      v7 = &PspHostSiloGlobals;
    }
    else
    {
      v7 = *(_QWORD **)(ThreadServerSilo + 1272);
    }
    v5 = 1;
    *a1 = *(_DWORD *)(v7[141] + 16LL);
  }
  else
  {
    v5 = 1;
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
  return v5;
}
