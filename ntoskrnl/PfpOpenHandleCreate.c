/*
 * XREFs of PfpOpenHandleCreate @ 0x1406A5020
 * Callers:
 *     PfSnGetSectionObject @ 0x1406A48D0 (PfSnGetSectionObject.c)
 *     PfpPrefetchEntireDirectory @ 0x14071E438 (PfpPrefetchEntireDirectory.c)
 *     PfpVolumeOpenAndVerify @ 0x140766A44 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x140766EA8 (PfpPrefetchDirectoryStream.c)
 *     PfpFileBuildReadSupport @ 0x140767138 (PfpFileBuildReadSupport.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14077A964 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x14077AFF0 (PfSnQueryVolumeInfo.c)
 *     PfpQueryFileExtentsRequest @ 0x14097B4F0 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14020C198 (PfpCheckPrefetchAbort.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PfpOpenHandleCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  int v15; // r13d
  _QWORD *v16; // rcx
  int v17; // eax
  unsigned int v18; // edx
  _OWORD v20[10]; // [rsp+28h] [rbp-69h] BYREF
  LARGE_INTEGER Interval; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v22; // [rsp+E8h] [rbp+57h]
  __int64 v23; // [rsp+F0h] [rbp+5Fh]

  v23 = a4;
  v22 = a3;
  memset(v20, 0, 0x70uLL);
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 68);
  Interval.QuadPart = -10000LL * *(unsigned int *)(a2 + 56);
  if ( (v11 & 4) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else
  {
    v12 = a8;
    v13 = a7;
    v14 = a6;
    v15 = a5;
    while ( 1 )
    {
      v16 = *(_QWORD **)(a2 + 24);
      if ( v16 && (unsigned int)PfpCheckPrefetchAbort(v16) )
        return (unsigned int)-1073741248;
      memset(v20, 0, 0x70uLL);
      LODWORD(v20[1]) = 48;
      *(_QWORD *)&v20[0] = a2 + 40;
      *((_QWORD *)&v20[1] + 1) = v23;
      *(_QWORD *)&v20[2] = v22;
      DWORD2(v20[2]) = 576;
      v20[3] = 0LL;
      LODWORD(v20[4]) = v15;
      *(_QWORD *)((char *)&v20[4] + 4) = __PAIR64__(v14, v13);
      if ( v12 )
        *((_QWORD *)&v20[0] + 1) = *(_QWORD *)(v12 + 8);
      v17 = (*(__int64 (__fastcall **)(_OWORD *))qword_140C64D48)(v20);
      v18 = v17;
      if ( v17 >= 0 )
      {
        *(_OWORD *)a1 = v20[5];
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v20[6];
        *(_DWORD *)(a1 + 24) = HIDWORD(v20[6]);
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 76));
        *(_QWORD *)(a1 + 24) |= 0x400000000uLL;
        return 0;
      }
      ++*(_DWORD *)(a2 + 80);
      if ( DWORD2(v20[6]) == 2 )
        break;
      if ( DWORD2(v20[6]) == 5 )
      {
        *(_DWORD *)(a2 + 72) = 1;
        return v18;
      }
      if ( DWORD2(v20[6]) != 11 && DWORD2(v20[6]) != 12 && DWORD2(v20[6]) != 13 && DWORD2(v20[6]) != 16
        || DWORD2(v20[6]) == 16 && v10 > 1
        || *(_DWORD *)(a2 + 60) <= *(_DWORD *)(a2 + 64) )
      {
        return v18;
      }
      KeDelayExecutionThread(0, 0, &Interval);
      ++v10;
      *(_DWORD *)(a2 + 64) += *(_DWORD *)(a2 + 56);
      if ( (*(_DWORD *)(a2 + 68) & 4) != 0 )
        return (unsigned int)-1073741431;
    }
    if ( v17 != -1073741790 )
      *(_QWORD *)(a1 + 24) |= 0x100000000uLL;
  }
  return v18;
}
