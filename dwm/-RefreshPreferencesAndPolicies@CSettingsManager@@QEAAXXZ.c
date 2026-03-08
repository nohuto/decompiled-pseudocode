/*
 * XREFs of ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140004228
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140003CD4 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x1400040E4 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 * Callees:
 *     ?ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPEAK@Z @ 0x140004330 (-ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPE.c)
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 */

void __fastcall CSettingsManager::RefreshPreferencesAndPolicies(CSettingsManager *this)
{
  _QWORD v2[6]; // [rsp+30h] [rbp-29h] BYREF
  const wchar_t *v3; // [rsp+60h] [rbp+7h] BYREF
  int v4; // [rsp+68h] [rbp+Fh]
  int v5; // [rsp+6Ch] [rbp+13h]
  const wchar_t *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  const wchar_t *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  const wchar_t *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  v4 = 1;
  v3 = L"UseDPIScaling";
  v5 = 1;
  v6 = L"AnimationsShiftKey";
  v7 = 2LL;
  v8 = L"DisableLockingMemory";
  v9 = 64LL;
  v10 = L"ModeChangeCurtainUseDebugColor";
  v11 = 128LL;
  v2[0] = L"DisallowAnimations";
  v2[2] = L"DisallowColorizationColorChanges";
  v2[4] = L"DefaultColorizationColorState";
  v2[1] = 1LL;
  v2[3] = 2LL;
  v2[5] = 4LL;
  CSettingsManager::ReadRegistryBitfields(this, 0LL, &v3);
  CSettingsManager::ReadRegistryBitfields(this, 1LL, v2);
}
