/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1C034E340
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034ADBC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C034BE48 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v9; // rbx
  __int64 v10; // rbx
  DXGGLOBAL *v11; // rcx
  int v12; // r14d
  _DWORD *v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  char v22; // [rsp+60h] [rbp-38h]
  unsigned int v23; // [rsp+A8h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v24; // [rsp+B0h] [rbp+18h] BYREF
  struct DXGPROCESS *v25; // [rsp+B8h] [rbp+20h]

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2052);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2052);
  Current = DXGPROCESS::GetCurrent(v4);
  v25 = Current;
  if ( Current )
  {
    v9 = (__int64 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (__int64 *)MmUserProbeAddress;
    v10 = *v9;
    v24 = 0LL;
    v23 = 0;
    DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::OpenKeyedMutex(v11, v10, &v24, &v23, 0LL, 0);
    if ( v12 >= 0 )
    {
      v13 = (_DWORD *)(a1 + 4);
      if ( a1 + 4 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = v23;
    }
    if ( v12 < 0 )
    {
      if ( v23 )
        DXGKEYEDMUTEX::DestroyHandle(v23);
    }
    else
    {
      v14 = v23;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v15 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 < *((_DWORD *)Current + 74) )
      {
        v16 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
          && (*(_DWORD *)(v16 + 16 * v15 + 8) & 0x1F) != 0 )
        {
          v17 = 2 * ((v14 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v16 + 8 * v17 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v17 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v20);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v20);
    }
    return 3221225485LL;
  }
}
