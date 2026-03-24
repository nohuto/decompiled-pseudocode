/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C0201DC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _SetDisplayMapping @ 0x1C01EF564 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(unsigned __int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+44h] [rbp+1Ch]
  char v15; // [rsp+48h] [rbp+20h] BYREF

  v14 = -1;
  v13 = 0x2000;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  v4 = 0;
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, &v13) )
  {
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 10LL);
LABEL_3:
    v7 = 5LL;
LABEL_4:
    UserSetLastError(v7, v5, v6);
    goto LABEL_5;
  }
  v10 = HMValidateHandle(a1, 0x13u);
  v11 = v10;
  if ( !v10 || (*(_DWORD *)(v10 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6LL, v5, v6);
    v7 = 6LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v10 + 184) & 0x2000) != 0 )
  {
    UserSetLastError(5LL, v5, v6);
    goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 480) + 24LL) - 6) <= 1 )
    goto LABEL_3;
  v12 = ValidateHmonitor(a2);
  if ( v12 )
  {
    v4 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v11 + 1352)) != v12 )
      v4 = SetDisplayMapping(*(_QWORD *)(v11 + 480), v12);
    *(_DWORD *)(v11 + 1360) = 1;
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
