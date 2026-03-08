/*
 * XREFs of ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F598
 * Callers:
 *     DrawTextExWorker @ 0x1C024FEBC (DrawTextExWorker.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F7CC (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C024FD48 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(
        __int64 a1,
        int a2,
        char *a3,
        int a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  unsigned int v6; // edi
  HDC v8; // rbx
  char *v9; // rsi
  __int64 v10; // rdi
  char *v11; // r14
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  int v15; // [rsp+30h] [rbp-D0h]
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  __int128 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  char v21; // [rsp+70h] [rbp-90h] BYREF

  v17 = a2;
  v19 = 0LL;
  v20 = 0LL;
  v6 = a4;
  v18 = a1;
  v8 = (HDC)a1;
  v16 = a4;
  v9 = 0LL;
  PtiCurrentShared(a1);
  if ( (a5 & 0x8000) != 0 )
  {
    if ( (unsigned int)NeedsEndEllipsis(v8, (const unsigned __int16 *)a3, &v16, a6, a5, a6, v15) )
    {
      v10 = v16;
      if ( v16 + 4 > 128 )
      {
        result = UserRtlAllocMem((unsigned int)(2 * (v16 + 4)));
        v9 = (char *)result;
        if ( !result )
          return result;
        PushW32ThreadLock(result, &v19, (__int64)Win32FreePool);
        v11 = v9;
      }
      else
      {
        v11 = &v21;
      }
      v13 = 2 * v10;
      memmove(v11, a3, 2 * v10);
      v6 = v10 + 3;
      *(_QWORD *)&v11[v13] = 0x2E002E002ELL;
      a3 = v11;
      v8 = (HDC)v18;
      v16 = v6;
    }
    else
    {
      v6 = v16;
    }
  }
  DT_DrawJustifiedLine(v8, v17, (const unsigned __int16 *)a3, v6, a5, a6, v15);
  if ( v9 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v19;
    UserRtlFreeMem(v9);
    return (unsigned int)v16;
  }
  return v6;
}
