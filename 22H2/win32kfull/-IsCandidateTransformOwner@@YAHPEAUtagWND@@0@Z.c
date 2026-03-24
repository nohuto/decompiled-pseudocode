/*
 * XREFs of ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C0104920
 * Callers:
 *     GetInheritedMonitor @ 0x1C006C0E4 (GetInheritedMonitor.c)
 * Callees:
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     IsTitleWindow @ 0x1C0104ABC (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C0104B10 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     UnionRect @ 0x1C0104BAC (UnionRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsCandidateTransformOwner(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  int v5; // r14d
  int v6; // ebp
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v10; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  struct tagRECT *v15; // rdi
  __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a2 + 5);
  v19 = 0LL;
  LOBYTE(v2) = ~*(_BYTE *)(v3 + 27);
  v5 = *(_BYTE *)(v3 + 27) & 8;
  v6 = (*(_BYTE *)(v3 + 26) >> 3) & (unsigned __int8)(v2 >> 5) & 1;
  if ( !(unsigned int)IsTitleWindow(a1, 1LL)
    || *(_QWORD *)(v7 + 432) != *(_QWORD *)(v8 + 432) && *(_QWORD *)(v7 + 424) != *(_QWORD *)(v8 + 424) )
  {
    return 0LL;
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = *(_DWORD *)(v3 + 288);
  v12 = *(_DWORD *)(v10 + 288);
  if ( (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)(v12 >> 8)) & 0x1FF) != 0 )
    return 0LL;
  v13 = (v12 & 0xF) == 2 && (v12 & 0x20000000) != 0;
  v14 = (v11 & 0xF) == 2 && (v11 & 0x20000000) != 0;
  if ( v13 != v14 )
    return 0LL;
  if ( !v5 && !v6 )
    return 1LL;
  v15 = (struct tagRECT *)(v10 + 88);
  v16 = v3 + 88;
  v17 = IsAdjacentRect((const struct tagRECT *)v16, v15);
  if ( v5 )
  {
    if ( !v17 && !(unsigned int)IntersectRect(&v19, (int *)v16, &v15->left) )
      return 0LL;
  }
  if ( !v6 || v17 )
    return 1LL;
  if ( !(unsigned int)UnionRect(&v19, v16, v15) )
    return 0LL;
  v18 = v19 - *(_QWORD *)v16;
  if ( (_QWORD)v19 == *(_QWORD *)v16 )
    v18 = *((_QWORD *)&v19 + 1) - *(_QWORD *)(v16 + 8);
  return !v18;
}
