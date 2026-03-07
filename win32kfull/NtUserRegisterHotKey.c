__int64 __fastcall NtUserRegisterHotKey(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  int v8; // ebx
  struct tagWND *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  v8 = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
    goto LABEL_12;
  if ( (a3 & 0xFFFF95F0) != 0 )
  {
    v12 = 1004LL;
    goto LABEL_13;
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_4;
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v12 = 5LL;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v12 = 87LL;
LABEL_13:
    UserSetLastError(v12);
    goto LABEL_7;
  }
LABEL_4:
  if ( !a1 )
  {
    v9 = 0LL;
    goto LABEL_6;
  }
  v9 = (struct tagWND *)ValidateHwnd(a1);
  if ( v9 )
LABEL_6:
    v8 = _RegisterHotKey(v9, 0LL, a2, a3, a4, 0LL);
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
