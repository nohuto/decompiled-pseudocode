/*
 * XREFs of KseQueryDeviceData @ 0x14080A580
 * Callers:
 *     KseQueryDeviceFlags @ 0x14080A460 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x1409F6358 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepShimDbChanged @ 0x14037462C (KsepShimDbChanged.c)
 *     KsepLogInfo @ 0x140374700 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x140580D64 (KsepDebugPrint.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14080A70C (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x14080A9A4 (KsepDbCacheQueryDevice.c)
 *     KsepDbCacheReadDevice @ 0x14080AA9C (KsepDbCacheReadDevice.c)
 *     KsepDbCacheQueryDeviceData @ 0x14080B0B8 (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheInsertDevice @ 0x14085E218 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x140976B5C (KseResetDeviceCache.c)
 *     KsepCacheDeviceFree @ 0x140977750 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, __int64 a2, _DWORD *a3, _DWORD *a4, void *a5)
{
  int v6; // edi
  int RegistryDeviceData; // ebx
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // [rsp+20h] [rbp-38h]
  int v15[10]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v15 = 0LL;
  v6 = (int)a3;
  if ( dword_140C64E34 != 2 || (KseEngine & 2) != 0 )
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
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, a2, v6, (int)a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  RegistryDeviceData = KsepDbCacheReadDevice(SourceString, v15);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v11 = v6;
  v12 = *(_QWORD *)v15;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(v15[0], a2, v11, (int)a4, a5);
  if ( (int)KsepDbCacheInsertDevice(SourceString) < 0 )
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
