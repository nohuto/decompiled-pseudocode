/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C017F430
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z @ 0x1C017F648 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0195A00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  volatile signed __int64 *v6; // rbx
  char v7; // al
  struct DXGADAPTER *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rcx
  struct DXGADAPTER *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+40h] [rbp-71h] BYREF
  __int64 v16; // [rsp+48h] [rbp-69h]
  char v17; // [rsp+50h] [rbp-61h]
  char v18; // [rsp+59h] [rbp-58h]
  _BYTE v19[8]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v20; // [rsp+68h] [rbp-49h]
  struct DXGADAPTER *v21; // [rsp+70h] [rbp-41h]
  char v22; // [rsp+78h] [rbp-39h]
  __int64 v23; // [rsp+80h] [rbp-31h]
  _BYTE v24[8]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-9h]
  struct DXGADAPTER *v26; // [rsp+B0h] [rbp-1h]
  char v27; // [rsp+B8h] [rbp+7h]
  char *v28; // [rsp+C0h] [rbp+Fh]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2209;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2209);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2209);
  v4 = *(_QWORD *)a1;
  v5 = a1[2];
  v18 = 0;
  v21 = (struct DXGADAPTER *)v4;
  v22 = 0;
  v6 = (volatile signed __int64 *)(v4 + 24);
  v23 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement64(v6);
    v20 = -1LL;
  }
  v26 = (struct DXGADAPTER *)v4;
  v7 = 0;
  v27 = 0;
  v28 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement64(v6);
    v7 = v27;
    v25 = -1LL;
  }
  if ( v7 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v24, 0LL, 0LL);
  v8 = v26;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v26 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v26 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (const EVENT_DESCRIPTOR *)"g", v10, 72);
      KeWaitForSingleObject((char *)v26 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v26, 0LL);
    v8 = v26;
  }
  v28 = 0LL;
  v27 = 1;
  if ( *((_DWORD *)v8 + 50) == 1 )
  {
    if ( v21 == v26 || (COREACCESS::AcquireShared((COREACCESS *)v19, 0LL), *((_DWORD *)v21 + 50) == 1) )
    {
      v18 = 1;
      DXGADAPTER::ProcessVSyncPhaseTimer((DXGADAPTER *)v4, v5);
      goto LABEL_15;
    }
    COREACCESS::Release((COREACCESS *)v19);
  }
  COREACCESS::Release((COREACCESS *)v24);
LABEL_15:
  if ( _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v4 + 16), (struct DXGADAPTER *)v4);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v4 + 4152) + 4 * v5), 0);
  if ( v18 )
  {
    if ( v21 != v26 )
      COREACCESS::Release((COREACCESS *)v19);
    if ( !v27 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v24, 0LL, 0LL);
    v27 = 0;
    v11 = v26;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v26 + 23) )
    {
      DXGADAPTER::ReleaseCoreResource(v26, v28);
      v11 = v26;
    }
    v28 = 0LL;
    v18 = 0;
  }
  else
  {
    v11 = v26;
  }
  if ( v11 )
  {
    if ( v27 )
    {
      COREACCESS::Release((COREACCESS *)v24);
      v11 = v26;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v11 + 2), v11);
  }
  v12 = v21;
  if ( v21 )
  {
    if ( v22 )
    {
      COREACCESS::Release((COREACCESS *)v19);
      v12 = v21;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v12 + 2), v12);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v15);
  }
}
