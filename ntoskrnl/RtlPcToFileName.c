/*
 * XREFs of RtlPcToFileName @ 0x1403A4E70
 * Callers:
 *     KiLogSingleDpcSoftTimeoutEvent @ 0x140568EC0 (KiLogSingleDpcSoftTimeoutEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1405FD9EC (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x14060C7C0 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x14073B960 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x1402280EC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402824A4 (MmUnlockLoadedModuleListShared.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall RtlPcToFileName(unsigned __int64 a1, UNICODE_STRING *a2)
{
  unsigned int v3; // ebx
  PVOID *v5; // r8
  PVOID *v6; // rdx
  PVOID v7; // rcx
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v9 = 0;
  MmLockLoadedModuleListShared(&v9);
  v5 = (PVOID *)PsLoadedModuleList;
  if ( PsLoadedModuleList )
  {
    while ( v5 != &PsLoadedModuleList )
    {
      v6 = v5;
      v5 = (PVOID *)*v5;
      v7 = v6[6];
      if ( a1 >= (unsigned __int64)v7 && a1 < (unsigned __int64)v7 + *((unsigned int *)v6 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v6 + 11));
        goto LABEL_8;
      }
    }
  }
  v3 = -1073741275;
LABEL_8:
  MmUnlockLoadedModuleListShared(v9);
  return v3;
}
