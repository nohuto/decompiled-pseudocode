/*
 * XREFs of xxxAddFullScreen @ 0x1C00C9EF4
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C00C9EF4 (xxxAddFullScreen.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C00A5F60 (xxxSetTrayWindow.c)
 *     xxxAddFullScreen @ 0x1C00C9EF4 (xxxAddFullScreen.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C00CBD00 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxAddFullScreen(struct tagWND *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = (_QWORD *)*((_QWORD *)a1 + 3);
  if ( !v1 )
    return 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) == 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(1, a1, 0x440u, 1);
    RemoveSemiMaximizedState(a1);
    if ( ++*(_WORD *)(gpDispInfo + 160LL) == 1 )
    {
      v12 = 0LL;
      v11 = 0LL;
      PushW32ThreadLock((__int64)v1, &v11, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock((__int64)&v11);
      v3 = 1;
    }
    v4 = *((_QWORD *)a1 + 15);
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 40);
      v7 = *(_BYTE *)(v6 + 31);
      if ( (v7 & 0x40) == 0 && !*(_DWORD *)(v6 + 96) && !*(_DWORD *)(v6 + 88) && (v7 & 0x10) == 0 )
      {
        v11 = 0LL;
        v12 = 0LL;
        ThreadLock(v4, (__int64 *)&v11);
        if ( (unsigned int)xxxAddFullScreen(v4) )
          v3 = 1;
        ThreadUnlock1(v9, v8, v10);
      }
    }
  }
  return v3;
}
