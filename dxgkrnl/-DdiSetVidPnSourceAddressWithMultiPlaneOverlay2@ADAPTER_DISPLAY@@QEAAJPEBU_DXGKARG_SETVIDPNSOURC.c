/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C0044430
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C0047A90 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@@YAJPEAVADAPTER_DISPLAY@@PEBU_DX.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay2(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *a2,
        __int64 a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  KIRQL CurrentIrql; // al
  __int64 v12; // r14
  struct DXGTHREAD *v13; // rbx
  struct DXGTHREAD *Current; // rax
  int v15; // esi
  __int64 v16; // rdi
  KIRQL v17; // al
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  __int64 v25; // [rsp+68h] [rbp-21h]
  char v26; // [rsp+70h] [rbp-19h]
  _BYTE v27[8]; // [rsp+78h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  LODWORD(v24) = -1;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    LODWORD(v24) = 5121;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5121);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5121);
  if ( KeGetCurrentIrql() <= 2u )
  {
    WdLogSingleEntry1(1LL, 1020LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v5,
          v7,
          0LL,
          2,
          -1,
          L"KeGetCurrentIrql() > DISPATCH_LEVEL",
          1020LL,
          0LL,
          0LL,
          0LL,
          0LL,
          v24,
          v25);
    }
  }
  if ( KeGetCurrentIrql() >= 0xFu )
  {
    WdLogSingleEntry1(1LL, 1021LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v9,
          v8,
          v10,
          0LL,
          2,
          -1,
          L"KeGetCurrentIrql() < PROFILE_LEVEL",
          1021LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v12 = CurrentIrql;
  v13 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v13 = Current) != 0LL) )
    v15 = *((_DWORD *)Current + 12);
  else
    v15 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *))(*((_QWORD *)this + 2) + 992LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v12 != KeGetCurrentIrql() )
  {
    v17 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v17);
  }
  if ( v13 && *((_DWORD *)v13 + 12) != v15 )
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v13 + 12), v15, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  if ( (_DWORD)v16 )
  {
    WdLogSingleEntry1(2LL, v16);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v19,
          v18,
          v20,
          0LL,
          0,
          -1,
          L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v16,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v16;
}
