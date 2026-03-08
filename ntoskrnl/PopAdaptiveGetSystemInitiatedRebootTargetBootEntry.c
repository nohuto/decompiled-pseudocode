/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1409987C0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059B9D8 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(__int64 a1, GUID *a2)
{
  GUID *Pool2; // rdi
  int ElementDataWithFlags; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  GUID v7; // xmm0
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = -1LL;
  Pool2 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR.Data1, &v10);
  if ( ElementDataWithFlags >= 0 )
  {
    v9 = 0;
    ElementDataWithFlags = BcdGetElementDataWithFlags(v10, 0x24000002u, v5, 0LL, &v9);
    if ( ElementDataWithFlags == -1073741789 )
    {
      Pool2 = (GUID *)ExAllocatePool2(256LL, v9, 1734960208LL);
      if ( !Pool2 )
      {
        ElementDataWithFlags = -1073741670;
        goto LABEL_12;
      }
      ElementDataWithFlags = BcdGetElementDataWithFlags(v10, 0x24000002u, v6, (__int64)Pool2, &v9);
    }
    if ( ElementDataWithFlags == -1073741275 )
      goto LABEL_10;
    if ( ElementDataWithFlags < 0 )
      goto LABEL_12;
    if ( !v9 )
LABEL_10:
      v7 = GUID_DEFAULT_BOOT_ENTRY;
    else
      v7 = *Pool2;
    *a2 = v7;
    ElementDataWithFlags = 0;
  }
LABEL_12:
  if ( v10 != -1 )
    BcdCloseObject(v10);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x67696450u);
  return (unsigned int)ElementDataWithFlags;
}
