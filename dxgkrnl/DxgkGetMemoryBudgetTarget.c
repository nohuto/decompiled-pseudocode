/*
 * XREFs of DxgkGetMemoryBudgetTarget @ 0x1C0215AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0215D28 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetMemoryBudgetTarget(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int *v5; // rax
  size_t v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  const void *v10; // rdx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v12; // rax
  int v13; // esi
  int v14; // r14d
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h]
  char v26; // [rsp+30h] [rbp-48h]
  unsigned int v27; // [rsp+38h] [rbp-40h]
  _BYTE v28[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v29; // [rsp+50h] [rbp-28h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2144;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2144);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2144);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v29 = 0LL;
    v5 = (unsigned int *)a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = (unsigned int *)MmUserProbeAddress;
    v27 = *v5;
    v6 = v27;
    if ( v27 >= 0x10 )
    {
      if ( v27 > 0x10 )
        v6 = 16LL;
      v27 = v6;
      v10 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v10 = (const void *)MmUserProbeAddress;
      memmove(&v29, v10, v6);
      if ( DWORD1(v29) )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
        if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v24);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGGLOBAL *)((char *)Global + 672), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
        v12 = DXGGLOBAL::GetGlobal();
        v13 = *((_DWORD *)v12 + 76115);
        DWORD2(v29) = v13;
        v14 = *((_DWORD *)v12 + 76116);
        HIDWORD(v29) = v14;
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
        v15 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v15 = (_DWORD *)MmUserProbeAddress;
        *v15 = v13;
        v16 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        *v16 = v14;
        DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v28);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
        if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v24);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, 5087LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v24);
      }
      return 3221225485LL;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v4);
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v24);
    }
    return 3221225506LL;
  }
}
