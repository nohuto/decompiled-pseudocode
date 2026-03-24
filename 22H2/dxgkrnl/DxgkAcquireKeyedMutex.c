/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C0292DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C028FEA8 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  ULONG64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _OWORD *v16; // rax
  union _LARGE_INTEGER *v17; // r9
  __int64 *v18; // rdx
  ULONG64 v19; // rcx
  _QWORD *v20; // r8
  size_t v21; // [rsp+30h] [rbp-68h]
  int v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h]
  char v24; // [rsp+60h] [rbp-38h]
  unsigned int v25[4]; // [rsp+68h] [rbp-30h]
  __int128 v26; // [rsp+78h] [rbp-20h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+10h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2054);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2054LL);
  if ( !DXGPROCESS::GetCurrent(v5, v4, v6, v7) )
  {
    v10 = WdLogNewEntry5_WdError(v9, v8);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdError(v10);
    goto LABEL_8;
  }
  v16 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v25 = *v16;
  v26 = v16[1];
  v17 = 0LL;
  v27 = 0LL;
  v18 = (__int64 *)v26;
  if ( (_QWORD)v26 )
  {
    if ( (unsigned __int64)v26 >= MmUserProbeAddress )
      v18 = (__int64 *)MmUserProbeAddress;
    v27 = *v18;
    v17 = (union _LARGE_INTEGER *)&v27;
  }
  LODWORD(v21) = 0;
  v11 = DXGKEYEDMUTEX::AcquireSync(
          v25[0],
          *(unsigned __int64 *)&v25[2],
          0LL,
          v17,
          (DXGKEYEDMUTEX *)((char *)&v26 + 8),
          0LL,
          v21,
          0LL,
          1);
  if ( v11 >= 0 )
  {
    v20 = (_QWORD *)(a1 + 24);
    v19 = MmUserProbeAddress;
    v12 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v20 = (_QWORD *)MmUserProbeAddress;
    *v20 = *((_QWORD *)&v26 + 1);
  }
  if ( v11 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v19, v12);
    *(_QWORD *)(v10 + 24) = v25[0];
    *(_QWORD *)(v10 + 32) = v11;
    goto LABEL_7;
  }
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v12);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v22);
  return (unsigned int)v11;
}
