/*
 * XREFs of RtlGetNtProductType @ 0x140245CC0
 * Callers:
 *     IoFillDumpHeader @ 0x140551F78 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x14059388C (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14074F220 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BABB4 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14080A670 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
    if ( ThreadServerSilo )
      v5 = *(_QWORD **)(ThreadServerSilo + 1464);
    else
      v5 = &PspHostSiloGlobals;
    v2 = 1;
    *a1 = *(_DWORD *)(v5[165] + 16LL);
  }
  else
  {
    v2 = 1;
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
  return v2;
}
