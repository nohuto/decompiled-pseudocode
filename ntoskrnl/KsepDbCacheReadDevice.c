/*
 * XREFs of KsepDbCacheReadDevice @ 0x1408013F0
 * Callers:
 *     KseQueryDeviceData @ 0x1408016F0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140973910 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     KseShimDatabaseClose @ 0x14079E25C (KseShimDatabaseClose.c)
 *     KsepStringDuplicate @ 0x14079E668 (KsepStringDuplicate.c)
 *     KseShimDatabaseOpen @ 0x14079EFB4 (KseShimDatabaseOpen.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1408012E8 (KsepDbCacheReadDeviceInternal.c)
 *     KsepCacheDeviceFree @ 0x1409746B0 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(wchar_t *a1, __int64 *a2)
{
  char *Paged; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  int DeviceInternal; // edi
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v12; // eax
  __int64 *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  Paged = (char *)KsepPoolAllocatePaged(0x48uLL);
  v5 = (__int64)Paged;
  if ( Paged )
  {
    v6 = Paged + 56;
    v6[1] = v6;
    *v6 = v6;
    DeviceInternal = KsepStringDuplicate(v5 + 40, a1);
    if ( DeviceInternal < 0 )
      goto LABEL_17;
    v8 = KseShimDatabaseOpen(&v13);
    v9 = (__int64)v13;
    DeviceInternal = v8;
    if ( v8 >= 0 )
    {
      DeviceInternal = KsepDbCacheReadDeviceInternal(*v13, (__int64)&KsepMatchMachineInfo, a1, v5);
      if ( (int)(DeviceInternal + 0x80000000) < 0 || DeviceInternal == -1073741275 )
      {
        v10 = *(_QWORD *)(v9 + 56);
        if ( !v10
          || (v12 = KsepDbCacheReadDeviceInternal(v10, (__int64)&KsepMatchMachineInfo, a1, v5),
              ((v12 + 0x80000000) & 0x80000000) != 0)
          || v12 == -1073741275 )
        {
          *a2 = v5;
          v5 = 0LL;
        }
      }
    }
    if ( v9 )
      KseShimDatabaseClose(v9);
    if ( v5 )
LABEL_17:
      KsepCacheDeviceFree(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DeviceInternal;
}
