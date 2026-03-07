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
  v12 = ~v11 & (MmVerifierData | v10);
  if ( v12 != MmVerifierData )
  {
    VfSettingsCheckForChanges(MmVerifierData, v10, v11, v12);
    ++dword_140C138A0;
    MmVerifierData = v12;
    *a1 = v12;
  }
  ViLegacyVolatile = 1;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
