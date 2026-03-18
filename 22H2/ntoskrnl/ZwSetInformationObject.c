/*
 * XREFs of ZwSetInformationObject @ 0x14041B220
 * Callers:
 *     DifZwSetInformationObjectWrapper @ 0x1405F7270 (DifZwSetInformationObjectWrapper.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
