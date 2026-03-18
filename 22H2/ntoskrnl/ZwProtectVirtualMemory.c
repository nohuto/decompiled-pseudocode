/*
 * XREFs of ZwProtectVirtualMemory @ 0x14041B0A0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x140296B88 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14057F490 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x1405F34C0 (DifZwProtectVirtualMemoryWrapper.c)
 *     MiCheckForUserStackOverflow @ 0x1407BDF28 (MiCheckForUserStackOverflow.c)
 *     sub_140A4DB30 @ 0x140A4DB30 (sub_140A4DB30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
