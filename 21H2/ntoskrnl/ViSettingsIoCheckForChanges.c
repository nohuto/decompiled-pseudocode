/*
 * XREFs of ViSettingsIoCheckForChanges @ 0x1409E1600
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1409E147C (VfSettingsCheckForChanges.c)
 * Callees:
 *     IoVerifierCheckForSettingsChange @ 0x1409C56D4 (IoVerifierCheckForSettingsChange.c)
 *     VfWdCheckForSettingsChange @ 0x1409E1BA4 (VfWdCheckForSettingsChange.c)
 */

__int64 __fastcall ViSettingsIoCheckForChanges(unsigned int a1)
{
  unsigned int v1; // ebx
  int v2; // ecx

  v1 = a1;
  if ( !VfIrpDatabaseInitialized )
    v1 = a1 & 0xFFFFFFEF;
  if ( (v1 & 0x10) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !VfIoDisabled )
      _InterlockedExchange(&VfIoSwitchedOffNoReboot, 1);
  }
  VfIoDisabled = v2;
  IoVerifierCheckForSettingsChange(v1);
  return VfWdCheckForSettingsChange(v1);
}
