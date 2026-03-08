/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C034DA20
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C034A4BC (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034ADBC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  _OWORD *v9; // rax
  DXGGLOBAL *Global; // rax
  int v11; // r14d
  _DWORD *v12; // r8
  DXGKEYEDMUTEX *v13; // r9
  int v14; // r8d
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22[2]; // [rsp+58h] [rbp-50h]
  int v23; // [rsp+68h] [rbp-40h] BYREF
  __int64 v24; // [rsp+70h] [rbp-38h]
  char v25; // [rsp+78h] [rbp-30h]
  unsigned int v26; // [rsp+B8h] [rbp+10h] BYREF
  int v27; // [rsp+C0h] [rbp+18h]
  DXGKEYEDMUTEX *v28; // [rsp+C8h] [rbp+20h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2051);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2051);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v22 = *v9;
    v26 = 0;
    v28 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v22[0], &v28, &v26, 0LL, 0, 0);
    if ( v11 >= 0 )
    {
      v12 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = v26;
      v13 = v28;
      v14 = *((_DWORD *)v28 + 8);
      v27 = v14;
      v15 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v14;
      DXGKEYEDMUTEX::ReleaseReference(v13);
    }
    if ( v11 < 0 )
    {
      if ( v26 )
        DXGKEYEDMUTEX::DestroyHandle(v26);
    }
    else
    {
      v16 = v26;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v17 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 < *((_DWORD *)Current + 74) )
      {
        v18 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
          && (*(_DWORD *)(v18 + 16 * v17 + 8) & 0x1F) != 0 )
        {
          v19 = 2 * ((v16 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v18 + 8 * v19 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v19 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v23);
    }
    return 3221225485LL;
  }
}
