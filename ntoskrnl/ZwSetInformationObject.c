/*
 * XREFs of ZwSetInformationObject @ 0x140412E90
 * Callers:
 *     DifZwSetInformationObjectWrapper @ 0x1405F4DC0 (DifZwSetInformationObjectWrapper.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x14074B34C (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
