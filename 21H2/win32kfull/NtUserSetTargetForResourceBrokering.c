/*
 * XREFs of NtUserSetTargetForResourceBrokering @ 0x1C01FE1F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?_SetTargetForCursorApiBrokering@@YAXPEAUtagTHREADINFO@@0@Z @ 0x1C01CF9F0 (-_SetTargetForCursorApiBrokering@@YAXPEAUtagTHREADINFO@@0@Z.c)
 */

__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  EnterCrit(0LL, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
    goto LABEL_2;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) & 0x30) != 0x10 )
  {
LABEL_5:
    v7 = 5LL;
    goto LABEL_3;
  }
  if ( !a2 )
  {
LABEL_13:
    _SetTargetForCursorApiBrokering(gptiCurrent, v6);
    v5 = 1LL;
    goto LABEL_14;
  }
  v9 = PtiFromThreadId(a2);
  v6 = (struct tagTHREADINFO *)v9;
  if ( v9 )
  {
    if ( v9 == gptiCurrent )
    {
      v6 = 0LL;
    }
    else
    {
      v10 = *(_QWORD *)(v9 + 424);
      if ( (*(_DWORD *)(v10 + 820) & 0x30) != 0x10
        || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v10)
        && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**((_QWORD **)v6 + 53)) )
      {
        goto LABEL_5;
      }
    }
    goto LABEL_13;
  }
LABEL_2:
  v7 = 87LL;
LABEL_3:
  UserSetLastError(v7, v4);
LABEL_14:
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
