/*
 * XREFs of ?DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z @ 0x1801D9480
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn CAppViewManager::DragEnterForTab(
        CAppViewManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        struct tagPOINT a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    1091LL,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    *(const char **)&a4);
  JUMPOUT(0x1801D949ALL);
}
