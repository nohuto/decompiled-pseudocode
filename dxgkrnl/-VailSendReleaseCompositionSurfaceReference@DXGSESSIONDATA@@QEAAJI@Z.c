/*
 * XREFs of ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C035F0A4
 * Callers:
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02DF340 (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI@Z @ 0x1C02DF208 (-SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C035D8E8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendReleaseCompositionSurfaceReference(
        DXGSESSIONDATA *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  _BYTE v11[8]; // [rsp+20h] [rbp-30h] BYREF
  char v12; // [rsp+28h] [rbp-28h]
  int v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  char v15; // [rsp+40h] [rbp-10h]

  v13 = -1;
  v14 = 0LL;
  v4 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 17005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 17005);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 17005);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_QWORD *)this + 2370) )
    ++*((_DWORD *)this + 4738);
  if ( v12 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  v5 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2370);
  if ( v5 && ExAcquireRundownProtection(v5 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2370) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      v6 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendReleaseCompositionSurfaceReference(
             *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2370) + 88LL),
             v4);
      v7 = v6;
      if ( v6 < 0 )
        WdLogSingleEntry2(3LL, v4, v6);
      if ( v12 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL));
    }
    else
    {
      v7 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2370) + 64LL));
  }
  else
  {
    v7 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONDATA *)((char *)this + 18904), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v12 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v13);
  return v7;
}
