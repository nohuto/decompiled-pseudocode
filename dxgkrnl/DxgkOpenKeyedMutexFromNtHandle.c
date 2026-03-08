/*
 * XREFs of DxgkOpenKeyedMutexFromNtHandle @ 0x1C0323F00
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
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C034C008 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutexFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  _OWORD *v9; // rax
  DXGGLOBAL *v10; // rcx
  int v11; // r14d
  _DWORD *v12; // r8
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+58h] [rbp-60h]
  char v21; // [rsp+60h] [rbp-58h]
  void *v22[2]; // [rsp+68h] [rbp-50h]
  void *v23[2]; // [rsp+78h] [rbp-40h]
  unsigned int v24; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v25; // [rsp+D0h] [rbp+18h] BYREF
  struct DXGPROCESS *v26; // [rsp+D8h] [rbp+20h]

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2159;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2159);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2159);
  Current = DXGPROCESS::GetCurrent(v4);
  v26 = Current;
  if ( Current )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v22 = *v9;
    *(_OWORD *)v23 = v9[1];
    v25 = 0LL;
    v24 = 0;
    DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::OpenKeyedMutexFromNtHandle(v10, v22[0], &v25, &v24, v23[0], (unsigned int)v23[1]);
    if ( v11 >= 0 )
    {
      v12 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = v24;
    }
    if ( v11 < 0 )
    {
      if ( v24 )
        DXGKEYEDMUTEX::DestroyHandle(v24);
    }
    else
    {
      v13 = v24;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v14 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v14 < *((_DWORD *)Current + 74) )
      {
        v15 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
          && (*(_DWORD *)(v15 + 16 * v14 + 8) & 0x1F) != 0 )
        {
          v16 = 2 * ((v13 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v15 + 8 * v16 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v16 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v19);
    return (unsigned int)v11;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v19);
    }
    return 3221225485LL;
  }
}
