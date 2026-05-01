/*
 * XREFs of ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803C2CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7878 (--1-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803B4738 (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP8_ea_1803B4738.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B6670 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_1803B6670.c)
 *     ??1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B78F0 (--1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEA.c)
 *     ?StartActivity@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803C0950 (-StartActivity@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetr.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C09E4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::SubscribeToServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, SID *, GUID *, char *); // rdi
  _QWORD *v12; // r12
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v15; // rdi
  __int64 v16; // r8
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v18; // rdi
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"TouchKeyboardExperienceManagerSubscribeToServices");
  v22[0] = &TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::`vftable';
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::StartActivity((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *)v22);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 36, (__int64)a2);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 50);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
         &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
         (char *)this + 400);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v21[0] = 0LL;
    v7 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v21);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v7)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           v21);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v10 = v21[0];
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v21[0] + 72LL);
      v12 = (_QWORD *)((char *)this + 296);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
      v8 = v11(v10, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c, (char *)this + 296);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 50) + 40LL))(
               *((_QWORD *)this + 50),
               ((unsigned __int64)this + 72) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
               (char *)this + 216);
        v6 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v12 + 40LL))(
                 *v12,
                 10LL,
                 ((unsigned __int64)this + 80) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                 (char *)this + 220);
          v6 = v8;
          if ( v8 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 72LL))(*v12, (char *)this + 416);
            v13 = a2->lpVtbl->QueryService;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
            v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v13)(
                   a2,
                   &SID_InputHostLayout,
                   &GUID_260b6f30_f9bc_452d_be7e_d8bdc0ea3a0a,
                   (char *)this + 304);
            v6 = v8;
            if ( v8 >= 0 )
            {
              v14 = a2->lpVtbl->QueryService;
              v15 = (__int64 *)((char *)this + 488);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
              v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
                     a2,
                     &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                     &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                     (char *)this + 488);
              v6 = v8;
              if ( v8 >= 0 )
              {
                v8 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),TouchKeyboardExperienceManager *>(
                       (__int64)this + 496,
                       *v15,
                       v16);
                v6 = v8;
                if ( v8 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v15 + 24LL))(*v15, (char *)this + 480);
                  v6 = v8;
                  if ( v8 >= 0 )
                  {
                    v17 = a2->lpVtbl->QueryService;
                    v18 = (_QWORD *)((char *)this + 312);
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
                    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
                           a2,
                           &IID_IImmersiveWindowMessageService,
                           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                           (char *)this + 312);
                    v6 = v8;
                    if ( v8 >= 0 )
                    {
                      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
                             *v18,
                             26LL,
                             ((unsigned __int64)this + 88) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                             (char *)this + 236);
                      v6 = v8;
                      if ( v8 >= 0 )
                      {
                        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18
                                                                                                  + 24LL))(
                               *v18,
                               126LL,
                               ((unsigned __int64)this + 88) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                               (char *)this + 240);
                        v6 = v8;
                        if ( v8 >= 0 )
                        {
                          v19 = a2->lpVtbl->QueryService;
                          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
                          v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
                                 a2,
                                 &IID_IGlobalRudeWindowNotificationService,
                                 &GUID_a240bbbd_d294_480c_8d38_3786056363f1,
                                 (char *)this + 320);
                          v6 = v8;
                          if ( v8 >= 0 )
                          {
                            v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 40)
                                                                                             + 24LL))(
                                   *((_QWORD *)this + 40),
                                   ((unsigned __int64)this + 128) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                                   (char *)this + 244);
                            v6 = v8;
                            if ( v8 >= 0 )
                            {
                              wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
                                (__int64)v22,
                                0);
                              v6 = 0;
                              goto LABEL_31;
                            }
                            v9 = 1770LL;
                          }
                          else
                          {
                            v9 = 1769LL;
                          }
                        }
                        else
                        {
                          v9 = 1767LL;
                        }
                      }
                      else
                      {
                        v9 = 1766LL;
                      }
                    }
                    else
                    {
                      v9 = 1765LL;
                    }
                  }
                  else
                  {
                    v9 = 1763LL;
                  }
                }
                else
                {
                  v9 = 1762LL;
                }
              }
              else
              {
                v9 = 1758LL;
              }
            }
            else
            {
              v9 = 1756LL;
            }
          }
          else
          {
            v9 = 1752LL;
          }
        }
        else
        {
          v9 = 1749LL;
        }
      }
      else
      {
        v9 = 1747LL;
      }
    }
    else
    {
      v9 = 1746LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_31:
    Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::~ComPtr<IImmersiveMonitorManager>(v21);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6CC,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_32:
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::~TouchKeyboardExperienceManagerSubscribeToServices((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *)v22);
  return v6;
}
