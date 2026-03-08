/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x140A24FA4
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A2416C (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A24640 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A24A68 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpWorkItemQueueWork @ 0x14038897C (CmpWorkItemQueueWork.c)
 *     ZwQueryWnfStateData @ 0x1404150D0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall CmFcpManagerPublishChangeNotifications(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx
  __int64 v4; // rdi
  __int64 *i; // rdi
  char v6; // bl
  __int64 result; // rax
  __int64 v8; // [rsp+A8h] [rbp+48h] BYREF
  int v9; // [rsp+B0h] [rbp+50h]
  int v10; // [rsp+B8h] [rbp+58h]

  v8 = a2;
  v2 = (signed __int64 *)(a1 + 560);
  v9 = 0;
  v10 = 0;
  v4 = KeAbPreAcquire(a1 + 560, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v4, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  for ( i = *(__int64 **)(a1 + 568); i != (__int64 *)(a1 + 568); i = (__int64 *)*i )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 2));
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  v6 = *(_BYTE *)(a1 + 339);
  for ( result = ZwQueryWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)CmFcpWnfTypeId);
        (int)result >= 0;
        result = ZwQueryWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)CmFcpWnfTypeId) )
  {
    result = v8;
    if ( !v8 )
      break;
    result = ZwUpdateWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)&v8);
    if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741823 )
      break;
    if ( v6 && (int)result >= 0 )
    {
      v10 = 8;
      result = ZwQueryWnfStateData((__int64)&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, 0LL);
      if ( (int)result >= 0 )
      {
        result = v8;
        if ( v8 )
          return ZwUpdateWnfStateData((__int64)&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, (__int64)&v8);
      }
      return result;
    }
  }
  return result;
}
