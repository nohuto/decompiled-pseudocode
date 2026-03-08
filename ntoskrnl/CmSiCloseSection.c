/*
 * XREFs of CmSiCloseSection @ 0x1402F8438
 * Callers:
 *     HvpViewMapCleanup @ 0x14078C304 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x14082CF64 (BiDeleteKey.c)
 *     BiCreateKey @ 0x14082D580 (BiCreateKey.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x14082EB20 (BiGetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x14083089C (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
