/*
 * XREFs of CmSiAllocateMemory @ 0x1402447A4
 * Callers:
 *     CmpGetCompleteFileName @ 0x1406C0B40 (CmpGetCompleteFileName.c)
 *     CmpInitHiveFromFile @ 0x1406C0BF0 (CmpInitHiveFromFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1406C1120 (CmpQueryFileSecurityDescriptor.c)
 *     HvpViewMapCreateView @ 0x140730DF8 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x14084C438 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmSiAllocateMemory(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a1, a2);
}
