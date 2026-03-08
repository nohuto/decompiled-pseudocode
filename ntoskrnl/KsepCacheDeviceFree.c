/*
 * XREFs of KsepCacheDeviceFree @ 0x1409746B0
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1408013F0 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceData @ 0x1408016F0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140973910 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
 */

void __fastcall KsepCacheDeviceFree(void **a1)
{
  void **v1; // rsi
  void **v3; // rbx
  void **v4; // rbp

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (void **)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (void **)*v3;
      if ( v4 )
      {
        KsepStringFree((__int64)(v4 + 2));
        KsepPoolFreePaged(v4[5]);
        KsepPoolFreePaged(v4);
      }
    }
    KsepStringFree((__int64)(a1 + 5));
    KsepPoolFreePaged(a1);
  }
}
