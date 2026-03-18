/*
 * XREFs of xxxGetControlColor @ 0x1C0152424
 * Callers:
 *     xxxPaintRect @ 0x1C00C1B34 (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1C014C034 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1C01F3BD0 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(struct tagWND *a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi

  v8 = 0LL;
  if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
  {
    v9 = xxxSendMessage((ULONG_PTR)a1);
    v10 = v9;
    if ( !v9 || !(unsigned int)GreValidateServerHandle(v9, 16LL) )
    {
      if ( a2 )
        v8 = *a2;
      return xxxDefWindowProc(a1, a4, a3, v8);
    }
    return v10;
  }
  else
  {
    if ( a2 )
      v8 = *a2;
    return xxxDefWindowProc(a1, a4, a3, v8);
  }
}
