/*
 * XREFs of ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1C035E004
 * Callers:
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02DD6A0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1C02DEA78 (-SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C035D8E8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendBindCompositionSurface(
        DXGSESSIONDATA *this,
        unsigned int a2,
        __int64 a3,
        const struct CSM_BUFFER_INFO *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v8; // rsi
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  _BYTE v16[8]; // [rsp+30h] [rbp-30h] BYREF
  char v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  char v20; // [rsp+50h] [rbp-10h]

  v18 = -1;
  v19 = 0LL;
  v8 = (int)a3;
  v9 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 17006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 17006);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 17006);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  if ( *((_QWORD *)this + 2370) )
    ++*((_DWORD *)this + 4738);
  if ( v17 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  v10 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2370);
  if ( v10 && ExAcquireRundownProtection(v10 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2370) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      v11 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
              *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2370) + 88LL),
              v9,
              v8,
              a4,
              a5,
              a6);
      v12 = v11;
      if ( v11 < 0 )
        WdLogSingleEntry3(3LL, v9, v8, v11);
      if ( v17 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL));
    }
    else
    {
      v12 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2370) + 64LL));
  }
  else
  {
    v12 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (DXGSESSIONDATA *)((char *)this + 18904), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v17 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v18);
  return v12;
}
