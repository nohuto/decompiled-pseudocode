/*
 * XREFs of DxgkTrimProcessCommitment @ 0x1C0343300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0014CD4 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01D3D44 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C01D4104 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C033E84C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkTrimProcessCommitment(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rax
  size_t v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  const void *v9; // rdx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGPROCESS *Process; // rax
  struct DXGGLOBAL *Global; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-D0h]
  char v23; // [rsp+30h] [rbp-C8h]
  unsigned int v24; // [rsp+38h] [rbp-C0h]
  struct DXGPROCESS *v25; // [rsp+40h] [rbp-B8h] BYREF
  int v26; // [rsp+48h] [rbp-B0h]
  int v27; // [rsp+4Ch] [rbp-ACh]
  __int64 v28; // [rsp+50h] [rbp-A8h]
  __int64 v29; // [rsp+58h] [rbp-A0h]
  void *v30[2]; // [rsp+60h] [rbp-98h] BYREF
  __int128 v31; // [rsp+70h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-78h]
  _BYTE v33[80]; // [rsp+90h] [rbp-68h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2210;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2210);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2210);
  *(_OWORD *)v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v4 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v24 = *v4;
  v5 = v24;
  if ( v24 >= 0x28 )
  {
    if ( v24 > 0x28 )
      v5 = 40LL;
    v24 = v5;
    v9 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    memmove(v30, v9, v5);
    v10 = v31;
    if ( (v31 & 0xFFFFFFFC) != 0 )
    {
      WdLogSingleEntry1(3LL, 1032LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
      if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v21);
      return 3221225485LL;
    }
    else
    {
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v33, v30[1], 0x2000);
      v13 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v33, 1);
      if ( v13 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v33);
        v27 = 0;
        v29 = 0LL;
        v25 = Process;
        v26 = v10;
        v28 = *((_QWORD *)&v31 + 1);
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)Global,
          (__int64 (__fastcall *)(_QWORD *, __int64))DxgkTrimProcessCommitmentAdapterCallback,
          (__int64)&v25,
          2);
        v18 = (_QWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v18 = (_QWORD *)MmUserProbeAddress;
        *v18 = v29;
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v21);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(3LL, v30[1]);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v21);
        return (unsigned int)v13;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 1010LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v21);
    }
    return 3221225485LL;
  }
}
