/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1C01CF7E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01C5F24 (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  _DWORD *v4; // rax
  int v5; // ecx

  EnterCrit(0LL, 0LL);
  if ( !a1 || HIWORD(a1) )
  {
    v5 = 87;
    goto LABEL_12;
  }
  v2 = 1;
  v3 = gptiCurrent;
  if ( (unsigned __int16)a1 == 1 )
  {
    v4 = *(_DWORD **)(gptiCurrent + 1352LL);
    if ( !v4 || (*v4 & 1) == 0 )
    {
LABEL_6:
      v5 = 5;
LABEL_12:
      v2 = 0;
      UserSetLastError(v5);
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
    v2 = xxxDiscardPointerFrameMessagesInternal(a1);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
