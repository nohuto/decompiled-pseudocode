/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C0293680
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

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  _OWORD *v14; // rax
  unsigned int Value; // r14d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGGLOBAL *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r14d
  _DWORD *v25; // r8
  DXGKEYEDMUTEX *v26; // r9
  int v27; // r8d
  _DWORD *v28; // rdx
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // [rsp+48h] [rbp-60h] BYREF
  __int64 v38; // [rsp+50h] [rbp-58h]
  char v39; // [rsp+58h] [rbp-50h]
  unsigned __int64 v40[2]; // [rsp+60h] [rbp-48h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v41[4]; // [rsp+70h] [rbp-38h]
  unsigned int v42; // [rsp+B8h] [rbp+10h] BYREF
  int v43; // [rsp+C0h] [rbp+18h]
  DXGKEYEDMUTEX *v44; // [rsp+C8h] [rbp+20h] BYREF

  v37 = -1;
  v38 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2066);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2066LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v13);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v37);
    }
    return 3221225485LL;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v40 = *v14;
  *(_OWORD *)&v41[0].0 = v14[1];
  Value = v41[2].Value;
  if ( v41[3].Value >= 2 )
  {
    v16 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v11);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_11;
  }
  v42 = 0;
  v44 = 0LL;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
  v24 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v40[0], &v44, &v42, *(void **)&v41[0].0, Value, v41[3]);
  if ( v24 >= 0 )
  {
    v25 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = v42;
    v26 = v44;
    v27 = *((_DWORD *)v44 + 8);
    v43 = v27;
    v28 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v28 = (_DWORD *)MmUserProbeAddress;
    *v28 = v27;
    DXGKEYEDMUTEX::ReleaseReference(v26, (__int64)v28);
  }
  if ( v24 < 0 )
  {
    if ( v42 )
      DXGKEYEDMUTEX::DestroyHandle(v42, v21, v22, v23);
  }
  else
  {
    v29 = v42;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
    v30 = ((unsigned int)v29 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *((_DWORD *)Current + 64) )
    {
      v31 = *((_QWORD *)Current + 30);
      v32 = ((unsigned int)v29 >> 25) & 0x60;
      if ( (((unsigned int)v29 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60)
        && (*(_DWORD *)(v31 + 16 * v30 + 8) & 0x1F) != 0 )
      {
        v33 = 2 * ((v29 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v31 + 8 * v33 + 8) & 0x2000) == 0 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v32, v31);
          *(_QWORD *)(v34 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v34);
          v31 = *((_QWORD *)Current + 30);
        }
        *(_DWORD *)(v31 + 8 * v33 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 27) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v21);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v37);
  return (unsigned int)v24;
}
