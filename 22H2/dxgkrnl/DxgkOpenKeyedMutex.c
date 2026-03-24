/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1C0293B40
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
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0291AEC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
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
  __int64 *v16; // rbx
  __int64 v17; // rbx
  DXGGLOBAL *v18; // rcx
  ULONG64 v19; // rdx
  _DWORD *v20; // r8
  __int64 v21; // r9
  int v22; // r14d
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+38h] [rbp-30h]
  char v33; // [rsp+40h] [rbp-28h]
  unsigned int v34; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v35; // [rsp+80h] [rbp+18h] BYREF
  struct DXGPROCESS *v36; // [rsp+88h] [rbp+20h]

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2052);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2052LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v36 = Current;
  if ( Current )
  {
    v16 = (__int64 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (__int64 *)MmUserProbeAddress;
    v17 = *v16;
    v35 = 0LL;
    v34 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
    v22 = DXGGLOBAL::OpenKeyedMutex(v18, (unsigned int)v17, &v35, &v34, 0LL, 0);
    if ( v22 >= 0 )
    {
      v20 = (_DWORD *)(a1 + 4);
      v19 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v34;
    }
    if ( v22 < 0 )
    {
      if ( v34 )
        DXGKEYEDMUTEX::DestroyHandle(v34, v19, (__int64)v20, v21);
    }
    else
    {
      v23 = v34;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v24 = ((unsigned int)v23 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v24 < *((_DWORD *)Current + 64) )
      {
        v25 = *((_QWORD *)Current + 30);
        v26 = ((unsigned int)v23 >> 25) & 0x60;
        if ( (((unsigned int)v23 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60)
          && (*(_DWORD *)(v25 + 16 * v24 + 8) & 0x1F) != 0 )
        {
          v27 = 2 * ((v23 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v25 + 8 * v27 + 8) & 0x2000) == 0 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v26, v25);
            *(_QWORD *)(v28 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v28);
            v25 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v25 + 8 * v27 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v19);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v31);
    return (unsigned int)v22;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v12);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v31);
    }
    return 3221225485LL;
  }
}
