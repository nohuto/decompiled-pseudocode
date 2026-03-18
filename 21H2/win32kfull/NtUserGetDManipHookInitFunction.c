/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C0116350
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v5; // r11d
  __int64 v6; // rcx

  EnterSharedCrit(a1, a2, a3);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  RtlStringCchCopyW((char *)a1, 260LL, (char *)gszModuleDManipHook);
  RtlStringCchCopyW((char *)a2, v5, (char *)L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v6);
  return 1LL;
}
