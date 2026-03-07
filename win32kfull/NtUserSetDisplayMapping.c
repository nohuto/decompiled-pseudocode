__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+48h] [rbp+20h] BYREF
  int v16; // [rsp+4Ch] [rbp+24h]

  v16 = -1;
  v15 = 0x2000;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  v4 = 0;
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 864LL, &v15) )
  {
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 10LL);
LABEL_3:
    v5 = 5;
LABEL_4:
    UserSetLastError(v5);
    goto LABEL_5;
  }
  v8 = HMValidateHandle(a1, 0x13u);
  v12 = v8;
  if ( !v8 || (*(_DWORD *)(v8 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6);
    v5 = 6;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v8 + 184) & 0x2000) != 0 )
  {
    UserSetLastError(5);
    goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v8 + 472) + 24LL) - 6) <= 1 )
    goto LABEL_3;
  v13 = ValidateHmonitor(a2, v9, v10, v11);
  if ( v13 )
  {
    v4 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v12 + 1344)) != v13 )
      v4 = SetDisplayMapping(*(_QWORD *)(v12 + 472), v13);
    *(_DWORD *)(v12 + 1352) = 1;
  }
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
