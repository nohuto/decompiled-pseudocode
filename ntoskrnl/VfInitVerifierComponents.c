/*
 * XREFs of VfInitVerifierComponents @ 0x140ABFE40
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140ABFCE8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x140B4EE44 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfIovPluginEntry @ 0x1405CF810 (VfIovPluginEntry.c)
 *     ExSetPoolFlags @ 0x1406056B8 (ExSetPoolFlags.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     VfPendingCheckForChanges @ 0x140ACE7C0 (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x140AD2BC0 (VfKeCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140AD2E18 (VfFaultsInitPhase0.c)
 *     ViSettingsIoCheckForChanges @ 0x140AD7F18 (ViSettingsIoCheckForChanges.c)
 */

__int64 __fastcall VfInitVerifierComponents(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  _DWORD *Pool2; // rax
  _QWORD *v7; // rax
  __int64 result; // rax

  if ( (MmVerifierData & 0x20) != 0 && !a4 )
    ExSetPoolFlags(0x10u);
  if ( (MmVerifierData & 0x10) != 0 )
    VfIovPluginEntry();
  if ( (MmVerifierData & 0x10) != 0 )
  {
    if ( (MmVerifierData & 0x200) != 0 )
      PpvUtilVerifierEnabled = 1;
    if ( (MmVerifierData & 0x400) != 0 )
      goto LABEL_11;
  }
  if ( a4 )
  {
LABEL_11:
    ViIrpLogDatabaseLock = 0LL;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 0x18uLL, 0x64496656u);
    ViIrpLogDatabase = (__int64)Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      v7 = Pool2 + 2;
      v7[1] = v7;
      *v7 = v7;
    }
  }
  ViDdiInitialized = 1;
  if ( a4 )
    VfKeCheckForChanges(a1);
  if ( (MmVerifierData & 0x10) != 0 )
    ViSettingsIoCheckForChanges(a1);
  if ( (a1 & 8) != 0 )
    MmTrackLockedPages = 1;
  if ( (MmVerifierData & 0x200) != 0 )
    VfPendingCheckForChanges(a1);
  result = (unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 4) != 0 )
    result = VfFaultsInitPhase0();
  ViVerifierEnabled = 1;
  return result;
}
