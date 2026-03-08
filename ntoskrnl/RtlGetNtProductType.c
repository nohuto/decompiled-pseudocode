/*
 * XREFs of RtlGetNtProductType @ 0x140303E90
 * Callers:
 *     IoFillDumpHeader @ 0x14054D7C8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140551EC0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x14062E4BC (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x1407A1380 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1407F092C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BAB20 (RtlRestoreBootStatusDefaults.c)
 *     AstInitialize @ 0x140B716E4 (AstInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087B034 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1, __int64 a2)
{
  char v3; // bl
  __int64 CurrentServerSilo; // rax
  _QWORD *v6; // rax

  v3 = 0;
  if ( PsIsCurrentThreadInServerSilo((__int64)a1, a2) )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( CurrentServerSilo )
      v6 = *(_QWORD **)(CurrentServerSilo + 1488);
    else
      v6 = &PspHostSiloGlobals;
    *a1 = *(_DWORD *)(v6[165] + 16LL);
  }
  else if ( MEMORY[0xFFFFF78000000268] )
  {
    *a1 = MEMORY[0xFFFFF78000000264];
  }
  else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
  {
    *a1 = 1;
    return v3;
  }
  return 1;
}
