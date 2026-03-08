/*
 * XREFs of ?VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C035EE58
 * Callers:
 *     ?PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C02DDBB0 (-PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SendQueryStats@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C02DEFF8 (-SendQueryStats@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C035D8E8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendQueryStats(
        DXGSESSIONDATA *this,
        unsigned int a2,
        struct CSM_BUFFER_STATISTICS *a3)
{
  __int64 v5; // rsi
  struct _EX_RUNDOWN_REF *v6; // rcx
  int Stats; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  _BYTE v12[8]; // [rsp+20h] [rbp-30h] BYREF
  char v13; // [rsp+28h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  char v16; // [rsp+40h] [rbp-10h]

  v14 = -1;
  v15 = 0LL;
  v5 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 17009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 17009);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 17009);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( *((_QWORD *)this + 2370) )
    ++*((_DWORD *)this + 4738);
  if ( v13 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  v6 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2370);
  if ( v6 && ExAcquireRundownProtection(v6 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2370) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
      Stats = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendQueryStats(
                *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2370) + 88LL),
                v5,
                a3);
      v8 = Stats;
      if ( Stats < 0 )
        WdLogSingleEntry2(3LL, v5, Stats);
      if ( v13 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL));
    }
    else
    {
      v8 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2370) + 64LL));
  }
  else
  {
    v8 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGSESSIONDATA *)((char *)this + 18904), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v13 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v14);
  return v8;
}
