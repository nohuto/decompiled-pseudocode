/*
 * XREFs of xxxGetControlColor @ 0x1C0007990
 * Callers:
 *     xxxPaintRect @ 0x1C00077C0 (xxxPaintRect.c)
 *     NtUserGetControlColor @ 0x1C01D0F30 (NtUserGetControlColor.c)
 *     xxxGetControlBrush @ 0x1C0223CAC (xxxGetControlBrush.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C0020FF0 (xxxDefWindowProc.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 */

__int64 __fastcall xxxGetControlColor(struct tagWND *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v9 != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    return xxxDefWindowProc(a1);
  v10 = 0LL;
  if ( a2 )
    v10 = *a2;
  v11 = xxxSendMessage(a1, a4, a3, v10);
  v12 = v11;
  if ( !v11 || !(unsigned int)GreValidateServerHandle(v11, 16LL) )
    return xxxDefWindowProc(a1);
  return v12;
}
