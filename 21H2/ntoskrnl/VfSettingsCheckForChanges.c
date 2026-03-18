/*
 * XREFs of VfSettingsCheckForChanges @ 0x140A9AFDC
 * Callers:
 *     VfSetVerifierInformation @ 0x140A9C820 (VfSetVerifierInformation.c)
 * Callees:
 *     ViHalApplySettings @ 0x140A887D4 (ViHalApplySettings.c)
 *     VfPendingCheckForChanges @ 0x140A90E38 (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x140A967D0 (VfKeCheckForChanges.c)
 *     ViDeadlockDetectionApplySettings @ 0x140A99478 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140A9952C (ViDeadlockEmptyDatabase.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140A9AF9C (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x140A9B0FC (ViSettingsEnableKernelHandleChecking.c)
 *     ViSettingsIoCheckForChanges @ 0x140A9B158 (ViSettingsIoCheckForChanges.c)
 */

void __fastcall VfSettingsCheckForChanges(unsigned int a1, __int16 a2, int a3, unsigned int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  _BOOL8 v10; // rcx

  VfKeCheckForChanges(a4);
  if ( (a2 & 8) != 0 )
  {
    if ( (a1 & 8) == 0 )
      MmTrackLockedPages = 1;
  }
  else if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 8) != 0 )
  {
    MmTrackLockedPages |= 0x10000000u;
  }
  ViSettingsIoCheckForChanges(a4);
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a1 & 0x20) == 0 )
      ViDeadlockDetectionApplySettings(1);
  }
  else if ( (a3 & 0x20) != 0 && (a1 & 0x20) != 0 )
  {
    ViDeadlockEmptyDatabase();
  }
  if ( (a2 & 0x80u) == 0 )
  {
    v8 = a3 & a1;
    if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 0x80) != 0 )
      ViHalApplySettings();
  }
  else
  {
    if ( (a1 & 0x80) == 0 )
      ViHalApplySettings();
    v8 = a3 & a1;
  }
  if ( (a2 & 0x800) != 0 )
  {
    v9 = a1 & 0x800;
    v10 = v9 == 0;
    if ( (v9 & 0x800) == 0 )
      goto LABEL_23;
  }
  else if ( (v8 & 0x800) != 0 )
  {
    v10 = 0LL;
LABEL_23:
    ViSettingsEnableKernelHandleChecking(v10, v8);
    VfSettingsApplyMiscellaneousChecks();
  }
  VfPendingCheckForChanges(a4);
}
