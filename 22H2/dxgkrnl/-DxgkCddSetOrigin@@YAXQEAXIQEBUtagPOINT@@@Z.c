/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00E7130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C000264C (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C013E304 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v5; // rsi
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  ADAPTER_DISPLAY **v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  ADAPTER_DISPLAY *v14; // rcx
  struct SESSION_VIEW *SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  LONG x; // r9d
  LONG y; // r10d
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ecx
  int v22; // ecx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  struct tagRECT v32; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h]
  char v36; // [rsp+68h] [rbp-98h]
  _BYTE v37[144]; // [rsp+70h] [rbp-90h] BYREF

  v34 = -1;
  v35 = 0LL;
  v5 = a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 3014LL);
  v33 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, v5, 0LL, 0LL, &v33, (unsigned __int64 *)&v32, 0);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v28[3] = a1;
    v28[4] = v5;
    v28[5] = v9;
    WdLogEvent5_WdError(v28);
  }
  else
  {
    v10 = (ADAPTER_DISPLAY **)v33;
    if ( !v33 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v29 + 24) = 2384LL;
      WdLogEvent5_WdAssertion(v29);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, (struct DXGADAPTER *const)v10, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
    v11 = COREADAPTERACCESS::AcquireExclusive((__int64)v37, 1LL);
    v13 = v11;
    if ( v11 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v31[3] = v13;
      v31[4] = v5;
      v31[5] = v10;
      v31[6] = a3->x;
      v31[7] = a3->y;
      WdLogEvent5_WdEvent(v31);
    }
    else
    {
      v14 = v10[337];
      if ( !v14 )
      {
        v30 = WdLogNewEntry5_WdAssertion(0LL, v12);
        *(_QWORD *)(v30 + 24) = 2395LL;
        WdLogEvent5_WdAssertion(v30);
        v14 = v10[337];
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v14, v5);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v10[337], v5);
      x = a3->x;
      y = a3->y;
      v19 = 3968 * v5;
      v20 = *((_QWORD *)v10[337] + 14);
      v21 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v32.left = a3->x;
      v32.top = y;
      if ( (v21 & 0xFFFFFFFD) != 0 )
      {
        v32.right = x + *(_DWORD *)(v20 + v19 + 644);
        v22 = *(_DWORD *)(v20 + v19 + 648);
      }
      else
      {
        v32.right = x + *(_DWORD *)(v20 + v19 + 648);
        v22 = *(_DWORD *)(v20 + v19 + 644);
      }
      v32.bottom = y + v22;
      v23 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v23[3] = v5;
      v23[4] = v10;
      v23[5] = a3->x;
      v23[6] = a3->y;
      v23[7] = *((int *)DisplayModeInfo + 7);
      WdLogEvent5_WdEvent(v23);
      ADAPTER_DISPLAY::SetContentRect(v10[337], v5, &v32);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37, v24);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v25);
  if ( v36 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v34);
  }
}
