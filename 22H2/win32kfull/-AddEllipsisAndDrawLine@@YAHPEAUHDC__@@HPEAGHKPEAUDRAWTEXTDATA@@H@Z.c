/*
 * XREFs of ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025DCE0
 * Callers:
 *     DrawTextExWorker @ 0x1C025E630 (DrawTextExWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025DF14 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C025E4AC (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(
        HDC a1,
        int a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  HDC v6; // rbx
  unsigned __int16 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int16 *v10; // r14
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // [rsp+30h] [rbp-D0h]
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  HDC v18; // [rsp+50h] [rbp-B0h]
  __int128 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  unsigned __int16 v21; // [rsp+70h] [rbp-90h] BYREF

  v18 = a1;
  v19 = 0LL;
  v20 = 0LL;
  v6 = a1;
  v17 = a2;
  v8 = 0LL;
  v16 = a4;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (a5 & 0x8000) != 0 && (unsigned int)NeedsEndEllipsis(v6, a3, &v16, a6, a5, a6, v15) )
  {
    v9 = v16;
    if ( v16 + 4 > 128 )
    {
      result = UserRtlAllocMem((unsigned int)(2 * (v16 + 4)));
      v8 = (unsigned __int16 *)result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, &v19, (__int64)Win32FreePool);
      v10 = v8;
    }
    else
    {
      v10 = &v21;
    }
    v12 = v9;
    memmove(v10, a3, 2 * v9);
    v13 = v9 + 3;
    *(_QWORD *)&v10[v12] = 0x2E002E002ELL;
    a3 = v10;
    v6 = v18;
    v16 = v13;
  }
  else
  {
    v13 = v16;
  }
  DT_DrawJustifiedLine(v6, v17, a3, v13, a5, a6, v15);
  if ( v8 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v19;
    UserRtlFreeMem(v8);
    return (unsigned int)v16;
  }
  return v13;
}
