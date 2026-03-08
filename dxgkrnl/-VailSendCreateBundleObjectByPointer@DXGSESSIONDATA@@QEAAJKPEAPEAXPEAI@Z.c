/*
 * XREFs of ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C035E514
 * Callers:
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02DD6A0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z @ 0x1C03475D0 (-SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C035D8E8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
        DXGSESSIONDATA *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  struct _EX_RUNDOWN_REF *v8; // rcx
  int BundleObjectByPointer; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v14[8]; // [rsp+20h] [rbp-30h] BYREF
  char v15; // [rsp+28h] [rbp-28h]
  int v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  char v18; // [rsp+40h] [rbp-10h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 17002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 17002);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 17002);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( *((_QWORD *)this + 2370) )
    ++*((_DWORD *)this + 4738);
  if ( v15 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  v8 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2370);
  if ( v8 && ExAcquireRundownProtection(v8 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2370) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
      BundleObjectByPointer = DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObjectByPointer(
                                *(DXG_GUEST_REMOTEOBJECTCHANNEL **)(*((_QWORD *)this + 2370) + 80LL),
                                a2,
                                a3,
                                a4);
      v10 = BundleObjectByPointer;
      if ( BundleObjectByPointer < 0 )
        WdLogSingleEntry1(3LL, BundleObjectByPointer);
      if ( v15 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL));
    }
    else
    {
      v10 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2370) + 64LL));
  }
  else
  {
    v10 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGSESSIONDATA *)((char *)this + 18904), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v15 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v16);
  return v10;
}
