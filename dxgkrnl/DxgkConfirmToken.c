/*
 * XREFs of DxgkConfirmToken @ 0x1C02E0508
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z @ 0x1C007D1A0 (-ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkConfirmToken(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // esi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h]
  char v15; // [rsp+60h] [rbp-A0h]
  _BYTE v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v13 = -1;
  v14 = 0LL;
  v7 = a3;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2095;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2095);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2095);
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 2465LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 2465LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, a1, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
  if ( v10 >= 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 366) + 736LL)
                                                                                          + 8LL)
                                                                              + 384LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 366) + 744LL),
      a2,
      v7,
      a4,
      a5,
      a6);
  else
    WdLogSingleEntry2(3LL, a1, v10);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v13);
  }
}
