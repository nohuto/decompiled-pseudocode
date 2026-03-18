/*
 * XREFs of VfSetVerifierInformation @ 0x140A9C820
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     VfFaultsSetParameters @ 0x140A96CA8 (VfFaultsSetParameters.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     VfInitSystemNoRebootNeeded @ 0x140A82328 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfSettingsCheckForChanges @ 0x140A9AFDC (VfSettingsCheckForChanges.c)
 */

__int64 __fastcall VfSetVerifierInformation(unsigned int *a1, unsigned int a2)
{
  unsigned int v4; // ecx
  __int64 *v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  int v11; // edi
  unsigned int v12; // esi

  if ( a2 < 4 )
    return 3221225476LL;
  if ( (_DWORD)InitSafeBootMode )
    return 3221226335LL;
  v4 = 0;
  v5 = &VfRuleClasses;
  do
  {
    if ( *(_DWORD *)v5 )
      return 3221228559LL;
    ++v4;
    v5 = (__int64 *)((char *)v5 + 4);
  }
  while ( v4 < 2 );
  v6 = *a1;
  VfDriverLock();
  if ( !MmVerifierData )
    MmVerifyDriverLevel = 0;
  VfInitSystemNoRebootNeeded(v7, 0, v8, v9);
  v10 = v6 & VerifierModifyableOptions;
  v11 = VerifierModifyableOptions & ~v6;
  v12 = ~v11 & (v10 | MmVerifierData);
  if ( v12 != MmVerifierData )
  {
    VfSettingsCheckForChanges(MmVerifierData, v10, v11, v12);
    ++dword_140C2A040;
    MmVerifierData = v12;
    *a1 = v12;
  }
  ViLegacyVolatile = 1;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
