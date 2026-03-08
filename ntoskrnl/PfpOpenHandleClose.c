/*
 * XREFs of PfpOpenHandleClose @ 0x1406A5824
 * Callers:
 *     PfSnGetSectionObject @ 0x1406A48D0 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x1406A4CAC (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1406A4DB4 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x14071E438 (PfpPrefetchEntireDirectory.c)
 *     PfpPrefetchRequestPerform @ 0x1407662E0 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x140766660 (PfpPrefetchVolumesCleanup.c)
 *     PfpVolumeOpenAndVerify @ 0x140766A44 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x140766EA8 (PfpPrefetchDirectoryStream.c)
 *     PfpFileBuildReadSupport @ 0x140767138 (PfpFileBuildReadSupport.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14077A964 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x14077AFF0 (PfSnQueryVolumeInfo.c)
 *     PfpReadSupportCleanup @ 0x140785204 (PfpReadSupportCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x14097B4F0 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PfpOpenHandleClose(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !_bittest64((const signed __int64 *)(a1 + 24), 0x24u) )
  {
    v4[1] = *(_QWORD *)a1;
    v4[2] = *(_QWORD *)(a1 + 8);
    v4[3] = *(_QWORD *)(a1 + 16);
    v4[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_140C64D48 + 8))(v4);
  }
  result = 0x800000000LL;
  *(_QWORD *)(a1 + 24) |= 0x800000000uLL;
  return result;
}
