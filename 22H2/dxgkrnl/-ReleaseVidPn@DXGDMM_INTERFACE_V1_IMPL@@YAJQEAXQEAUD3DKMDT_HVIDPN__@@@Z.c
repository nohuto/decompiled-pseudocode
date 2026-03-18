/*
 * XREFs of ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01E7010
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000A4DC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A584 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  char v14; // [rsp+60h] [rbp-18h]
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v14 = 1;
    v12 = 6055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6055);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 6055);
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      WdLogSingleEntry0(1LL);
    v5 = *((_QWORD *)this + 365);
    if ( v5 )
    {
      v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v5 + 104);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v15, v7);
        if ( *(_QWORD *)(v6 + 48) == v7 )
          ReferenceCounted::Release((ReferenceCounted *)(v6 + 24));
        else
          WdLogSingleEntry2(2LL, v6, v7);
        v8 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
      }
      else
      {
        WdLogSingleEntry1(2LL, a2);
        v8 = -1071774973;
      }
      goto LABEL_11;
    }
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
  }
  v8 = -1071775742;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v12);
  }
  return v8;
}
