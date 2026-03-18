/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C01FD040
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetDisplayMapping @ 0x1C01E99E8 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v11; // rax
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
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, &v15) )
  {
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 10LL);
LABEL_3:
    v6 = 5LL;
LABEL_4:
    UserSetLastError(v6, v5);
    goto LABEL_5;
  }
  v11 = HMValidateHandle(a1, 0x13u);
  v12 = v11;
  if ( !v11 || (*(_DWORD *)(v11 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6LL, v5);
    v6 = 6LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x2000) != 0 )
  {
    UserSetLastError(5LL, v5);
    goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v11 + 472) + 24LL) - 6) <= 1 )
    goto LABEL_3;
  v13 = ValidateHmonitor(a2, v5);
  if ( v13 )
  {
    v4 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v12 + 1344)) != v13 )
      v4 = SetDisplayMapping(*(_QWORD *)(v12 + 472), v13);
    *(_DWORD *)(v12 + 1352) = 1;
  }
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, v7, v8);
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}
