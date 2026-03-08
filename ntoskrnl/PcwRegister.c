/*
 * XREFs of PcwRegister @ 0x140871390
 * Callers:
 *     ExpRegisterCounterSet @ 0x140855950 (ExpRegisterCounterSet.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x1409FEB78 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwRegister(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  __int64 (__fastcall **ExtensionTable)(PPCW_REGISTRATION *, PPCW_REGISTRATION_INFORMATION); // rax
  NTSTATUS v5; // ebx

  ExtensionTable = (__int64 (__fastcall **)(PPCW_REGISTRATION *, PPCW_REGISTRATION_INFORMATION))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    v5 = (*ExtensionTable)(Registration, Info);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Registration = 0LL;
    return ExpPcwDisabledStatus();
  }
  return v5;
}
