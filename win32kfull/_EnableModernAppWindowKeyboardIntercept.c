/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C01E4748
 * Callers:
 *     NtUserEnableModernAppWindowKeyboardIntercept @ 0x1C01D0470 (NtUserEnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01AB1FC (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01AB2A8 (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 0;
  DestinationString = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v7 + 424) != v6 || (*(_DWORD *)(v6 + 812) & 0x30) != 0x10 && !(unsigned int)IsImmersiveBroker(v6) )
  {
    v8 = 5;
LABEL_14:
    UserSetLastError(v8);
    return v2;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v12) < 0 || !v12 )
  {
    v8 = 12;
    goto LABEL_14;
  }
  if ( a2 )
    return (int)RegisterModernAppThreadForRawKeyboard(v7);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v7);
}
