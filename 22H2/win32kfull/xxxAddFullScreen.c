/*
 * XREFs of xxxAddFullScreen @ 0x1C0122F74
 * Callers:
 *     xxxCheckFullScreen @ 0x1C007C55C (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0122F74 (xxxAddFullScreen.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C003CE78 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     xxxAddFullScreen @ 0x1C0122F74 (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(_QWORD *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v6; // rax
  char v7; // cl
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = (_QWORD *)a1[3];
  if ( !v1 )
    return 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1[5] + 20LL) & 0x40) == 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(1, (__int64)a1, 0x440u, 1);
    if ( ++*(_WORD *)(gpDispInfo + 160LL) == 1 )
    {
      v11 = 0LL;
      v10 = 0LL;
      PushW32ThreadLock((__int64)v1, &v10, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock((__int64)&v10);
      v3 = 1;
    }
    v4 = a1[15];
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 40);
      v7 = *(_BYTE *)(v6 + 31);
      if ( (v7 & 0x40) == 0 && !*(_DWORD *)(v6 + 96) && !*(_DWORD *)(v6 + 88) && (v7 & 0x10) == 0 )
      {
        v12[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v12;
        v12[1] = v4;
        HMLockObject(v4);
        if ( (unsigned int)xxxAddFullScreen(v4) )
          v3 = 1;
        ThreadUnlock1(v9);
      }
    }
  }
  return v3;
}
