/*
 * XREFs of ZwProtectVirtualMemory @ 0x140412D10
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14030D290 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14057CF80 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x1405F1010 (DifZwProtectVirtualMemoryWrapper.c)
 *     MiCheckForUserStackOverflow @ 0x14076B848 (MiCheckForUserStackOverflow.c)
 *     sub_140A4AE60 @ 0x140A4AE60 (sub_140A4AE60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
