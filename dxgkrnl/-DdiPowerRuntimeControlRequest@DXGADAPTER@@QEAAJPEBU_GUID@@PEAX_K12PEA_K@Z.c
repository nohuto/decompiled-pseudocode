/*
 * XREFs of ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0020BD4
 * Callers:
 *     ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C00457B0 (-DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020F0E4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C02B3D8C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
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

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeControlRequest(
        DXGADAPTER *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  KIRQL CurrentIrql; // al
  __int64 v12; // r15
  struct DXGTHREAD *v13; // rdi
  struct DXGTHREAD *Current; // rax
  int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  KIRQL v20; // al
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // [rsp+60h] [rbp-71h] BYREF
  __int64 v25; // [rsp+68h] [rbp-69h]
  char v26; // [rsp+70h] [rbp-61h]
  unsigned __int64 *v27; // [rsp+78h] [rbp-59h]
  void *v28; // [rsp+80h] [rbp-51h]
  _BYTE v29[8]; // [rsp+88h] [rbp-49h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-41h] BYREF

  LODWORD(v24) = -1;
  v25 = 0LL;
  v28 = a5;
  v27 = a7;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    LODWORD(v24) = 5126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5126LL);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5126);
  _InterlockedIncrement((volatile signed __int32 *)this + 1153);
  CurrentIrql = KeGetCurrentIrql();
  v12 = CurrentIrql;
  v13 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v13 = Current) != 0LL) )
    v15 = *((_DWORD *)Current + 12);
  else
    v15 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v29, this);
  v16 = (*((int (__fastcall **)(_QWORD, const struct _GUID *, void *, __int64, void *, unsigned __int64, unsigned __int64 *))this
         + 105))(
          *((_QWORD *)this + 35),
          a2,
          a3,
          a4,
          v28,
          a6,
          v27);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v12 != KeGetCurrentIrql() )
  {
    v20 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v20);
  }
  if ( v13 && *((_DWORD *)v13 + 12) != v15 )
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v13 + 12), v15, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)this + 1153);
  if ( (_DWORD)v16 != -1073741811 )
  {
    if ( (_DWORD)v16 )
    {
      WdLogSingleEntry1(2LL, v16);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v22,
            v21,
            v23,
            0,
            0,
            -1,
            (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v16,
            0LL,
            0LL,
            0LL,
            0LL,
            v24,
            v25);
      }
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, (unsigned int)v24);
  return (unsigned int)v16;
}
