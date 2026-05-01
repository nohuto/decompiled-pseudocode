/*
 * XREFs of ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x1803CF9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801BD998 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1803B8BD8 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x1803BBEBC (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x1803BD56C (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1803D26EC (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x1803D839C (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     ?IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z @ 0x1803D84A0 (-IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewHidingResponse(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewHidingResponseEventArgs *a3)
{
  __int64 v4; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rdx
  unsigned int v14[4]; // [rsp+50h] [rbp-30h]
  bool v15[8]; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  char v17; // [rsp+90h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 66) )
  {
    v4 = 753LL;
LABEL_3:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 62);
  if ( v6 )
    v6 = (_QWORD *)*v6;
  v7 = *(_QWORD *)(v6[1] + 8 * (*((_QWORD *)this + 65) & (v6[2] - 1LL)));
  *(_OWORD *)v14 = *(_OWORD *)(v7 + 48);
  *(_QWORD *)v15 = *(_QWORD *)(v7 + 80);
  if ( v15[4] )
  {
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 66);
      if ( !v8 )
        break;
      v9 = v8 - 1;
      *((_QWORD *)this + 66) = v9;
      if ( v9 )
        ++*((_QWORD *)this + 65);
      else
        *((_QWORD *)this + 65) = 0LL;
    }
    v4 = 764LL;
    goto LABEL_3;
  }
  v10 = *(_QWORD *)a3;
  v17 = 0;
  (*(void (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewHidingResponseEventArgs *, char *))(v10 + 48))(
    a3,
    &v17);
  if ( v17 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    v11 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
            *((TouchKeyboardExperienceManager **)this + 8),
            *((_DWORD *)this + 122),
            0,
            0);
    if ( v11 < 0 )
    {
      v12 = 793LL;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !KeyboardHosting::TabTipAdapterPolicy::IsHidingAnimationRunning(
            *((KeyboardHosting::TabTipAdapterPolicy **)this + 13),
            v14[3]) )
      TouchKeyboardExperienceManager::FireInputPaneHidingEvent(*((TouchKeyboardExperienceManager **)this + 8), v14[3]);
    v11 = TouchKeyboardExperienceManager::OnInputAppRequestedHide(
            *((TouchKeyboardExperienceManager **)this + 8),
            v14[3],
            v15[5]);
    if ( v11 < 0 )
    {
      v12 = 780LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
    if ( !KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(*((KeyboardHosting::TabTipAdapterPolicy **)this + 13)) )
    {
      v11 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0);
      if ( v11 < 0 )
      {
        v12 = 785LL;
        goto LABEL_17;
      }
    }
  }
  if ( (*((_QWORD *)this + 66))-- == 1LL )
    *((_QWORD *)this + 65) = 0LL;
  else
    ++*((_QWORD *)this + 65);
  return 0LL;
}
