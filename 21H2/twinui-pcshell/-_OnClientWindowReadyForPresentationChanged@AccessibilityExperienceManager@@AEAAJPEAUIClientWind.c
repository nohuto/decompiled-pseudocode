/*
 * XREFs of ?_OnClientWindowReadyForPresentationChanged@AccessibilityExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803E14D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessibilityExperienceManager::_OnClientWindowReadyForPresentationChanged(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v11);
  if ( v5 < 0 )
  {
    v6 = 724LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, _QWORD))(*(_QWORD *)a2 + 88LL))(
      a2,
      *((_QWORD *)this + 49));
    *((_QWORD *)this + 49) = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 112LL))(*((_QWORD *)this + 48));
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 48) + 128LL))(*((_QWORD *)this + 48), 0LL);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
LABEL_11:
        if ( v5 < 0 )
        {
          v6 = 733LL;
          goto LABEL_3;
        }
        return 0LL;
      }
      v9 = 254LL;
    }
    else
    {
      v9 = 251LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  return 0LL;
}
