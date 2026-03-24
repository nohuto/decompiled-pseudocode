/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0235BCC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMenuDraw @ 0x1C0043708 (xxxMenuDraw.c)
 *     xxxEndPaint @ 0x1C0046240 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C007D8F4 (xxxBeginPaint.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall xxxHandleMenuPainting(struct tagWND *a1, __int64 **a2)
{
  __int64 *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+20h] [rbp-88h] BYREF
  HDC v10[10]; // [rsp+40h] [rbp-68h] BYREF

  v9[2] = 0LL;
  memset(v10, 0, 0x48uLL);
  v4 = a2[2];
  if ( !v4 )
    v4 = (__int64 *)**a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v9;
  v9[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxBeginPaint(a1, (__int64)v10);
  v6 = (__int64)a2[2];
  if ( !v6 )
    v6 = **a2;
  xxxMenuDraw(v10[0], v6, (__int64)a1);
  xxxEndPaint(a1, v10);
  return ThreadUnlock1(v7);
}
