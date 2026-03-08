/*
 * XREFs of VfSettingsCheckForChanges @ 0x140AD7DA4
 * Callers:
 *     VfSetVerifierInformation @ 0x140ADA7E8 (VfSetVerifierInformation.c)
 * Callees:
 *     VfPendingCheckForChanges @ 0x140ACE7C0 (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x140AD2BC0 (VfKeCheckForChanges.c)
 *     ViDeadlockDetectionApplySettings @ 0x140AD5D8C (ViDeadlockDetectionApplySettings.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140AD7D64 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x140AD7EBC (ViSettingsEnableKernelHandleChecking.c)
 *     ViSettingsIoCheckForChanges @ 0x140AD7F18 (ViSettingsIoCheckForChanges.c)
 */

void __fastcall VfSettingsCheckForChanges(unsigned int a1, __int16 a2, unsigned __int16 a3, unsigned int a4)
{
  BOOL v8; // eax
  char v9; // di
  BOOL v10; // edx
  int v11; // ecx
  _BOOL8 v12; // rcx

  VfKeCheckForChanges(a4);
  v8 = 0;
  v9 = a3 & a1;
  v10 = 0;
  if ( (a2 & 8) != 0 )
  {
    v8 = ((a1 >> 3) & 1) == 0;
    v10 = v8;
  }
  else if ( (v9 & 8) != 0 )
  {
    goto LABEL_7;
  }
  if ( !v10 )
    goto LABEL_8;
  if ( v8 )
  {
    MmTrackLockedPages = 1;
    goto LABEL_8;
  }
LABEL_7:
  MmTrackLockedPages |= 0x10000000u;
LABEL_8:
  ViSettingsIoCheckForChanges(a4);
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a1 & 0x20) != 0 )
      goto LABEL_14;
    v11 = 1;
  }
  else
  {
    if ( (v9 & 0x20) == 0 )
      goto LABEL_14;
    v11 = 0;
  }
  ViDeadlockDetectionApplySettings(v11);
LABEL_14:
  if ( (a2 & 0x800) != 0 )
  {
    v12 = (a1 & 0x800) == 0;
    if ( (a1 & 0x800) == 0 )
      goto LABEL_19;
  }
  else if ( (a3 & (unsigned __int16)a1 & 0x800) != 0 )
  {
    v12 = 0LL;
LABEL_19:
    ViSettingsEnableKernelHandleChecking(v12);
    VfSettingsApplyMiscellaneousChecks();
  }
  VfPendingCheckForChanges(a4);
}
