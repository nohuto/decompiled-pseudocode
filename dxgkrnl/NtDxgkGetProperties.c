/*
 * XREFs of NtDxgkGetProperties @ 0x1C01A8E80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C01D381C (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x1C0222032 (-PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1C030F800 (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1C030F9E8 (-ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VS.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C030FA9C (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1C030FB9C (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 */

__int64 __fastcall NtDxgkGetProperties(_OWORD *a1)
{
  _OWORD *v1; // r15
  __int128 v2; // xmm1
  int v3; // r12d
  unsigned int v4; // edi
  size_t v5; // rbx
  unsigned __int64 v6; // rax
  _DWORD *Pool2; // rsi
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // r14
  struct DXGPROCESS *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edi
  char *v16; // rcx
  int v17; // r12d
  int v18; // r12d
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  int v22; // r12d
  void *v23; // rcx
  _DWORD *v24; // [rsp+58h] [rbp-70h]
  __int128 v25; // [rsp+60h] [rbp-68h]
  _BYTE *P; // [rsp+88h] [rbp-40h]
  _BYTE v27[4]; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+94h] [rbp-34h]

  v1 = a1;
  P = 0LL;
  v28 = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v25 = *a1;
  v2 = a1[1];
  if ( !(_QWORD)v2 || !DWORD1(v25) || DWORD2(v25) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    v28 = 0;
    return 3221225485LL;
  }
  v3 = *a1;
  if ( (_DWORD)v25 == 4 )
  {
    v4 = 64;
    goto LABEL_8;
  }
  if ( (unsigned int)v25 <= 2 )
    goto LABEL_18;
  if ( (_DWORD)v25 != 3 )
  {
    if ( (_DWORD)v25 != 5 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v28 = 0;
      return 3221225485LL;
    }
LABEL_18:
    v4 = 16;
    goto LABEL_8;
  }
  v4 = 32;
LABEL_8:
  if ( DWORD1(v25) < v4 )
  {
    WdLogSingleEntry2(2LL, (int)v25, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v25,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v28 = 0;
    return 3221225485LL;
  }
  v5 = v4;
  if ( v4 == 64LL )
    v6 = 0x3FFFFFFFFFFFFFFLL;
  else
    v6 = 0xFFFFFFFFFFFFFFFFuLL / v4;
  if ( v6 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v4, 1265072196LL);
    P = Pool2;
    v28 = v4;
    v24 = Pool2;
    v5 = v4;
  }
  else
  {
    Pool2 = 0LL;
    v24 = 0LL;
  }
  if ( Pool2 )
  {
    if ( v4 + (unsigned __int64)v2 < (unsigned __int64)v2 || v4 + (unsigned __int64)v2 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Pool2, (const void *)v2, v4);
    CurrentProcess = PsGetCurrentProcess(v9);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v12 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
      goto LABEL_35;
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( !v13 )
        goto LABEL_35;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v13 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( !v13 )
      {
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
        v3 = v25;
        Pool2 = v24;
LABEL_35:
        v13 = v12;
        goto LABEL_36;
      }
      v3 = v25;
      Pool2 = v24;
    }
LABEL_36:
    if ( v3 == 4 )
    {
      if ( Pool2[2] >= 0x38u )
      {
        v14 = PresentStatsDwm2Property(v13, (struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *)Pool2);
        goto LABEL_39;
      }
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid cbSize specified of PresentStatsDwm2 , returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = P;
      if ( P == v27 || !P )
        return 3221225485LL;
LABEL_67:
      ExFreePoolWithTag(v23, 0);
      return 3221225485LL;
    }
    if ( v3 )
    {
      v17 = v3 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v22 = v18 - 1;
          if ( v22 )
          {
            if ( v22 != 2 )
            {
              WdLogSingleEntry1(2LL, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
                -1073741811LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v23 = P;
              if ( P == v27 || !P )
                return 3221225485LL;
              goto LABEL_67;
            }
            v14 = ProcessBoostedVSyncEligibleProperty(
                    v13,
                    (struct _D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE *)Pool2,
                    0);
          }
          else
          {
            v14 = PresentDurationPlaneProperty(v13, (struct _D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE *)Pool2, 0);
          }
        }
        else
        {
          v14 = ProcessDefaultHighPerformanceAdapterProperty(
                  v13,
                  (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                  0);
        }
      }
      else
      {
        v14 = ProcessUserPreferredAdapterProperty(
                v13,
                (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                0);
      }
    }
    else
    {
      v14 = ProcessVrrEligibleProperty(v13, (struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *)Pool2, 0);
    }
LABEL_39:
    v15 = v14;
    v16 = (char *)*((_QWORD *)v1 + 2);
    if ( (unsigned __int64)&v16[v5] > MmUserProbeAddress || &v16[v5] <= v16 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, Pool2, v5);
    if ( P != v27 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return v15;
  }
  WdLogSingleEntry2(2LL, v4, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
    v5,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
  if ( P != v27 && P )
    ExFreePoolWithTag(P, 0);
  v28 = 0;
  return 3221225495LL;
}
