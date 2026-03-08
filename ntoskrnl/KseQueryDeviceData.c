/*
 * XREFs of KseQueryDeviceData @ 0x1408016F0
 * Callers:
 *     KseQueryDeviceFlags @ 0x1408014E0 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x1409F34C8 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x14036F8F4 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x14036F924 (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x14057E834 (KsepDebugPrint.c)
 *     KsepDbCacheInsertDevice @ 0x140800AA4 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceData @ 0x140800DE4 (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x1408013F0 (KsepDbCacheReadDevice.c)
 *     KsepDbCacheQueryDevice @ 0x1408015F4 (KsepDbCacheQueryDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14080187C (KsepDbQueryRegistryDeviceData.c)
 *     KseResetDeviceCache @ 0x140973ABC (KseResetDeviceCache.c)
 *     KsepCacheDeviceFree @ 0x1409746B0 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KseQueryDeviceData(WCHAR *SourceString, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  int RegistryDeviceData; // ebx
  _DWORD *v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // [rsp+20h] [rbp-38h]
  int v15[2]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v15 = 0LL;
  if ( dword_140C649B4 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( (*a3 & 0x20000000) != 0 )
  {
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    HIDWORD(v14) = HIDWORD(a5);
    RegistryDeviceData = KsepDbQueryRegistryDeviceData(SourceString);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  if ( (unsigned int)KsepShimDbChanged() )
  {
    KseResetDeviceCache();
  }
  else
  {
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, a2, a3, a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  RegistryDeviceData = KsepDbCacheReadDevice(SourceString, (__int64 *)v15);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v11 = a3;
  v12 = *(_QWORD *)v15;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(*(__int64 *)v15, a2, v11, a4, a5);
  if ( (int)KsepDbCacheInsertDevice(SourceString, v12) < 0 )
    KsepCacheDeviceFree(v12);
LABEL_14:
  if ( RegistryDeviceData >= 0 )
  {
    if ( !*a4 )
      RegistryDeviceData = -1073741275;
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v13]) = 0;
    LODWORD(KsepHistoryMessages[v13]) = 592101;
    if ( (KsepDebugFlag & 1) != 0 )
    {
      LODWORD(v14) = RegistryDeviceData;
      KsepDebugPrint(0LL, "KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v14);
    }
    LODWORD(v14) = RegistryDeviceData;
    KsepLogInfo(0, "KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v14);
  }
  return (unsigned int)RegistryDeviceData;
}
