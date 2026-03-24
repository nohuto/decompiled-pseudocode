/*
 * XREFs of ?DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z @ 0x1C00D6190
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C00DCDB4 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x1C0025A88 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateCpuEvent(
        ADAPTER_RENDER *this,
        struct _DXGKARG_CREATECPUEVENT *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct DXGTHREAD *v9; // rdi
  struct DXGTHREAD *Current; // rax
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-70h]
  char v23; // [rsp+30h] [rbp-68h]
  _BYTE v24[56]; // [rsp+38h] [rbp-60h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5158);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5158LL);
  v6 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v6 + 1376) )
  {
    DXGADAPTER::AcquireDdiSync(v6, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    v9 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
      v11 = *((_DWORD *)Current + 8);
    else
      v11 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v24,
      *((struct DXGADAPTER **)this + 2));
    v7 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_CREATECPUEVENT *))(*((_QWORD *)this + 2) + 1376LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
           a2);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v24);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
      v14[3] = 275LL;
      v14[4] = 16LL;
      v14[5] = this;
      v14[6] = CurrentIrql;
      v14[7] = KeGetCurrentIrql();
      WdLogEvent5_WdCriticalError(v14);
    }
    if ( v9 && *((_DWORD *)v9 + 8) != v11 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
      v15[3] = 275LL;
      v15[4] = 38LL;
      v16 = *((int *)v9 + 8);
      v15[7] = 0LL;
      v15[5] = v16;
      v15[6] = v11;
      WdLogEvent5_WdCriticalError(v15);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    if ( (_DWORD)v7 != -1073741801 && (_DWORD)v7 )
    {
      v17 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v17 + 24) = v7;
      WdLogEvent5_WdError(v17);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  else
  {
    LODWORD(v7) = -1073741637;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v5);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return (unsigned int)v7;
}
