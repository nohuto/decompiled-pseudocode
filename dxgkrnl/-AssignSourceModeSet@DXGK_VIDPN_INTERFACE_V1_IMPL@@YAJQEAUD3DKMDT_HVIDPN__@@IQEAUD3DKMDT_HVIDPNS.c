/*
 * XREFs of ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C016C460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0002498 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00024B8 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0006428 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  struct DMMVIDPNSOURCEMODESET **v12; // rdi
  __int64 v13; // r8
  struct DMMVIDPNSOURCEMODESET **v14; // rax
  __int64 v15; // r10
  struct DMMVIDPNSOURCEMODESET **v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]

  v21 = -1;
  v4 = a3;
  v22 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 7046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7046);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 7046);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v11[3] = v4;
  v11[4] = v6;
  v11[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v12 = (struct DMMVIDPNSOURCEMODESET **)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v12 )
    {
      v14 = (struct DMMVIDPNSOURCEMODESET **)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v13 + 304), v6);
      v16 = v14;
      if ( v14 )
      {
        v17 = DMMVIDPNSOURCE::SetCofuncModeSet(v14, v12);
        v4 = v17;
        if ( v17 < 0 )
        {
          if ( v17 != -1071774958 )
            WdLogSingleEntry0(1LL);
          WdLogSingleEntry3(2LL, v12, *((unsigned int *)v16 + 6), v4);
        }
        else
        {
          LODWORD(v4) = 0;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v15);
        LODWORD(v4) = -1071774972;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v4) = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  }
  return (unsigned int)v4;
}
