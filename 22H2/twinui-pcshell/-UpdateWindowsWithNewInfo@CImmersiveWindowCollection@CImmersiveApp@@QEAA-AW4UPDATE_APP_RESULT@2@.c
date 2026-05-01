/*
 * XREFs of ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800341C8
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x180034100 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800639F8 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x1801F1040 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18002F7D4 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x180034614 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800348D4 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(__int64 a1, _OWORD *a2, char a3)
{
  unsigned int v6; // r14d
  _DWORD *v7; // rdi
  const struct APPLICATION_VIEW_DATA *v8; // r8
  unsigned __int64 v10; // rsi
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rcx
  int v14; // eax
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  int v23; // r15d
  __int64 v24; // r8
  int v25; // [rsp+30h] [rbp-108h] BYREF
  int v26; // [rsp+38h] [rbp-100h] BYREF
  int v27; // [rsp+40h] [rbp-F8h] BYREF
  int v28; // [rsp+48h] [rbp-F0h] BYREF
  int v29; // [rsp+50h] [rbp-E8h] BYREF
  RECT rcSrc; // [rsp+58h] [rbp-E0h] BYREF
  _OWORD v31[3]; // [rsp+68h] [rbp-D0h] BYREF
  char v32[16]; // [rsp+98h] [rbp-A0h] BYREF
  int *v33; // [rsp+A8h] [rbp-90h]
  int v34; // [rsp+B0h] [rbp-88h]
  int v35; // [rsp+B4h] [rbp-84h]
  int *v36; // [rsp+B8h] [rbp-80h]
  int v37; // [rsp+C0h] [rbp-78h]
  int v38; // [rsp+C4h] [rbp-74h]
  char v39[16]; // [rsp+C8h] [rbp-70h] BYREF
  int *v40; // [rsp+D8h] [rbp-60h]
  int v41; // [rsp+E0h] [rbp-58h]
  int v42; // [rsp+E4h] [rbp-54h]
  int *v43; // [rsp+E8h] [rbp-50h]
  int v44; // [rsp+F0h] [rbp-48h]
  int v45; // [rsp+F4h] [rbp-44h]
  char v46[16]; // [rsp+F8h] [rbp-40h] BYREF
  int *v47; // [rsp+108h] [rbp-30h]
  int v48; // [rsp+110h] [rbp-28h]
  int v49; // [rsp+114h] [rbp-24h]

  if ( (*(int (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)(a1 + 152) + 128LL))(*(_QWORD *)(a1 + 152), &rcSrc) >= 0 )
    CopyRect((LPRECT)(a1 + 16), &rcSrc);
  if ( a2 )
  {
    *(_OWORD *)(a1 + 76) = *a2;
    *(_OWORD *)(a1 + 92) = a2[1];
    *(_OWORD *)(a1 + 108) = a2[2];
  }
  v6 = 2;
  if ( *(_QWORD *)(a1 + 176) && (a3 & 1) != 0 )
  {
    v7 = (_DWORD *)(a1 + 16);
    if ( (EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
       || *v7 > *(_DWORD *)(a1 + 24)
       || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28))
      && ImmersiveApplicationLayout::AreAppViewDataEqual(
           (ImmersiveApplicationLayout *)(a1 + 32),
           (const struct APPLICATION_VIEW_DATA *)(a1 + 76),
           v8)
      || *v7 > *(_DWORD *)(a1 + 24)
      || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28) )
    {
      return 0;
    }
    else
    {
      if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
        && *v7 <= *(_DWORD *)(a1 + 24)
        && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28) )
      {
        CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 248), (const struct tagRECT *)(a1 + 16));
      }
      v10 = 0LL;
      v11 = *(_OWORD *)(a1 + 92);
      v31[0] = *(_OWORD *)(a1 + 76);
      v12 = *(_OWORD *)(a1 + 108);
      v31[1] = v11;
      for ( v31[2] = v12; v10 < *(_QWORD *)(a1 + 176); ++v10 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v10);
        (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v13 + 64LL))(v13, a1 + 16, v31);
        if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
          && *v7 <= *(_DWORD *)(a1 + 24)
          && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28)
          && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v10);
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
          v49 = 0;
          v25 = v18;
          v48 = 4;
          v47 = &v25;
          McGenEventWrite_EventWriteTransfer(
            &MICROSOFT_TWINUI_PUBLISHER_Context,
            &WindowLayoutChange_Start,
            v19,
            2LL,
            v46);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            v20 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v10);
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
            v23 = ~v21;
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            {
              v26 = 0;
              v35 = 0;
              v38 = 0;
              v33 = &v26;
              v27 = ~v21;
              v36 = &v27;
              v34 = 4;
              v37 = 4;
              McGenEventWrite_EventWriteTransfer(
                &MICROSOFT_TWINUI_PUBLISHER_Context,
                &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
                v22,
                3LL,
                v32);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
              {
                v28 = 0;
                v42 = 0;
                v45 = 0;
                v40 = &v28;
                v29 = v23;
                v43 = &v29;
                v41 = 4;
                v44 = 4;
                McGenEventWrite_EventWriteTransfer(
                  &MICROSOFT_TWINUI_PUBLISHER_Context,
                  &PerfTrack_ModernApp_ResizeResponsive_Start,
                  v24,
                  3LL,
                  v39);
              }
            }
          }
        }
      }
      v14 = *(_DWORD *)(a1 + 116);
      v15 = *(_OWORD *)(a1 + 92);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 76);
      v16 = *(_QWORD *)(a1 + 108);
      *(_OWORD *)(a1 + 48) = v15;
      *(_QWORD *)(a1 + 64) = v16;
      *(_DWORD *)(a1 + 72) = v14;
      CopyRect((LPRECT)a1, (const RECT *)(a1 + 16));
      return 1;
    }
  }
  return v6;
}
