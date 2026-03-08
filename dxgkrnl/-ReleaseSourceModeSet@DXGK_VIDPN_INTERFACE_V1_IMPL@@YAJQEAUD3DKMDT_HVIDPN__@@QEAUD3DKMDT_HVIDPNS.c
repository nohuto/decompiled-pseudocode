/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C01CF9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C002384C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  unsigned int v3; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // r8
  __int64 Container; // rax
  int v18; // eax
  __int64 v19; // r11
  struct D3DKMDT_HVIDPN__ *v20; // rdx
  struct D3DKMDT_HVIDPN__ *v21; // rax
  struct D3DKMDT_HVIDPN__ **v22; // rcx
  int v23; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+58h] [rbp-30h]
  char v25; // [rsp+60h] [rbp-28h]

  v3 = 0;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 7044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7044);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 7044);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 32) = this;
  if ( !this || *((_DWORD *)this + 16) != 1833172997 )
  {
    WdLogSingleEntry1(2LL, this);
    v18 = -1071774973;
    goto LABEL_39;
  }
  if ( !a2 || *((_DWORD *)a2 + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL, a2);
    v18 = -1071774968;
LABEL_39:
    v3 = v18;
    goto LABEL_20;
  }
  v11 = *((_QWORD *)a2 + 14);
  if ( !v11 )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(v11 + 40) )
    WdLogSingleEntry0(1LL);
  v12 = *(_QWORD *)(v11 + 40);
  if ( !*(_QWORD *)(v12 + 72) )
    WdLogSingleEntry0(1LL);
  if ( *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v12 + 72) != this )
  {
    if ( !*(_QWORD *)(v11 + 40) )
      WdLogSingleEntry0(1LL);
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v11 + 40) + 64LL);
    WdLogSingleEntry3(2LL, Container, a2, this);
    v18 = -1071774928;
    goto LABEL_39;
  }
  v13 = *((_QWORD *)a2 + 14);
  if ( v13 == v11 )
  {
    if ( a2 == *(struct D3DKMDT_HVIDPN__ *const *)(v11 + 120) )
    {
      WdLogSingleEntry2(7LL, a2, *(unsigned int *)(v11 + 24));
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)(v11 + 120), 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
        WdLogSingleEntry0(1LL);
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
           *(_QWORD *)(v11 + 112),
           (__int64)a2) )
    {
      v20 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)a2 + 1);
      v21 = a2 + 2;
      if ( *((struct D3DKMDT_HVIDPN__ *const *)v20 + 1) != a2 + 2
        || (v22 = (struct D3DKMDT_HVIDPN__ **)*((_QWORD *)a2 + 2), *v22 != v21) )
      {
        __fastfail(3u);
      }
      *v22 = v20;
      *((_QWORD *)v20 + 1) = v22;
      *(_QWORD *)v21 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v19 + 32);
    }
    v14 = _InterlockedDecrement((volatile signed __int32 *)a2 + 24);
    if ( v14 )
    {
      if ( v14 < 0 )
      {
        WdLogSingleEntry1(2LL, v14);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
          v14,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else if ( a2 != (struct D3DKMDT_HVIDPN__ *const)-88LL )
    {
      (**((void (__fastcall ***)(struct D3DKMDT_HVIDPN__ *const, __int64))a2 + 11))(a2 + 22, 1LL);
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, v13, a2, v11);
  }
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v15, v23);
  return v3;
}
