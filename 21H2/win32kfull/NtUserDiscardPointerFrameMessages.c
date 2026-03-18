/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1C01F2690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01EAEBC (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  if ( !a1 || HIWORD(a1) )
  {
    v5 = 87LL;
    goto LABEL_12;
  }
  v2 = 1;
  v3 = gptiCurrent;
  if ( (unsigned __int16)a1 == 1 )
  {
    v4 = *(_DWORD **)(gptiCurrent + 1312LL);
    if ( !v4 || (*v4 & 1) == 0 )
    {
LABEL_6:
      v5 = 5LL;
LABEL_12:
      v2 = 0;
      UserSetLastError(v5, 0LL);
    }
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x100) != 0
      || (*(_DWORD *)(gptiCurrent + 1260LL) & 0x20) != 0
      || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) != gptiCurrent )
    {
      goto LABEL_6;
    }
    v2 = xxxDiscardPointerFrameMessagesInternal(a1);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
