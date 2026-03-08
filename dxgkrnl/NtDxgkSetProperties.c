/*
 * XREFs of NtDxgkSetProperties @ 0x1C01D32D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z @ 0x1C01D37BC (-AllocateElements@-$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C01D381C (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1C030F800 (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1C030F9E8 (-ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VS.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C030FA9C (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1C030FB9C (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 */

__int64 __fastcall NtDxgkSetProperties(ULONG64 a1)
{
  __int128 *v1; // rdx
  __int128 v2; // xmm1
  size_t v3; // rbx
  void *v4; // rsi
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int128 v10; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+88h] [rbp-30h] BYREF
  _BYTE v12[4]; // [rsp+90h] [rbp-28h] BYREF
  int v13; // [rsp+94h] [rbp-24h]

  v1 = (__int128 *)a1;
  P = 0LL;
  v13 = 0;
  if ( a1 >= MmUserProbeAddress )
    v1 = (__int128 *)MmUserProbeAddress;
  v10 = *v1;
  v2 = v1[1];
  if ( !(_QWORD)v2 || !DWORD1(v10) || *((_QWORD *)&v10 + 1) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    P = 0LL;
    v13 = 0;
    return 3221225485LL;
  }
  if ( (unsigned int)v10 <= 2 )
  {
LABEL_7:
    v3 = 16LL;
    goto LABEL_8;
  }
  if ( (_DWORD)v10 != 3 )
  {
    if ( (_DWORD)v10 != 5 )
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
      P = 0LL;
      v13 = 0;
      return 3221225485LL;
    }
    goto LABEL_7;
  }
  v3 = 32LL;
LABEL_8:
  if ( DWORD1(v10) < (unsigned int)v3 )
  {
    WdLogSingleEntry2(2LL, (int)v10, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    P = 0LL;
    v13 = 0;
    return 3221225485LL;
  }
  else
  {
    v4 = (void *)PagedPoolZeroedArray<unsigned char,4>::AllocateElements(&P, (unsigned int)v3);
    if ( v4 )
    {
      if ( v3 + (unsigned __int64)v2 < (unsigned __int64)v2 || v3 + (unsigned __int64)v2 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v4, (const void *)v2, v3);
      Current = DXGPROCESS::GetCurrent(v6);
      if ( (_DWORD)v10 )
      {
        switch ( (_DWORD)v10 )
        {
          case 1:
            v8 = ProcessUserPreferredAdapterProperty(
                   Current,
                   (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)v4,
                   1);
            break;
          case 2:
            v8 = ProcessDefaultHighPerformanceAdapterProperty(
                   Current,
                   (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)v4,
                   1);
            break;
          case 3:
            v8 = PresentDurationPlaneProperty(Current, (struct _D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE *)v4, 1);
            break;
          default:
            v8 = ProcessBoostedVSyncEligibleProperty(
                   Current,
                   (struct _D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE *)v4,
                   1);
            break;
        }
      }
      else
      {
        v8 = ProcessVrrEligibleProperty(Current, (struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *)v4, 1);
      }
      v9 = v8;
      if ( P != v12 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return v9;
    }
    else
    {
      WdLogSingleEntry2(2LL, v3, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
        v3,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      if ( P != v12 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v13 = 0;
      return 3221225495LL;
    }
  }
}
