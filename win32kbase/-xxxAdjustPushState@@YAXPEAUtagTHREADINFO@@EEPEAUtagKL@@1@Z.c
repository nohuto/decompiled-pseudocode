void __fastcall xxxAdjustPushState(
        struct tagTHREADINFO *a1,
        __int64 a2,
        __int64 a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // eax

  v5 = (unsigned __int8)a3;
  v6 = (unsigned __int8)a2;
  if ( (_BYTE)a2 )
  {
    v12 = (unsigned __int64)(unsigned __int8)a2 >> 2;
    v13 = 1 << (2 * (a2 & 3));
    if ( ((unsigned __int8)v13 & *(_BYTE *)(v12 + SGDGetUserSessionState(a1, a2, a3, a4) + 14056)) != 0
      || ((unsigned __int8)v13 & *(_BYTE *)(SGDGetUserSessionState(2 * (v6 & 3), v9, v10, v11) + v12 + 13992)) != 0
      || ((unsigned __int8)v13 & *(_BYTE *)(*((_QWORD *)a1 + 54) + v12 + 236)) != 0 )
    {
      v14 = InternalMapVirtualKeyEx(v6, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v15 = InternalMapVirtualKeyEx(v6, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v14 )
      {
        if ( !v15 )
          xxxKeyEventEx(
            (unsigned __int16)v6 | 0x8000u,
            (unsigned __int16)v14 | 0x200u,
            0LL,
            0LL,
            0LL,
            0LL,
            0,
            0,
            0LL,
            0LL);
      }
    }
  }
  if ( (_BYTE)v5 )
  {
    v19 = v5 >> 2;
    v20 = 1 << (2 * (v5 & 3));
    if ( ((unsigned __int8)v20 & *(_BYTE *)((v5 >> 2) + SGDGetUserSessionState(a1, a2, a3, a4) + 14056)) != 0
      || ((unsigned __int8)v20 & *(_BYTE *)(SGDGetUserSessionState(2 * (unsigned int)(v5 & 3), v16, v17, v18)
                                          + v19
                                          + 13992)) != 0
      || ((unsigned __int8)v20 & *(_BYTE *)(*((_QWORD *)a1 + 54) + v19 + 236)) != 0 )
    {
      v21 = InternalMapVirtualKeyEx(v5, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v22 = InternalMapVirtualKeyEx(v5, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v21 )
      {
        if ( !v22 )
          xxxKeyEventEx(
            (unsigned __int16)v5 | 0x8000u,
            (unsigned __int16)v21 | 0x200u,
            0LL,
            0LL,
            0LL,
            0LL,
            0,
            0,
            0LL,
            0LL);
      }
    }
  }
}
