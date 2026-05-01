/*
 * XREFs of ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1803E0C14
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke @ 0x1803DF6E0 (CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___--Invoke.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C7290 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bb12221cab58c029e8bb5bdcb2677923___ @ 0x1803DDA7C (Windows--Internal--ComTaskPool--QueueTask__lambda_bb12221cab58c029e8bb5bdcb2677923___.c)
 *     ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x1803DEF80 (-ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x1803E02F0 (-SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z.c)
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x1803E0B94 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 *     ?_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1803E118C (-_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACT.c)
 *     ?Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z @ 0x1804E92F0 (-Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AccessibilityExperienceManager::_CreateModalExperienceAsync(AccessibilityExperienceManager *this)
{
  __int64 v2; // rbx
  HWND v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  int MonitorScaleForWindow; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  const unsigned __int16 *v16; // r8
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE v21[8]; // [rsp+20h] [rbp-20h] BYREF
  AccessibilityExperienceManager *v22; // [rsp+28h] [rbp-18h]
  char v23; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF
  __int64 v26; // [rsp+78h] [rbp+38h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  __int64 v28; // [rsp+88h] [rbp+48h] BYREF

  v2 = *((_QWORD *)this + 51);
  v28 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v26 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v3 = (HWND)*((_QWORD *)this + 52);
  if ( !v3 )
  {
    v4 = -2147024882;
    v5 = 2147942414LL;
    v6 = 621LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v5);
    goto LABEL_42;
  }
  if ( !*((_BYTE *)v3 + 64) )
  {
    v7 = EyeControlApp::Initialize((EyeControlApp *)v3, (AccessibilityExperienceManager *)((char *)this + 152));
    v4 = v7;
    if ( v7 < 0 )
    {
      v5 = (unsigned int)v7;
      v6 = 625LL;
      goto LABEL_8;
    }
  }
  MonitorScaleForWindow = AccessibilityExperienceManager::_GetMonitorScaleForWindow(
                            v3,
                            (enum DEVICE_SCALE_FACTOR *)this + 101);
  if ( MonitorScaleForWindow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x274,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorScaleForWindow);
  v22 = this;
  v23 = 1;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 113) = 0;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v26);
    v4 = v11;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)this + 48, &v26);
      v12 = v26;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v25);
      v4 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 24LL))(v25, v21);
        v4 = v11;
        if ( v11 >= 0 )
        {
          AccessibilityExperienceManager::ExcludeWindowFromCapture(this);
          AccessibilityExperienceManager::SetNoActivate(
            (AccessibilityExperienceManager *)((char *)this + 152),
            *((_DWORD *)this + 119) == 0x8000000);
          v13 = v25;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 144LL))(v13, &v27);
          v4 = v11;
          if ( v11 >= 0 )
          {
            v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 88LL))(v27, 1023LL, 0LL);
            if ( v14 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x28D,
                (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                (const char *)(unsigned int)v14);
            v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 48LL))(v27, 1LL, 1LL);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x28E,
                (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                (const char *)(unsigned int)v15);
            v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 112LL))(v25, 255LL, 16LL);
            v4 = v11;
            if ( v11 >= 0 )
            {
              v11 = AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
                      this,
                      (struct IApplicationFrameWrapper **)this + 47,
                      v16);
              v4 = v11;
              if ( v11 >= 0 )
              {
                v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 32LL))(v27, 0LL);
                if ( v17 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x296,
                    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                    (const char *)(unsigned int)v17);
                v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v25 + 72LL))(
                        v25,
                        qword_180652F78,
                        0LL);
                if ( v18 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x299,
                    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                    (const char *)(unsigned int)v18);
                v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 48LL))(v26, 2LL);
                v4 = v11;
                if ( v11 >= 0 )
                {
                  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 128LL))(v26, 1LL);
                  if ( v19 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x29E,
                      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v19);
                  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_bb12221cab58c029e8bb5bdcb2677923___();
                  v4 = v11;
                  if ( v11 >= 0 )
                  {
                    v4 = 0;
                    goto LABEL_42;
                  }
                  v10 = 680LL;
                }
                else
                {
                  v10 = 668LL;
                }
              }
              else
              {
                v10 = 660LL;
              }
            }
            else
            {
              v10 = 656LL;
            }
          }
          else
          {
            v10 = 651LL;
          }
        }
        else
        {
          v10 = 644LL;
        }
      }
      else
      {
        v10 = 641LL;
      }
    }
    else
    {
      v10 = 638LL;
    }
    v9 = (unsigned int)v11;
  }
  else
  {
    v4 = -2144927145;
    v9 = 2150040151LL;
    v10 = 637LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)v9);
LABEL_42:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return v4;
}
