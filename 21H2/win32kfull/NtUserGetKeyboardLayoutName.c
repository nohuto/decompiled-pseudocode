/*
 * XREFs of NtUserGetKeyboardLayoutName @ 0x1C0112810
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutName(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-18h] BYREF

  v3 = a1;
  String = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440);
  v6 = 0;
  if ( v5 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_DWORD *)&String.Length = *(_DWORD *)v3;
    String.Buffer = *(PWSTR *)(v3 + 8);
    ProbeForWrite(String.Buffer, String.MaximumLength, 2u);
    if ( (*(_WORD *)(v5 + 42) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v5 + 40), 0x10u, &String);
    }
    else
    {
      if ( String.MaximumLength < 0x12u
        || RtlIntegerToUnicode(*(_DWORD *)(v5 + 112), 0x10u, 0xFFFFFFF8, String.Buffer) < 0 )
      {
        UserSetLastError(87LL, v7);
        goto LABEL_11;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v6 = 1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
