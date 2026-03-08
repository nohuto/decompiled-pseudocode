/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1C0335F08
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C031EB30 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01C167C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01E4050 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  struct _LUID v5; // rbx
  __int64 v6; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v15; // eax
  int v16; // esi
  struct _LUID *v17; // rdx
  struct SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 HighPart; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // eax
  __int64 v36; // r8
  _BYTE v37[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _LUID v38; // [rsp+58h] [rbp-11h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v39[2]; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v40; // [rsp+80h] [rbp+17h] BYREF

  v2 = a2;
  if ( !this )
  {
    WdLogSingleEntry1(1LL, 1602LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1602LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 365) )
  {
    WdLogSingleEntry1(1LL, 1603LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1603LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry1(1LL, 1604LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter->IsCoreResourceSharedOwner()",
      1604LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 365);
  v5 = *(struct _LUID *)((char *)this + 404);
  v38 = v5;
  v6 = *(_QWORD *)(v4 + 128) + 4000 * v2;
  if ( !v6 )
    return -1073741811LL;
  if ( !*(_BYTE *)(v6 + 765) )
    return 0LL;
  v40.Flags.Value = 0;
  v40.VidPnSourceId = *(_DWORD *)(v6 + 16);
  v40.X = *(_DWORD *)(v6 + 716);
  v40.Y = *(_DWORD *)(v6 + 720);
  v40.Flags.Value = 1;
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v10
    && (v13 = PsGetCurrentProcessSessionId(v9, v8, v11, v12),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v13)) != 0LL) )
  {
    v37[0] = 0;
    v15 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v37, 0);
    v16 = v15;
    if ( v15 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v38,
                                *(_DWORD *)(v6 + 16));
      if ( SessionViewFromSource )
      {
        v16 = SetPointerShapeForDisplaySource(
                (struct DISPLAY_SOURCE *)v6,
                &v40,
                0LL,
                SessionViewFromSource,
                0LL,
                0,
                0,
                1,
                0,
                0);
      }
      else
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20, v19, v21, v22);
        HighPart = v38.HighPart;
        v16 = -1073741811;
        WdLogSingleEntry5(
          2LL,
          *(unsigned int *)(v6 + 16),
          v38.HighPart,
          v5.LowPart,
          CurrentProcessSessionId,
          -1073741811LL);
        v29 = PsGetCurrentProcessSessionId(v26, v25, v27, v28);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, r"
                    "eturning 0x%I64x.",
          *(unsigned int *)(v6 + 16),
          HighPart,
          v5.LowPart,
          v29,
          -1073741811LL);
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, v15);
    }
    if ( v37[0] )
      DxgkReleaseSessionModeChangeLock();
    if ( v16 >= 0 )
      return 0LL;
  }
  else
  {
    v30 = PsGetCurrentProcessSessionId(v9, v8, v11, v12);
    WdLogSingleEntry2(2LL, v30, -1073741811LL);
    v35 = PsGetCurrentProcessSessionId(v32, v31, v33, v34);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v35,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  v38 = 0LL;
  memset(v39, 0, sizeof(v39));
  v39[0].VidPnSourceId = 13;
  DXGADAPTER::IsAdapterSessionized(this, v17, 0LL, (unsigned __int64 *)&v38);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(
           v39,
           v38,
           v36,
           0LL,
           0LL,
           0LL);
}
