/*
 * XREFs of PfpOpenHandleClose @ 0x1406339C0
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x140632798 (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x14063290C (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x1406331D8 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x140633648 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140633754 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x1406340E4 (PfpReadSupportCleanup.c)
 *     PfSnQueryVolumeInfo @ 0x1406342E4 (PfSnQueryVolumeInfo.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140634420 (PfSnOpenVolumesForPrefetch.c)
 *     PfpPrefetchRequestPerform @ 0x14070AFA4 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x14070B318 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x14070BA34 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchVolumesCleanup @ 0x14070BDDC (PfpPrefetchVolumesCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD5C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PfpOpenHandleClose(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[3];
  if ( (v2 & 0x1000000000LL) == 0 )
  {
    v5[1] = *a1;
    v5[2] = a1[1];
    v5[3] = a1[2];
    v5[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_140C503F8 + 8))(v5);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
