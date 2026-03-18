/*
 * XREFs of NtUserEnumClipboardFormats @ 0x1C01542C0
 * Callers:
 *     <none>
 * Callees:
 *     _EnumClipboardFormats @ 0x1C01FDA88 (_EnumClipboardFormats.c)
 */

__int64 __fastcall NtUserEnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = EnumClipboardFormats(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
