/*
 * XREFs of xxxGetControlColor @ 0x1C015114C
 * Callers:
 *     xxxPaintRect @ 0x1C004555C (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1C0151084 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1C01F9330 (NtUserGetControlColor.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C0048580 (xxxDefWindowProc.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 */

__int64 __fastcall xxxGetControlColor(
        unsigned __int64 a1,
        struct _LARGE_STRING **a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  __int64 v8; // rbx
  struct _LARGE_STRING *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi

  v8 = 0LL;
  if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
    v9 = 0LL;
    if ( a2 )
      v9 = *a2;
    v10 = xxxSendMessage(a1, a4, a3, v9);
    v11 = v10;
    if ( !v10 || !(unsigned int)GreValidateServerHandle(v10, 16LL) )
    {
      if ( a2 )
        v8 = (__int64)*a2;
      return xxxDefWindowProc((struct tagWND *)a1, a4, a3, v8);
    }
    return v11;
  }
  else
  {
    if ( a2 )
      v8 = (__int64)*a2;
    return xxxDefWindowProc((struct tagWND *)a1, a4, a3, v8);
  }
}
