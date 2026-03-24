/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1C0293E20
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

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
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
  ULONG64 v16; // rax
  DXGGLOBAL *v17; // rcx
  ULONG64 v18; // rdx
  _DWORD *v19; // r8
  __int64 v20; // r9
  int v21; // r14d
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h]
  char v32; // [rsp+40h] [rbp-38h]
  void *v33[2]; // [rsp+48h] [rbp-30h]
  unsigned int v34[8]; // [rsp+58h] [rbp-20h]
  unsigned int v35; // [rsp+88h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v36; // [rsp+90h] [rbp+18h] BYREF
  struct DXGPROCESS *v37; // [rsp+98h] [rbp+20h]

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2067;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2067);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2067LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v37 = Current;
  if ( Current )
  {
    v16 = a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = MmUserProbeAddress;
    *(_OWORD *)v33 = *(_OWORD *)v16;
    *(_QWORD *)v34 = *(_QWORD *)(v16 + 16);
    v36 = 0LL;
    v35 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
    v21 = DXGGLOBAL::OpenKeyedMutex(v17, LODWORD(v33[0]), &v36, &v35, (char *)v33[1], v34[0]);
    if ( v21 >= 0 )
    {
      v19 = (_DWORD *)(a1 + 4);
      v18 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v35;
    }
    if ( v21 < 0 )
    {
      if ( v35 )
        DXGKEYEDMUTEX::DestroyHandle(v35, v18, (__int64)v19, v20);
    }
    else
    {
      v22 = v35;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v23 = ((unsigned int)v22 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *((_DWORD *)Current + 64) )
      {
        v24 = *((_QWORD *)Current + 30);
        v25 = ((unsigned int)v22 >> 25) & 0x60;
        if ( (((unsigned int)v22 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
          && (*(_DWORD *)(v24 + 16 * v23 + 8) & 0x1F) != 0 )
        {
          v26 = 2 * ((v22 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v24 + 8 * v26 + 8) & 0x2000) == 0 )
          {
            v27 = WdLogNewEntry5_WdAssertion(v25, v24);
            *(_QWORD *)(v27 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v27);
            v24 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v24 + 8 * v26 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v18);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v30);
    return (unsigned int)v21;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v12);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v30);
    }
    return 3221225485LL;
  }
}
