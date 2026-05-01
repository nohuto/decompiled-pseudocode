/*
 * XREFs of _SearchAppExperienceManager::Show_::_1_::catch$14 @ 0x180176A01
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180099938 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18020EC20 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::Show_::_1_::catch_14(__int64 a1, __int64 a2)
{
  const char *v3; // rax

  v3 = (const char *)std::wstring::c_str((_QWORD *)(a2 + 120));
  wil::details::in1diag3::Return_HrMsg(
    *(wil::details::in1diag3 **)(a2 + 888),
    (void *)0x3D6,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)0x80070057LL,
    (int)"Invalid Args: %ws",
    v3);
  return 0LL;
}
