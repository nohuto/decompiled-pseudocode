/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C0293340
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0290410 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0290BEC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
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
  DXGGLOBAL *Global; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r14d
  _DWORD *v22; // r8
  DXGKEYEDMUTEX *v23; // r9
  int v24; // r8d
  _DWORD *v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34[2]; // [rsp+48h] [rbp-50h]
  int v35; // [rsp+58h] [rbp-40h] BYREF
  __int64 v36; // [rsp+60h] [rbp-38h]
  char v37; // [rsp+68h] [rbp-30h]
  unsigned int v38; // [rsp+A8h] [rbp+10h] BYREF
  int v39; // [rsp+B0h] [rbp+18h]
  DXGKEYEDMUTEX *v40; // [rsp+B8h] [rbp+20h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2051);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2051LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v16 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v34 = *v16;
    v38 = 0;
    v40 = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
    v21 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v34[0], &v40, &v38, 0LL, 0, 0);
    if ( v21 >= 0 )
    {
      v22 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      *v22 = v38;
      v23 = v40;
      v24 = *((_DWORD *)v40 + 8);
      v39 = v24;
      v25 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *v25 = v24;
      DXGKEYEDMUTEX::ReleaseReference(v23, (__int64)v25);
    }
    if ( v21 < 0 )
    {
      if ( v38 )
        DXGKEYEDMUTEX::DestroyHandle(v38, v18, v19, v20);
    }
    else
    {
      v26 = v38;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v27 = ((unsigned int)v26 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v27 < *((_DWORD *)Current + 64) )
      {
        v28 = *((_QWORD *)Current + 30);
        v29 = ((unsigned int)v26 >> 25) & 0x60;
        if ( (((unsigned int)v26 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
          && (*(_DWORD *)(v28 + 16 * v27 + 8) & 0x1F) != 0 )
        {
          v30 = 2 * ((v26 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v28 + 8 * v30 + 8) & 0x2000) == 0 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v29, v28);
            *(_QWORD *)(v31 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v31);
            v28 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v28 + 8 * v30 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v18);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v35);
    return (unsigned int)v21;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v12);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v35);
    }
    return 3221225485LL;
  }
}
