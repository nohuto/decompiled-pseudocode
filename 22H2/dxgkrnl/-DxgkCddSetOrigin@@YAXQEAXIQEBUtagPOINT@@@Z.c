/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01944D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00050E0 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00053F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C019D414 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *this, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rsi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v7; // rbx
  int v8; // eax
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 x; // r9
  __int64 y; // r10
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  struct tagRECT v19; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  char v23; // [rsp+78h] [rbp-88h]
  _BYTE v24[144]; // [rsp+80h] [rbp-80h] BYREF

  v21 = -1;
  v4 = a2;
  v22 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 3014);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 3014);
  v20 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(this, v4, 0LL, 0LL, &v20, (unsigned __int64 *)&v19, 0);
  if ( PairingAdapters < 0 )
  {
    v18 = PairingAdapters;
    WdLogSingleEntry3(2LL, this, v4, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddSetOrigin (ntSt"
                "atus = 0x%I64x).",
      (__int64)this,
      v4,
      v18,
      0LL,
      0LL);
  }
  else
  {
    v7 = (ADAPTER_DISPLAY **)v20;
    if ( !v20 )
    {
      WdLogSingleEntry1(1LL, 2443LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2443LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v24, 1LL);
    if ( v8 < 0 )
    {
      WdLogSingleEntry5(4LL, v8, v4, v7, a3->x, a3->y);
    }
    else
    {
      if ( !v7[365] )
      {
        WdLogSingleEntry1(1LL, 2454LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          2454LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v7[365], v4);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      x = a3->x;
      y = a3->y;
      v12 = 4000 * v4;
      v13 = *((_QWORD *)v7[365] + 16);
      v19.left = a3->x;
      v19.top = y;
      v14 = *(int *)(4000 * v4 + v13 + 672);
      if ( (((_DWORD)v14 - 2) & 0xFFFFFFFD) != 0 )
      {
        v19.right = x + *(_DWORD *)(v12 + v13 + 644);
        v15 = *(_DWORD *)(v12 + v13 + 648);
      }
      else
      {
        v19.right = x + *(_DWORD *)(v12 + v13 + 648);
        v15 = *(_DWORD *)(v12 + v13 + 644);
      }
      v19.bottom = y + v15;
      WdLogSingleEntry5(4LL, v4, v7, x, y, v14);
      ADAPTER_DISPLAY::SetContentRect(v7[365], v4, &v19);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v21);
  }
}
