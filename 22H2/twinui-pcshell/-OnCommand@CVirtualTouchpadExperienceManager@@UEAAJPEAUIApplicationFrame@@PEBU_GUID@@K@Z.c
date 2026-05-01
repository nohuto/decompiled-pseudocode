/*
 * XREFs of ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180253A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1802531D0 (-HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18025333C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::OnCommand(
        CVirtualTouchpadExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  HWND v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
    v4 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
  if ( !v4 && (v7 = *((_QWORD *)this + 41)) != 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) )
  {
    v8 = CVirtualTouchpadExperienceManager::HideInternal((CVirtualTouchpadExperienceManager *)((char *)this - 16));
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    v11 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v11 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    if ( !v11
      && (v12 = *((_QWORD *)this + 41)) != 0
      && (*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v12 + 24LL))(v12, a2) )
    {
      *((_BYTE *)this + 301) = 1;
    }
    else
    {
      v13 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitedSizeMoveCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand )
        v13 = *(_QWORD *)a3->Data4 - 0x789E03E893229A8ALL;
      if ( !v13 )
      {
        v14 = *((_QWORD *)this + 41);
        if ( v14 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v14 + 24LL))(v14, a2) )
          {
            v15 = (HWND)*((_QWORD *)this + 42);
            *((_BYTE *)this + 301) = 0;
            if ( MonitorFromWindow(v15, 2u) != *((HMONITOR *)this + 43) )
              CVirtualTouchpadExperienceManager::HandleScaleOrMonitorChange((CVirtualTouchpadExperienceManager *)((char *)this - 16));
          }
        }
      }
    }
  }
  return 0LL;
}
