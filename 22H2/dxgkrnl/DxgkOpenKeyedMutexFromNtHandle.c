/*
 * XREFs of DxgkOpenKeyedMutexFromNtHandle @ 0x1C0279880
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0290BEC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C0291C6C (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutexFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _OWORD *v16; // rax
  DXGGLOBAL *v17; // rcx
  ULONG64 v18; // rdx
  int v19; // r14d
  _DWORD *v20; // r8
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h]
  char v31; // [rsp+40h] [rbp-48h]
  void *v32[2]; // [rsp+48h] [rbp-40h]
  void *v33[2]; // [rsp+58h] [rbp-30h]
  unsigned int v34; // [rsp+98h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v35; // [rsp+A0h] [rbp+18h] BYREF
  struct DXGPROCESS *v36; // [rsp+A8h] [rbp+20h]

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2159;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2159);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2159LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v36 = Current;
  if ( Current )
  {
    v16 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v32 = *v16;
    *(_OWORD *)v33 = v16[1];
    v35 = 0LL;
    v34 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
    v19 = DXGGLOBAL::OpenKeyedMutexFromNtHandle(v17, v32[0], &v35, &v34, v33[0], (unsigned int)v33[1]);
    if ( v19 >= 0 )
    {
      v20 = (_DWORD *)(a1 + 8);
      v18 = MmUserProbeAddress;
      if ( a1 + 8 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v34;
    }
    if ( v19 < 0 )
    {
      if ( v34 )
        DXGKEYEDMUTEX::DestroyHandle(v34);
    }
    else
    {
      v21 = v34;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v22 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v22 < *((_DWORD *)Current + 64) )
      {
        v23 = *((_QWORD *)Current + 30);
        v24 = ((unsigned int)v21 >> 25) & 0x60;
        if ( (((unsigned int)v21 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
          && (*(_DWORD *)(v23 + 16 * v22 + 8) & 0x1F) != 0 )
        {
          v25 = 2 * ((v21 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v23 + 8 * v25 + 8) & 0x2000) == 0 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v24, v23);
            *(_QWORD *)(v26 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v26);
            v23 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v23 + 8 * v25 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v18);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v29);
    return (unsigned int)v19;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v12);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v29);
    }
    return 3221225485LL;
  }
}
