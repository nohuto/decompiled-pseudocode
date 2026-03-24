/*
 * XREFs of DxgkSetMemoryBudgetTarget @ 0x1C0287500
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C019C2E8 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C0284988 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetMemoryBudgetTarget(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+20h] [rbp-48h] BYREF
  __int64 v35; // [rsp+28h] [rbp-40h]
  char v36; // [rsp+30h] [rbp-38h]
  unsigned int v37; // [rsp+38h] [rbp-30h]
  __int128 v38; // [rsp+40h] [rbp-28h] BYREF

  v3 = (unsigned int *)a1;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2141;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2141);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2141LL);
  if ( CheckTokenForResourceManagerAccess(v5, v4) )
  {
    v38 = 0LL;
    v18 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v18 = (unsigned int *)MmUserProbeAddress;
    v37 = *v18;
    v19 = v37;
    if ( v37 >= 0x10 )
    {
      if ( v37 > 0x10 )
        v19 = 16;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      memmove(&v38, v3, v19);
      if ( DWORD2(v38)
        && (v25 = HIDWORD(v38), HIDWORD(v38))
        && DWORD2(v38) < 0x64
        && HIDWORD(v38) < 0x64
        && (unsigned int)(HIDWORD(v38) + DWORD2(v38)) < 0x64
        && !DWORD1(v38) )
      {
        ApplyResourceManagerPolicyToRenderAdapters(1LL, (__int64)&v38);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v27);
        if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v34);
        return 0LL;
      }
      else
      {
        v30 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v30 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v30);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v31);
        if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v34);
        return 3221225485LL;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v37, v8);
      *(_QWORD *)(v20 + 24) = 4603LL;
      WdLogEvent5_WdWarning(v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v21);
      if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v34);
      return 3221225485LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v11, v10, v12, v13);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v14);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v34);
    }
    return 3221225506LL;
  }
}
