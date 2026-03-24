/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C015A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001A1D0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v10; // rbp
  struct D3DKMDT_HVIDPN__ *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  DXGK_VIDPN_INTERFACE_V1_IMPL *v14; // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  int v16; // ebx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rsi
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r11
  _QWORD *v37; // rax
  __int64 v38; // rcx
  int v39; // [rsp+20h] [rbp-28h] BYREF
  __int64 v40; // [rsp+28h] [rbp-20h]
  char v41; // [rsp+30h] [rbp-18h]

  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 7044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7044);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 7044LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
    v10 = this;
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v21 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    v17 = -1071774973;
    goto LABEL_24;
  }
  if ( a2 && *((_DWORD *)a2 + 32) == 1833173004 )
    v11 = a2;
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v22 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v22 + 24) = a2;
    WdLogEvent5_WdError(v22);
    v17 = -1071774968;
    goto LABEL_24;
  }
  v12 = *((_QWORD *)v11 + 14);
  if ( !v12 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v23);
  }
  v13 = *(_QWORD *)(v12 + 40);
  if ( !v13 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v24);
    v13 = *(_QWORD *)(v12 + 40);
  }
  v14 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v13 + 72);
  if ( !v14 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v25);
    v14 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v13 + 72);
  }
  if ( v14 == v10 )
  {
    if ( *((_QWORD *)v11 + 14) == v12 )
    {
      if ( v11 == *(struct D3DKMDT_HVIDPN__ **)(v12 + 120) )
      {
        v33 = WdLogNewEntry5_WdDmmEvent(v9);
        *(_QWORD *)(v33 + 24) = v11;
        *(_QWORD *)(v33 + 32) = *(unsigned int *)(v12 + 24);
        WdLogEvent5_WdDmmEvent(v33);
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)(v12 + 120), 0LL);
        if ( *((_DWORD *)v11 + 24) != 1 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v34, v8);
          WdLogEvent5_WdAssertion(v35);
        }
      }
      if ( *((_DWORD *)v11 + 24) == 1
        && DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
             *(_QWORD *)(v12 + 112),
             (__int64)v11) )
      {
        v37 = v11 + 2;
        v38 = *((_QWORD *)v11 + 1);
        if ( *(struct D3DKMDT_HVIDPN__ **)(v38 + 8) != v11 + 2
          || (v8 = (_QWORD *)*((_QWORD *)v11 + 2), (_QWORD *)*v8 != v37) )
        {
          __fastfail(3u);
        }
        *v8 = v38;
        *(_QWORD *)(v38 + 8) = v8;
        *v37 = 0LL;
        *((_QWORD *)v11 + 2) = 0LL;
        --*(_QWORD *)(v36 + 32);
      }
      v15 = (void (__fastcall ***)(_QWORD, __int64))(v11 + 22);
      v16 = _InterlockedDecrement((volatile signed __int32 *)v11 + 24);
      if ( !v16 )
      {
        if ( v15 )
          (**v15)(v15, 1LL);
        goto LABEL_23;
      }
      if ( v16 >= 0 )
      {
LABEL_23:
        v17 = 0;
        goto LABEL_24;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v15, v8);
      v32 = v16;
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v32 = *((_QWORD *)v11 + 14);
      v31[4] = v11;
      v31[5] = v12;
    }
    v31[3] = v32;
    WdLogEvent5_WdError(v31);
    goto LABEL_23;
  }
  v26 = WdLogNewEntry5_WdError(v9, v8);
  v28 = *(_QWORD *)(v12 + 40);
  v29 = (_QWORD *)v26;
  if ( !v28 )
  {
    v30 = WdLogNewEntry5_WdAssertion(0LL, v27);
    WdLogEvent5_WdAssertion(v30);
    v28 = *(_QWORD *)(v12 + 40);
  }
  v29[3] = ContainedBy<DMMVIDPN>::GetContainer(v28 + 64, v27);
  v29[4] = v11;
  v29[5] = v10;
  WdLogEvent5_WdError(v29);
  v17 = -1071774928;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, (__int64)v8);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v39);
  return v17;
}
