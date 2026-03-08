/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C01A5B6C
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C03CD1E8 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008714 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2, __int64 a3)
{
  struct DXGGLOBAL *Global; // rax
  KIRQL CurrentIrql; // al
  __int64 v7; // r15
  struct DXGTHREAD *v8; // rdi
  int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 PrivateDriverDataSize; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // r8
  KIRQL v17; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-29h] BYREF
  int v19; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h]
  char v21; // [rsp+68h] [rbp-11h]
  _BYTE v22[8]; // [rsp+70h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-1h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 5022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5022);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 5022);
  Global = DXGGLOBAL::GetGlobal();
  if ( *((_BYTE *)Global + 1688)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1684), this) )
  {
    LODWORD(v10) = -1073741637;
  }
  else
  {
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1153);
    CurrentIrql = KeGetCurrentIrql();
    v7 = CurrentIrql;
    v8 = 0LL;
    if ( CurrentIrql < 2u
      && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
      && ((v8 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v8 = DxgThread) != 0LL)) )
    {
      v9 = *((_DWORD *)v8 + 12);
    }
    else
    {
      v9 = 0;
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22, this);
    v10 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 73))(*((_QWORD *)this + 35), a2);
    if ( v22[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v7 != KeGetCurrentIrql() )
    {
      v17 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v17);
    }
    if ( v8 )
    {
      v11 = *((int *)v8 + 12);
      if ( (_DWORD)v11 != v9 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v11, v9, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1153);
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize <= 4 )
      v13 = 0;
    else
      v13 = *(_DWORD *)a2->pPrivateDriverData;
    WdLogSingleEntry5(4LL, v10, *((_QWORD *)this + 35), a2->hDevice, PrivateDriverDataSize, v13);
    if ( (_DWORD)v10 == -1073741823 )
    {
      WdLogSingleEntry1(4LL, -1073741823LL);
    }
    else if ( (_DWORD)v10 != -1073741811
           && (_DWORD)v10 != -1073741801
           && (_DWORD)v10 != -1073741795
           && (_DWORD)v10 != -1073741674
           && (_DWORD)v10 )
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(this);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v19);
  return (unsigned int)v10;
}
