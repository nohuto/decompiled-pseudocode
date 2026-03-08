/*
 * XREFs of ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C016C260
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002590 (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0006428 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v14; // r12
  DMMVIDPNSOURCE *v15; // rax
  DMMVIDPNSOURCE *v16; // rsi
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h]
  char v26; // [rsp+30h] [rbp-10h]
  __int64 v27; // [rsp+70h] [rbp+30h] BYREF
  struct DMMVIDPNSOURCEMODESET *v28; // [rsp+80h] [rbp+40h] BYREF

  v24 = -1;
  v25 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 7045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7045);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 7045);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = a3;
  v12[5] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v13 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    if ( v13 )
    {
      v14 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*(_QWORD *)(v13 + 48) + 432LL);
      v15 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v13 + 304), v6);
      v16 = v15;
      if ( v15 )
      {
        v27 = 0LL;
        v28 = 0LL;
        v17 = DMMVIDPNSOURCE::CreateNewCofuncModeSet(v15, &v28);
        v18 = v17;
        if ( v17 < 0 )
        {
          WdLogSingleEntry2(7LL, *((unsigned int *)v16 + 6), v17);
        }
        else
        {
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v27, (__int64)v28);
          v19 = v27;
          v20 = -(__int64)(v27 != -137);
          v27 = 0LL;
          *a3 = v19 & v20;
          v18 = 0;
          *a4 = v14;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v27, 0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, v6);
        v18 = -1071774972;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v18 = -1071774973;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v18 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 )
  {
    LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  }
  return v18;
}
