__int64 __fastcall NtUserGetKeyboardLayoutName(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // ebx
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-18h] BYREF

  v3 = a1;
  String = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v6 = *((_QWORD *)PtiCurrentShared(v4) + 55);
  v7 = 0;
  if ( v6 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_DWORD *)&String.Length = *(_DWORD *)v3;
    String.Buffer = *(PWSTR *)(v3 + 8);
    ProbeForWrite(String.Buffer, String.MaximumLength, 2u);
    if ( (*(_WORD *)(v6 + 42) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v6 + 40), 0x10u, &String);
    }
    else
    {
      if ( String.MaximumLength < 0x12u
        || RtlIntegerToUnicode(*(_DWORD *)(v6 + 112), 0x10u, 0xFFFFFFF8, String.Buffer) < 0 )
      {
        UserSetLastError(87);
        goto LABEL_11;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v7 = 1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
