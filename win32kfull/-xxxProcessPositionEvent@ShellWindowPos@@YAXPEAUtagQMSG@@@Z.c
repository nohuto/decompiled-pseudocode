/*
 * XREFs of ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C022181C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022344 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00FB208 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C01EC02C (-UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest @ 0x1C021F98C (ShellWindowPos--_anonymous_namespace_--AWPSOptionFromShellRequest.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021FC98 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0221CE0 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

void __fastcall ShellWindowPos::xxxProcessPositionEvent(ShellWindowPos *this, struct tagQMSG *a2)
{
  ShellWindowPos *v2; // rsi
  char v3; // bl
  struct tagQMSG *v4; // rdx
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // r9
  int v13; // edx
  char v14; // dl
  ShellWindowManagement *ThreadDesktopWindow; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rsi
  struct tagWND *v22; // rax
  struct tagWND *v23; // r12
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  int v29; // edx
  int v30; // eax
  __int128 *v31; // rcx
  __int128 v32; // xmm0
  int v33; // eax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v34; // r8
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v36; // [rsp+60h] [rbp-A8h]
  CMonitorTopology *v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  struct tagBWL *v39; // [rsp+78h] [rbp-90h]
  char *v40; // [rsp+80h] [rbp-88h]
  ShellWindowPos *v41; // [rsp+88h] [rbp-80h]
  struct CMonitorTopology *v42; // [rsp+90h] [rbp-78h] BYREF
  __int128 v43; // [rsp+98h] [rbp-70h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int128 v47; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-30h]
  __int128 v49; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-18h]
  int v51; // [rsp+100h] [rbp-8h]

  v2 = this;
  v41 = this;
  v3 = 1;
  v5 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), 1);
  if ( v5 )
  {
    v45 = 0LL;
    v46 = 0LL;
    ThreadLock(v5, &v45);
    v10 = *((_DWORD *)v2 + 8);
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v38 = *((_QWORD *)v2 + 5);
        v11 = (_QWORD *)ValidateHmonitor(*(_QWORD *)v38, v6, v8, v9);
        v36 = v11;
        v12 = (__int64)v11;
        if ( v11 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
            || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v14 = 0;
          }
          if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_AND_TRACE_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v14,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              0x19u,
              0xFu,
              (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
              *(_QWORD *)v5,
              *v11);
            v12 = (__int64)v36;
          }
          v47 = 0LL;
          v48 = 0LL;
          ThreadLock(v12, &v47);
          ThreadDesktopWindow = (ShellWindowManagement *)GetThreadDesktopWindow(*((struct tagTHREADINFO **)v5 + 2));
          v39 = BuildHwndList(ThreadDesktopWindow, 2, 0LL, 1);
          if ( v39 )
          {
            v43 = 0LL;
            LODWORD(v35) = *(_DWORD *)(v38 + 8);
            v44 = 0LL;
            _InterlockedAdd((volatile signed __int32 *)qword_1C0361320, 1u);
            v37 = qword_1C0361320;
            v42 = qword_1C0361320;
            if ( qword_1C0361320 )
              PushW32ThreadLock(
                (__int64)qword_1C0361320,
                &v43,
                (__int64)_lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_);
            v40 = (char *)v39 + 32;
            v20 = *((_QWORD *)v39 + 4);
            if ( v20 != 1 )
            {
              v21 = v40;
              do
              {
                v22 = (struct tagWND *)HMValidateHandleNoSecure(v20, 1);
                v23 = v22;
                if ( v22 == v5 )
                  break;
                v19 = 0LL;
                if ( v22 && GetRootOwner(v22) == v5 )
                {
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
                    || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                  {
                    v24 = v19;
                  }
                  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_AND_TRACE_SF_q(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      v24,
                      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                      16LL,
                      4u,
                      0x19u,
                      0x10u,
                      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
                      *(_QWORD *)v23);
                  v49 = 0LL;
                  *(_QWORD *)&v50 = 0LL;
                  ThreadLock(v23, &v49);
                  AdvancedWindowPos::xxxMigrateWindow(v23, (__int64)v36, (__int64)v37, 0, (int *)&v35);
                  ThreadUnlock1(v26, v25, v27);
                }
                v20 = *++v21;
              }
              while ( *v21 != 1LL );
              v2 = v41;
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v3 = 0;
            }
            if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_q(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v3,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                v19,
                4u,
                0x19u,
                0x11u,
                (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
                *(_QWORD *)v5);
            AdvancedWindowPos::xxxMigrateWindow(v5, (__int64)v36, (__int64)v37, 0, (int *)&v35);
            CMonitorTopology::UnlockAndRelease(&v42, (struct _TL *)&v43);
            v17 = v38;
            if ( (_DWORD)v35 != *(_DWORD *)(v38 + 8) )
            {
              LODWORD(v36) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1133);
            }
          }
          ThreadUnlock1(v17, v16, v18);
          FreeHwndList(v39);
        }
        else
        {
          v7 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v3 = 0;
          }
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 14;
            LOBYTE(v13) = v3;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v8,
              0,
              3,
              25,
              14,
              (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids);
          }
        }
      }
    }
    else
    {
      v28 = *((_QWORD *)v2 + 5);
      v29 = *(_DWORD *)(v28 + 24);
      if ( v29 == 3 )
      {
        ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow(v5, *((struct tagRECT **)v2 + 5));
      }
      else
      {
        *(_QWORD *)&v49 = *(_QWORD *)(v28 + 16);
        DWORD2(v49) = v29;
        v30 = ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest((const struct tagRECT *)v28);
        v32 = *v31;
        HIDWORD(v49) = v30;
        v33 = *((_DWORD *)v31 + 8);
        v50 = v32;
        v51 = v33;
        AdvancedWindowPos::xxxApplyWindowPos(v5, (struct tagWND *)&v49, v34);
      }
    }
    ThreadUnlock1(v7, v6, v8);
  }
  ShellWindowPos::FreePositionEvent(v2, v4);
}
