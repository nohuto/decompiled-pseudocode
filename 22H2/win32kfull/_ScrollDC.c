/*
 * XREFs of _ScrollDC @ 0x1C00FCB24
 * Callers:
 *     NtUserScrollDC @ 0x1C00FC9B0 (NtUserScrollDC.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F2E90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00715B4 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     FastWindowFromDC @ 0x1C00FCC40 (FastWindowFromDC.c)
 *     UnionRect @ 0x1C0104BAC (UnionRect.c)
 *     SpbCheckRect @ 0x1C021A284 (SpbCheckRect.c)
 */

_BOOL8 __fastcall ScrollDC(
        HDC a1,
        int a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        HRGN a6,
        struct tagRECT *a7)
{
  HRGN v8; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  BOOL v14; // r14d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r9d
  struct tagRECT v19; // xmm0
  int v20; // eax
  _DWORD v21[4]; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-10h] BYREF

  v8 = 0LL;
  v12 = FastWindowFromDC();
  v13 = v12;
  if ( v12 )
  {
    v8 = *(HRGN *)(*(_QWORD *)(v12 + 40) + 136LL);
    if ( v8 == (HRGN)1 )
      v8 = 0LL;
  }
  v14 = InternalScrollDC((struct tagWND *)v12, a1, a2, a3, a4, a5, v8, a6, a7, 1) != 0;
  GreLockVisRgnSharedOrExclusive(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v13 && *(_QWORD *)(gpDispInfo + 32LL) )
  {
    v16 = *(_QWORD *)(v13 + 40);
    if ( a4 )
    {
      v17 = *(_DWORD *)(v16 + 104);
      v18 = *(_DWORD *)(v16 + 108);
      v19 = *a4;
      v20 = _mm_cvtsi128_si32(*(__m128i *)a4);
      v21[2] = v17 + *(_QWORD *)&a4->right;
      v21[3] = v18 + v19.bottom;
      v21[0] = v17 + v20;
      v21[1] = v18 + v19.top;
      v22.left = a2 + v17 + v20;
      v22.right = v17 + v19.right + a2;
      v22.bottom = v18 + v19.bottom + a3;
      v22.top = v18 + v19.top + a3;
      UnionRect(&v22, &v22, v21);
    }
    else
    {
      v22 = *(struct tagRECT *)(v16 + 104);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    SpbCheckRect((struct tagWND *)v13, &v22, 0);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v14;
}
