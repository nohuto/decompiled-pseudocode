/*
 * XREFs of CmSiCloseSection @ 0x140321658
 * Callers:
 *     HvpViewMapCleanup @ 0x14069887C (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x140779860 (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x1407820E4 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x140783B10 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140783CF8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140784304 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078448C (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
