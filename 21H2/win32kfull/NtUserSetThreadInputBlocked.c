/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C0070530
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  _DWORD *Data; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
  if ( a1 != 4096 )
    goto LABEL_11;
  v4 = 0x8000LL;
  v5 = gptiCurrent;
  v6 = *(_DWORD *)(gptiCurrent + 1256LL);
  if ( !a2 )
  {
    if ( (v6 & 0x8000) != 0 )
      goto LABEL_4;
LABEL_11:
    UserSetLastError(87LL);
    v7 = 0LL;
    goto LABEL_7;
  }
  if ( (v6 & 0x8000) != 0 )
    goto LABEL_11;
LABEL_4:
  v7 = 1LL;
  v8 = v6 & 0xFFFF7FFF;
  v9 = v6 | 0x8000u;
  if ( !a2 )
    v9 = v8;
  *(_DWORD *)(gptiCurrent + 1256LL) = v9;
LABEL_7:
  if ( v12 )
  {
    Data = (_DWORD *)GetData(v9, v5, v4);
    --*Data;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
