/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000C768
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000C95C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x1C0019F3C (HUBPDO_HandlePLDRRecovery.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C001A390 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007AFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C007F410 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C000C57C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C000C674 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     __security_check_cookie @ 0x1C0044810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v8; // r15d
  unsigned int v10; // r8d
  unsigned __int32 v11; // eax
  unsigned __int32 v12; // ett
  int v13; // ecx
  unsigned int v14; // ecx
  signed __int32 v15; // eax
  unsigned int v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+34h] [rbp-3Ch]
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v5 = 0;
  v20 = 0LL;
  v8 = a3;
  v19 = 0LL;
  switch ( a5 )
  {
    case 0u:
      goto LABEL_25;
    case 1u:
LABEL_24:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v19);
      goto LABEL_26;
    case 2u:
    case 3u:
      goto LABEL_15;
    case 4u:
LABEL_25:
      wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v19);
      goto LABEL_26;
    case 5u:
      goto LABEL_24;
  }
  if ( a5 - 6 >= 2 )
  {
    v10 = a5 - 320;
    if ( a5 - 320 < 0x40 )
    {
      v11 = *((_DWORD *)a1 + 1);
      do
      {
        if ( (v11 & 0x10) == 0 || (LODWORD(v20) = 1, ((v11 >> 5) & 0x3F) != v10) )
          LODWORD(v20) = 0;
        v12 = v11;
        v11 = _InterlockedCompareExchange(a1 + 1, (32 * (v10 & 0x3F)) | v11 & 0xFFFFF81F | 0x10, v11);
      }
      while ( v12 != v11 );
    }
    *((_QWORD *)&v19 + 1) = a5;
    DWORD1(v19) = 1;
    goto LABEL_26;
  }
LABEL_15:
  v13 = 0;
  switch ( a5 )
  {
    case 2u:
      v13 = 2;
      break;
    case 3u:
      v13 = 8;
      break;
    case 6u:
      v13 = 4;
      break;
    case 7u:
      v13 = 16;
      break;
  }
  v14 = v13 | 1;
  _m_prefetchw((const void *)a1);
  v15 = _InterlockedOr(a1, v14);
  LODWORD(v19) = (v15 & 1) == 0;
  LODWORD(v20) = (v15 & v14 & 0xFFFFFFFE) == (v14 & 0xFFFFFFFE);
LABEL_26:
  v22 = v20;
  v21 = v19;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v21);
  if ( v8 && a5 != 254 )
  {
    v17 = a2;
    v18 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v18) |= 1u;
    RtlNotifyFeatureUsage(&v17);
  }
  LOBYTE(v5) = (_DWORD)v22 == 0;
  return v5;
}
