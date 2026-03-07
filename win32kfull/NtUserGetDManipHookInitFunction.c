__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v5; // r11d
  __int64 v6; // rcx

  EnterSharedCrit(a1, a2, a3);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  RtlStringCchCopyW(a1, 0x104uLL, &gszModuleDManipHook);
  RtlStringCchCopyW(a2, v5, L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v6);
  return 1LL;
}
