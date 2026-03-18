/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1C01CE790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01C4DC0 (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  _DWORD *v7; // rax
  int v8; // ecx

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( !a1 || HIWORD(a1) )
  {
    v8 = 87;
    goto LABEL_12;
  }
  v5 = 1;
  v6 = gptiCurrent;
  if ( (unsigned __int16)a1 == 1 )
  {
    v7 = *(_DWORD **)(gptiCurrent + 1352LL);
    if ( !v7 || (*v7 & 1) == 0 )
    {
LABEL_6:
      v8 = 5;
LABEL_12:
      v5 = 0;
      UserSetLastError(v8);
    }
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x100) != 0
      || (*(_DWORD *)(gptiCurrent + 1276LL) & 0x20) != 0
      || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 72LL) != gptiCurrent )
    {
      goto LABEL_6;
    }
    v5 = xxxDiscardPointerFrameMessagesInternal(a1);
  }
  UserSessionSwitchLeaveCrit(v6, v4, v2, v3);
  return v5;
}
