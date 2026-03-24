/*
 * XREFs of ZwSetInformationObject @ 0x1403FA5A0
 * Callers:
 *     CmpCmdHiveClose @ 0x14071C1E4 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x140870F90 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
