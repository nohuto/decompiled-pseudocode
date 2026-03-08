/*
 * XREFs of xxxGetControlColor @ 0x1C0007848
 * Callers:
 *     xxxPaintRect @ 0x1C0007680 (xxxPaintRect.c)
 *     NtUserGetControlColor @ 0x1C01D1F80 (NtUserGetControlColor.c)
 *     xxxGetControlBrush @ 0x1C02269BC (xxxGetControlBrush.c)
 * Callees:
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C00A66F0 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(struct tagWND *a1, __int64 *a2, HWND a3, unsigned int a4)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v9 = 0LL;
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v10 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
  {
    v11 = 0LL;
    if ( a2 )
      v11 = *a2;
    v12 = xxxSendMessage(a1, a4, a3, v11);
    v13 = v12;
    if ( !v12 || !(unsigned int)GreValidateServerHandle(v12, 16LL) )
    {
      if ( a2 )
        v9 = *a2;
      return xxxDefWindowProc(a1, a4, a3, v9);
    }
    return v13;
  }
  else
  {
    if ( a2 )
      v9 = *a2;
    return xxxDefWindowProc(a1, a4, a3, v9);
  }
}
