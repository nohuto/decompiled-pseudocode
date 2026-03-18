/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C00485A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0048AB8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // r11d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterSharedCrit();
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  RtlStringCchCopyW(a1, 0x104uLL, &gszModuleDManipHook);
  RtlStringCchCopyW(a2, v4, L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return 1LL;
}
