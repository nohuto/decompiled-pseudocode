/*
 * XREFs of ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C02F4B54
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01BA8D4 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 * Callees:
 *     <none>
 */

char __fastcall QDC_CACHE::CompareEntry(
        QDC_CACHE *this,
        struct QDC_CACHE::QDC_CACHE_ENTRY *a2,
        __int64 a3,
        unsigned int a4,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Source2)
{
  SIZE_T v6; // rbx
  SIZE_T v7; // rax

  if ( *((_DWORD *)a2 + 2) != a4 )
  {
    WdLogSingleEntry1(3LL, 612LL);
    return 0;
  }
  v6 = 216LL * a4;
  v7 = RtlCompareMemory(*((const void **)a2 + 2), Source2, v6);
  if ( v7 != v6 )
  {
    WdLogSingleEntry1(3LL, v7);
    return 0;
  }
  return 1;
}
