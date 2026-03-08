/*
 * XREFs of ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C035E270
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C036F5C0 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C035C008 (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C035D858 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
        DXGSESSIONDATA *this,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned int *a5,
        int a6)
{
  unsigned int v7; // r15d
  struct DXGFASTMUTEX *v10; // r14
  unsigned int v11; // edi
  struct _EX_RUNDOWN_REF *v12; // rbx
  DXGAUTOMUTEX *v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v20[8]; // [rsp+58h] [rbp-19h] BYREF
  char v21; // [rsp+60h] [rbp-11h]
  _BYTE v22[8]; // [rsp+68h] [rbp-9h] BYREF
  char v23; // [rsp+70h] [rbp-1h]
  int v24; // [rsp+78h] [rbp+7h] BYREF
  __int64 v25; // [rsp+80h] [rbp+Fh]
  char v26; // [rsp+88h] [rbp+17h]

  v24 = -1;
  v7 = a3;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 17010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 17010);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 17010);
  v10 = (DXGSESSIONDATA *)((char *)this + 18904);
  v11 = -1073741808;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v12 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2370);
  if ( v12 )
  {
    DXGVAILGUESTOBJECT::AddReference((DXGVAILGUESTOBJECT *)v12);
    if ( v21 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    if ( ExAcquireRundownProtection(v12 + 8) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v12[9].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)&v12[2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
        v14 = *(__int64 **)(v12[11].Count + 8);
        if ( v14 )
        {
          v15 = *v14;
          if ( a6 )
            v16 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD, void *, unsigned int *))(v15 + 32))(
                    v14,
                    a2,
                    v7,
                    a4,
                    a5);
          else
            v16 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD))(v15 + 40))(v14, a2, v7);
          v11 = v16;
        }
        else
        {
          WdLogSingleEntry1(2LL, 2776LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to get VAIL composition object",
            2776LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12[9].Count + 64));
        if ( v23 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
      }
      else
      {
        v11 = -2147483611;
        WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
      }
      ExReleaseRundownProtection(v12 + 8);
    }
    else
    {
      v11 = -2147483611;
      WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, v10, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    DXGVAILGUESTOBJECT::ReleaseReference((DXGVAILGUESTOBJECT *)v12);
    if ( v23 )
    {
      v13 = (DXGAUTOMUTEX *)v22;
      goto LABEL_25;
    }
  }
  else if ( v21 )
  {
    v13 = (DXGAUTOMUTEX *)v20;
LABEL_25:
    DXGAUTOMUTEX::Release(v13);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v24);
  return v11;
}
