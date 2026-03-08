/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C01DA7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00062B4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0006428 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct DMMVIDPNTARGETMODESET **a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v11; // rdi
  DMMVIDPNTARGET *v12; // rax
  __int64 v13; // r10
  struct DMMVIDPNTARGETMODESET *v14; // rax
  struct DMMVIDPNTARGETMODESET *v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h]

  v20 = -1;
  v21 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 6034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6034);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 6034);
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    if ( v8 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v8 + 48) + 128LL) == v8 )
      {
        WdLogSingleEntry2(2LL, v6, v8);
        v16 = -1071774909;
      }
      else if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v8 + 96), v6) )
      {
        v11 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(v10 + 496);
        v12 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v9 + 304), v6);
        if ( v12 )
        {
          v14 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v12);
          v15 = v14;
          if ( v14 )
          {
            if ( v14 == (struct DMMVIDPNTARGETMODESET *)-137LL )
              v15 = 0LL;
          }
          else
          {
            WdLogSingleEntry0(1LL);
          }
          *a3 = v15;
          v16 = 0;
          *a4 = v11;
        }
        else
        {
          WdLogSingleEntry2(2LL, v6, v13);
          v16 = -1071774972;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v6, v9);
        v16 = -1071774919;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v16 = -1071774973;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v6, this);
    v16 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  }
  return v16;
}
