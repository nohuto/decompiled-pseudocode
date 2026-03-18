/*
 * XREFs of xxxGetControlBrush @ 0x1C014C034
 * Callers:
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00C5CF8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     NtUserGetControlBrush @ 0x1C014BF50 (NtUserGetControlBrush.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxGetControlColor @ 0x1C0152424 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(struct tagWND *a1)
{
  struct tagWND *v1; // rdi
  __int64 ControlColor; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  if ( (((*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) + 0x80) & 0xBF) != 0 )
    v1 = (struct tagWND *)*((_QWORD *)a1 + 13);
  else
    v1 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( !v1 )
    v1 = a1;
  ThreadLock((__int64)v1, (__int64 *)&v7);
  ControlColor = xxxGetControlColor(v1);
  ThreadUnlock1(v4, v3, v5);
  return ControlColor;
}
