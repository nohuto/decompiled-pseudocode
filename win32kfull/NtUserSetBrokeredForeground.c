__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rcx
  int v10; // ecx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  v2 = 0;
  if ( !a1 )
    goto LABEL_17;
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( !v3
    || !IsTopLevelWindow(v3)
    || *(_QWORD *)(v5 + 120)
    || (unsigned int)IsWindowBeingDestroyed(v5)
    || (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x10) != 0
    || (unsigned int)IsMessageOnlyWindow(v6)
    || GetProp(v4, WORD2(WPP_MAIN_CB.SecurityDescriptor), 1u) )
  {
    goto LABEL_17;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 236LL);
  if ( v7 != 14 && v7 != 4 )
  {
    UserSetLastError(5);
LABEL_17:
    v10 = 87;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) || gptiCurrent != *(_QWORD *)(v4 + 16) )
  {
    v10 = 5;
LABEL_18:
    UserSetLastError(v10);
    goto LABEL_13;
  }
  v2 = InternalSetProp(v4, WORD2(WPP_MAIN_CB.SecurityDescriptor), gptiCurrent, 5LL);
LABEL_13:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v8);
  return v2;
}
