/*
 * XREFs of xxxGetControlBrush @ 0x1C0151084
 * Callers:
 *     NtUserGetControlBrush @ 0x1C0150FA0 (NtUserGetControlBrush.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C01583CC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxGetControlColor @ 0x1C015114C (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 ControlColor; // rbx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[2] = 0LL;
  if ( (((*(_BYTE *)(a1[5] + 31LL) & 0xC0) + 0x80) & 0xBF) != 0 )
    v6 = (_QWORD *)a1[13];
  else
    v6 = (_QWORD *)a1[15];
  CurrentThread = KeGetCurrentThread();
  if ( !v6 )
    v6 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = v6;
  if ( v6 )
    HMLockObject(v6);
  ControlColor = xxxGetControlColor(v6, a1, a2, a3);
  ThreadUnlock1(v10);
  return ControlColor;
}
