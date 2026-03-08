/*
 * XREFs of ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C035EBE8
 * Callers:
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02DD420 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02DEDC8 (-SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI_K0PEAUtagCloneableFlipTokenDa.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C035D8E8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendEnqueueFlipExToken(
        DXGSESSIONDATA *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagCloneableFlipTokenData *a5)
{
  __int64 v8; // r15
  struct _EX_RUNDOWN_REF *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  _BYTE v15[8]; // [rsp+30h] [rbp-30h] BYREF
  char v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+50h] [rbp-10h]

  v17 = -1;
  v18 = 0LL;
  v8 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 17008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 17008);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 17008);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( *((_QWORD *)this + 2370) )
    ++*((_DWORD *)this + 4738);
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  v9 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2370);
  if ( v9 && ExAcquireRundownProtection(v9 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2370) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      v10 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendEnqueueFlipExToken(
              *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2370) + 88LL),
              v8,
              a3,
              a4,
              a5);
      v11 = v10;
      if ( v10 < 0 )
        WdLogSingleEntry4(3LL, v8, a3, a4, v10);
      if ( v16 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL));
    }
    else
    {
      v11 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2370) + 64LL));
  }
  else
  {
    v11 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGSESSIONDATA *)((char *)this + 18904), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v17);
  return v11;
}
