/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1C0003B20
 * Callers:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0003B8C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0040908 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x1C02B63B0 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037FA00 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C0003C50 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  __int64 v8; // rcx
  int v9; // r8d
  unsigned __int16 *v10; // r10
  unsigned __int64 *v11; // r11

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  v9 = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( v9 >= 0 )
  {
    if ( v10 )
    {
      *ppszDest = *(wchar_t **)(v8 + 8);
      *pcchDest = (unsigned __int64)v10[1] >> 1;
      if ( v11 )
        *v11 = (unsigned __int64)*v10 >> 1;
    }
  }
  return v9;
}
