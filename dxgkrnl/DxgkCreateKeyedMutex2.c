/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C034DDA0
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

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  _OWORD *v9; // rax
  unsigned int Value; // r14d
  DXGGLOBAL *Global; // rax
  int v13; // r14d
  _DWORD *v14; // r8
  DXGKEYEDMUTEX *v15; // r9
  int v16; // r8d
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+58h] [rbp-60h] BYREF
  __int64 v25; // [rsp+60h] [rbp-58h]
  char v26; // [rsp+68h] [rbp-50h]
  unsigned __int64 v27[2]; // [rsp+70h] [rbp-48h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v28[4]; // [rsp+80h] [rbp-38h]
  unsigned int v29; // [rsp+C8h] [rbp+10h] BYREF
  int v30; // [rsp+D0h] [rbp+18h]
  DXGKEYEDMUTEX *v31; // [rsp+D8h] [rbp+20h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2066);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2066);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_13;
    }
    return 3221225485LL;
  }
  v9 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v27 = *v9;
  *(_OWORD *)&v28[0].0 = v9[1];
  Value = v28[2].Value;
  if ( v28[3].Value >= 2 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_13:
      if ( v8 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v24);
    }
    return 3221225485LL;
  }
  v29 = 0;
  v31 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v13 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v27[0], &v31, &v29, *(void **)&v28[0].0, Value, v28[3]);
  if ( v13 >= 0 )
  {
    v14 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = v29;
    v15 = v31;
    v16 = *((_DWORD *)v31 + 8);
    v30 = v16;
    v17 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = v16;
    DXGKEYEDMUTEX::ReleaseReference(v15);
  }
  if ( v13 < 0 )
  {
    if ( v29 )
      DXGKEYEDMUTEX::DestroyHandle(v29);
  }
  else
  {
    v18 = v29;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v19 = ((unsigned int)v18 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *((_DWORD *)Current + 74) )
    {
      v20 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v18 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
        && (*(_DWORD *)(v20 + 16 * v19 + 8) & 0x1F) != 0 )
      {
        v21 = 2 * ((v18 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v20 + 8 * v21 + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v21 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v24);
  return (unsigned int)v13;
}
