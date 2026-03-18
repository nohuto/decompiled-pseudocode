/*
 * XREFs of NtUserRegisterHotKey @ 0x1C009DDD0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C009E114 (_RegisterHotKey.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserRegisterHotKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  struct tagWND *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
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
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v12 = 5LL;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v12 = 87LL;
LABEL_13:
    UserSetLastError(v12, v7);
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
  {
LABEL_6:
    LODWORD(BugCheckParameter2) = a4;
    v8 = RegisterHotKey(v9, BugCheckParameter2);
  }
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
