/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1C01DBE70
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01AFF6C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v5; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  DXGADAPTER *v8; // r15
  int v9; // eax
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  char v18; // [rsp+68h] [rbp-98h]
  _BYTE v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v16 = -1;
  v17 = 0LL;
  v5 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2175;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2175);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2175);
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)v15);
  v8 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v7, 0LL);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v9);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)",
        a1->HighPart,
        a1->LowPart,
        v10,
        0LL,
        0LL);
    }
    else
    {
      v15[0] = 0;
      v11 = DmmEnumClientVidPnPathTargetsFromSource(v8, v5, 1LL, v15);
      v10 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v5, v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed in calling DmmEnumClientVidPnPathTargetsFromSource for adapter luid (0x%I64x::0x%I64x) and sou"
                    "rce (0x%I64x) with status (0x%I64x)",
          a1->HighPart,
          a1->LowPart,
          v5,
          v10,
          0LL);
      }
      else
      {
        *a3 = v15[0] != -1;
      }
    }
    DXGADAPTER::ReleaseReference(v8);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Can't reference adapter by luid (0x%I64x::0x%I64x).",
      a1->HighPart,
      a1->LowPart,
      0LL,
      0LL,
      0LL);
    LODWORD(v10) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  }
  return (unsigned int)v10;
}
