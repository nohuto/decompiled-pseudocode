/*
 * XREFs of DpiGetDriverStorePath @ 0x1C02C6C98
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0173350 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02423C0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000C2B4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     wcsstr_0 @ 0x1C0024923 (wcsstr_0.c)
 */

__int64 __fastcall DpiGetDriverStorePath(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  int FullDriverPath; // ebx
  wchar_t *v6; // rax
  wchar_t *v7; // rdx
  wchar_t i; // ax
  wchar_t *v9; // rcx

  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 32LL));
  if ( FullDriverPath >= 0 )
  {
    if ( *a3 == 2LL )
    {
      FullDriverPath = -2147483643;
      *a3 = 2;
    }
    else
    {
      RtlStringCbCopyW(a2, 0LL, 0LL);
      *a2 = 0;
      v6 = wcsstr_0(a2, L"FileRepository");
      v7 = v6;
      if ( v6 )
      {
        for ( i = *v6; i != 92 && i; i = *v7 )
          ++v7;
        v9 = v7 + 1;
        if ( !*v7 )
          v9 = v7;
        while ( *v9 != 92 && *v9 )
          ++v9;
        *v9 = 0;
        *a3 = (_DWORD)v9 - (_DWORD)a2;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)FullDriverPath;
}
