/*
 * XREFs of DxgkGetProcessDeviceRemovalSupport @ 0x1C0341BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0014CD4 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01D3D44 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C01D4104 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C033E84C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1C034004C (-GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z.c)
 */

__int64 __fastcall DxgkGetProcessDeviceRemovalSupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KTHREAD **Process; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 v13; // [rsp+20h] [rbp-A8h] BYREF
  int v14; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-98h]
  char v16; // [rsp+38h] [rbp-90h]
  struct _LUID v17[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+50h] [rbp-78h]
  _BYTE v19[80]; // [rsp+60h] [rbp-68h] BYREF

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2156;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2156);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 2156);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)&v17[0].LowPart = *(_OWORD *)v4;
  v18 = *(_QWORD *)(v4 + 16);
  v13 = 1;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v19, *(void **)v17, 4096);
  v5 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v19, 0);
  if ( v5 >= 0 )
  {
    Process = (struct _KTHREAD **)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v19);
    DXGPROCESS::GetDeviceRemovalSupport(Process, &v17[1], (bool *)&v13);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v19);
    v10 = (_BYTE *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = v13;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, *(_QWORD *)v17);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v14);
    }
    return (unsigned int)v5;
  }
}
