/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01D7F30
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0015AC0 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01AFC34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *this, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rsi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 x; // r9
  __int64 y; // r10
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  struct tagRECT v21; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h]
  char v25; // [rsp+78h] [rbp-88h]
  _BYTE v26[144]; // [rsp+80h] [rbp-80h] BYREF

  v23 = -1;
  v4 = a2;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 3014);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 3014);
  v22 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(this, v4, 0LL, 0LL, &v22, (unsigned __int64 *)&v21, 0);
  if ( PairingAdapters < 0 )
  {
    v20 = PairingAdapters;
    WdLogSingleEntry3(2LL, this, v4, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddSetOrigin (ntSt"
                "atus = 0x%I64x).",
      (__int64)this,
      v4,
      v20,
      0LL,
      0LL);
  }
  else
  {
    v7 = (ADAPTER_DISPLAY **)v22;
    if ( !v22 )
    {
      WdLogSingleEntry1(1LL, 2443LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2443LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v26, 1LL);
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
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v7[365], (unsigned int)v4, v9, v10);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      x = a3->x;
      y = a3->y;
      v14 = 4000 * v4;
      v15 = *((_QWORD *)v7[365] + 16);
      v21.left = a3->x;
      v21.top = y;
      v16 = *(int *)(4000 * v4 + v15 + 672);
      if ( (((_DWORD)v16 - 2) & 0xFFFFFFFD) != 0 )
      {
        v21.right = x + *(_DWORD *)(v14 + v15 + 644);
        v17 = *(_DWORD *)(v14 + v15 + 648);
      }
      else
      {
        v21.right = x + *(_DWORD *)(v14 + v15 + 648);
        v17 = *(_DWORD *)(v14 + v15 + 644);
      }
      v21.bottom = y + v17;
      WdLogSingleEntry5(4LL, v4, v7, x, y, v16);
      ADAPTER_DISPLAY::SetContentRect(v7[365], v4, &v21);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v23);
  }
}
