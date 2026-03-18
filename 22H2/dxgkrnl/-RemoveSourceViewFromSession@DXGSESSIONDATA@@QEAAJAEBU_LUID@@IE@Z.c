/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C01E55FC
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01E5564 (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C00161C8 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0183F9C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C0183FF8 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01AB278 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C01E59DC (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C0355A58 (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveSourceViewFromSession(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  struct DISPLAY_SOURCE *DisplaySource; // r15
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v12; // rbx
  SESSION_VIEW **v13; // r8
  SESSION_VIEW **v14; // rdx
  const wchar_t *v16; // r9
  unsigned __int8 v17[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v17[0] = 0;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( !SessionAdapterFromLuid || (DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v5)) == 0LL )
  {
    v4 = -1073741811;
    WdLogSingleEntry5(2LL, v5, a2->HighPart, a2->LowPart, this, -1073741811LL);
    v16 = L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not owned by session 0x%I64x, returning 0x%I64x.";
    goto LABEL_15;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5);
  v12 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v4 = -1073741811;
    WdLogSingleEntry5(2LL, v5, a2->HighPart, a2->LowPart, this, -1073741811LL);
    v16 = L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not in any session view in session 0x%I64x, returning 0x%I64x.";
LABEL_15:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)v16,
      v5,
      a2->HighPart,
      a2->LowPart,
      (__int64)this,
      -1073741811LL);
    return v4;
  }
  if ( a4 )
  {
    SESSION_VIEW::RemoveAllDisplaySource(SessionViewFromSource);
  }
  else
  {
    v4 = SESSION_VIEW::RemoveDisplaySource(SessionViewFromSource, DisplaySource, v17);
    if ( !v17[0] )
      return v4;
  }
  v13 = (SESSION_VIEW **)*((_QWORD *)v12 + 1);
  if ( v13[1] != (SESSION_VIEW *)((char *)v12 + 8)
    || (v14 = (SESSION_VIEW **)*((_QWORD *)v12 + 2), *v14 != (SESSION_VIEW *)((char *)v12 + 8)) )
  {
    __fastfail(3u);
  }
  *v14 = (SESSION_VIEW *)v13;
  v13[1] = (SESSION_VIEW *)v14;
  SESSION_VIEW::`scalar deleting destructor'(v12);
  return v4;
}
