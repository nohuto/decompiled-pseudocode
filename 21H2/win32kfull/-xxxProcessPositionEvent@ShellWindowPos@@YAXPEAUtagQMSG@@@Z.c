/*
 * XREFs of ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0107F54 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest @ 0x1C02361F8 (ShellWindowPos--_anonymous_namespace_--AWPSOptionFromShellRequest.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02363A8 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0237BB4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxMigrateWindowToMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1C024BD78 (-xxxMigrateWindowToMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 */

void __fastcall ShellWindowPos::xxxProcessPositionEvent(ShellWindowPos *this, struct tagQMSG *a2)
{
  ShellWindowPos *v2; // rsi
  char v3; // bl
  struct tagQMSG *v4; // rdx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r12
  struct tagWND *v11; // rax
  __int64 v12; // r9
  int v13; // edx
  ShellWindowManagement *ThreadDesktopWindow; // rax
  struct tagBWL *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // r12d
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  struct tagWND *v23; // rax
  AdvancedWindowPos *v24; // r12
  int v25; // edx
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // edx
  __int64 v31; // rcx
  int v32; // edx
  int v33; // eax
  __int128 *v34; // rcx
  __int128 v35; // xmm0
  int v36; // eax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v37; // r8
  unsigned int v38; // [rsp+50h] [rbp-59h]
  struct tagWND *v39; // [rsp+58h] [rbp-51h]
  struct tagBWL *v41; // [rsp+70h] [rbp-39h]
  __int128 v42; // [rsp+78h] [rbp-31h] BYREF
  __int64 v43; // [rsp+88h] [rbp-21h]
  __int128 v44; // [rsp+90h] [rbp-19h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-9h]
  __int128 v46; // [rsp+A8h] [rbp-1h] BYREF
  __int128 v47; // [rsp+B8h] [rbp+Fh]
  int v48; // [rsp+C8h] [rbp+1Fh]

  v2 = this;
  v3 = 1;
  v5 = (__int64 *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), 1);
  if ( v5 )
  {
    v42 = 0LL;
    v43 = 0LL;
    ThreadLock((__int64)v5, (__int64 *)&v42);
    v9 = *((_DWORD *)v2 + 8);
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v10 = *((_QWORD *)v2 + 5);
        v11 = (struct tagWND *)ValidateHmonitor(*(_QWORD *)v10, v6);
        v39 = v11;
        v12 = (__int64)v11;
        if ( v11 )
        {
          LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v6,
              v8,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              25,
              15,
              (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
              *v5,
              *(_QWORD *)v11);
            v12 = (__int64)v39;
          }
          v44 = 0LL;
          v45 = 0LL;
          ThreadLock(v12, (__int64 *)&v44);
          ThreadDesktopWindow = (ShellWindowManagement *)GetThreadDesktopWindow(v5[2]);
          v15 = BuildHwndList(ThreadDesktopWindow, (const struct tagWND *)2, 0LL, 1);
          v41 = v15;
          if ( v15 )
          {
            v20 = *(_DWORD *)(v10 + 8);
            v21 = *((_QWORD *)v15 + 4);
            v38 = v20;
            if ( v21 != 1 )
            {
              v22 = (_QWORD *)((char *)v15 + 32);
              do
              {
                v23 = (struct tagWND *)HMValidateHandleNoSecure(v21, 1);
                v24 = v23;
                if ( v23 == (struct tagWND *)v5 )
                  break;
                if ( v23 && GetRootOwner(v23) == (struct tagWND *)v5 )
                {
                  LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                  if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    WPP_RECORDER_AND_TRACE_SF_q(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v25,
                      v18,
                      16,
                      4,
                      25,
                      16,
                      (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
                      *(_QWORD *)v24);
                  }
                  v46 = 0LL;
                  *(_QWORD *)&v47 = 0LL;
                  ThreadLock((__int64)v24, (__int64 *)&v46);
                  AdvancedWindowPos::xxxMigrateWindowToMonitor(v24, v39, (struct tagMONITOR *)v38, v26);
                  ThreadUnlock1(v28, v27, v29);
                }
                v21 = *++v22;
              }
              while ( *v22 != 1LL );
              v2 = this;
              v20 = v38;
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v3 = 0;
            }
            if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v30 = 17;
              LOBYTE(v30) = v3;
              LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v30,
                v18,
                v19,
                4,
                25,
                17,
                (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
                *v5);
            }
            AdvancedWindowPos::xxxMigrateWindowToMonitor((AdvancedWindowPos *)v5, v39, (struct tagMONITOR *)v20, v19);
          }
          ThreadUnlock1(v17, v16, v18);
          FreeHwndList(v41);
        }
        else
        {
          v7 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
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
              (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids);
          }
        }
      }
    }
    else
    {
      v31 = *((_QWORD *)v2 + 5);
      v32 = *(_DWORD *)(v31 + 24);
      if ( v32 == 3 )
      {
        ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow((struct tagWND *)v5, *((struct tagRECT **)v2 + 5));
      }
      else
      {
        *(_QWORD *)&v46 = *(_QWORD *)(v31 + 16);
        DWORD2(v46) = v32;
        v33 = ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest((const struct tagRECT *)v31);
        v35 = *v34;
        HIDWORD(v46) = v33;
        v36 = *((_DWORD *)v34 + 8);
        v47 = v35;
        v48 = v36;
        AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)v5, (struct tagWND *)&v46, v37);
      }
    }
    ThreadUnlock1(v7, v6, v8);
  }
  ShellWindowPos::FreePositionEvent(v2, v4);
}
