/*
 * XREFs of VfSettingsCheckForChanges @ 0x1409E147C
 * Callers:
 *     VfSetVerifierInformation @ 0x1409EDBEC (VfSetVerifierInformation.c)
 * Callees:
 *     ViHalApplySettings @ 0x1409CFAEC (ViHalApplySettings.c)
 *     VfPendingCheckForChanges @ 0x1409D66EC (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x1409DCCF8 (VfKeCheckForChanges.c)
 *     ViDeadlockDetectionApplySettings @ 0x1409E025C (ViDeadlockDetectionApplySettings.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E1440 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x1409E15A4 (ViSettingsEnableKernelHandleChecking.c)
 *     ViSettingsIoCheckForChanges @ 0x1409E1600 (ViSettingsIoCheckForChanges.c)
 */

void __fastcall VfSettingsCheckForChanges(unsigned int a1, __int16 a2, unsigned __int16 a3, unsigned int a4)
{
  BOOL v8; // eax
  char v9; // si
  BOOL v10; // edi
  BOOL v11; // ecx

  VfKeCheckForChanges(a4);
  v8 = 0;
  v9 = a3 & a1;
  v10 = 1;
  if ( (a2 & 8) != 0 )
  {
    v8 = ((a1 >> 3) & 1) == 0;
    v11 = v8;
  }
  else
  {
    v11 = (v9 & 8) != 0;
  }
  if ( v11 )
  {
    if ( v8 )
      MmTrackLockedPages = 1;
    else
      MmTrackLockedPages |= 0x10000000u;
  }
  ViSettingsIoCheckForChanges(a4);
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a1 & 0x20) != 0 )
      goto LABEL_13;
  }
  else if ( (v9 & 0x20) == 0 )
  {
    goto LABEL_13;
  }
  ViDeadlockDetectionApplySettings();
LABEL_13:
  if ( (a2 & 0x80u) == 0 )
  {
    if ( (v9 & 0x80) == 0 )
      goto LABEL_18;
  }
  else if ( (a1 & 0x80) != 0 )
  {
    goto LABEL_18;
  }
  ViHalApplySettings();
LABEL_18:
  if ( (a2 & 0x800) != 0 )
  {
    v10 = ((a1 >> 11) & 1) == 0;
  }
  else if ( (a3 & (unsigned __int16)a1 & 0x800) == 0 )
  {
    goto LABEL_23;
  }
  if ( v10 )
  {
    ViSettingsEnableKernelHandleChecking();
    VfSettingsApplyMiscellaneousChecks(~a3 & (a2 | a1));
  }
LABEL_23:
  VfPendingCheckForChanges(a4);
}
