__int64 __fastcall xxxAddFullScreen(__int64 *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = (_QWORD *)a1[3];
  if ( !v1 )
    return 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1[5] + 20) & 0x40) == 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(1, a1, 0x440u, 1);
    RemoveSemiMaximizedState((struct tagWND *)a1);
    if ( ++*(_WORD *)(gpDispInfo + 160LL) == 1 )
    {
      v12 = 0LL;
      v11 = 0LL;
      PushW32ThreadLock((__int64)v1, &v11, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow(v1, 1LL);
      PopAndFreeW32ThreadLock((__int64)&v11);
      v3 = 1;
    }
    v5 = a1[15];
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 40);
      v7 = *(_BYTE *)(v6 + 31);
      if ( (v7 & 0x40) == 0 && !*(_DWORD *)(v6 + 96) && !*(_DWORD *)(v6 + 88) && (v7 & 0x10) == 0 )
      {
        v11 = 0LL;
        v12 = 0LL;
        ThreadLock(v5, &v11);
        if ( (unsigned int)xxxAddFullScreen(v5) )
          v3 = 1;
        ThreadUnlock1(v9, v8, v10);
      }
    }
  }
  return v3;
}
