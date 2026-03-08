/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C021869C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00FE504 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 */

__int64 __fastcall xxxHandleMenuPainting(struct tagWND *a1, __int64 **a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v9; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+30h] [rbp-78h]
  HDC v11[10]; // [rsp+40h] [rbp-68h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  memset_0(v11, 0, 0x48uLL);
  v4 = a2[2];
  if ( !v4 )
    v4 = (__int64 *)**a2;
  ThreadLock(v4, &v9);
  xxxBeginPaint(a1, (__int64 *)v11);
  xxxMenuDraw(v11[0]);
  xxxEndPaint((__int64 *)a1, v11);
  return ThreadUnlock1(v6, v5, v7);
}
