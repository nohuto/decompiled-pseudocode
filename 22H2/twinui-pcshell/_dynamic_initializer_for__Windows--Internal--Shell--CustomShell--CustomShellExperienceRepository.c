/*
 * XREFs of _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800038F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18008F178 (--$_Range_construct_or_tidy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180090E18 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
int dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__()
{
  _BYTE v1[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v2[32]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v3[3]; // [rsp+60h] [rbp-18h] BYREF

  std::wstring::wstring(v1, L"Windows.Internal.Shell.ShellLauncher.ShellLauncherExperience");
  std::wstring::wstring(v2, L"Windows.Internal.AssignedAccess.AssignedAccessShellExperience");
  Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = 0LL;
  qword_180651320 = 0LL;
  std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(
    &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds,
    v1,
    v3);
  `eh vector destructor iterator'(v1, 0x20uLL, 2uLL, std::wstring::~wstring);
  return atexit(dynamic_atexit_destructor_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__);
}
