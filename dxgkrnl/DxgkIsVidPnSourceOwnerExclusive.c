/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1C017C110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00035F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(ADAPTER_DISPLAY **a1, unsigned int a2, _BYTE *a3)
{
  char v6; // bl
  int VidPnSourceOwnerType; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h]
  char v13; // [rsp+60h] [rbp-A0h]
  _BYTE v14[144]; // [rsp+70h] [rbp-90h] BYREF

  v11 = -1;
  v12 = 0LL;
  v6 = 1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2182;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2182);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2182);
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 8104LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pDisplayAdapter", 8104LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL) < 0 )
  {
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  if ( !a1[365] )
  {
    WdLogSingleEntry1(1LL, 8114LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      8114LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[365], a2);
  if ( VidPnSourceOwnerType != 2 )
  {
    if ( VidPnSourceOwnerType == 3 )
    {
      *a3 = 1;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
LABEL_11:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  }
  return v6;
}
