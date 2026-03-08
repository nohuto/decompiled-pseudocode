/*
 * XREFs of _ScrollDC @ 0x1C0231974
 * Callers:
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CA94C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     NtUserScrollDC @ 0x1C01DB1B0 (NtUserScrollDC.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000B2CC (SpbCheckRect.c)
 *     UnionRect @ 0x1C00DD06C (UnionRect.c)
 *     FastWindowFromDC @ 0x1C01BECEC (FastWindowFromDC.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0230DA0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 */

_BOOL8 __fastcall ScrollDC(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        HRGN a6,
        struct tagRECT *a7)
{
  HRGN v8; // rdi
  struct tagWND *v12; // rax
  struct tagWND *v13; // rbx
  BOOL v14; // r14d
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r9d
  struct tagRECT v18; // xmm0
  int v19; // eax
  int v21[4]; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-10h] BYREF

  v8 = 0LL;
  v12 = (struct tagWND *)FastWindowFromDC((__int64)a1);
  v13 = v12;
  if ( v12 )
  {
    v8 = *(HRGN *)(*((_QWORD *)v12 + 5) + 136LL);
    if ( v8 == (HRGN)1 )
      v8 = 0LL;
  }
  v14 = InternalScrollDC(v12, a1, a2, a3, a4, a5, v8, a6, a7, 1) != 0;
  GreLockVisRgnSharedOrExclusive(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v13 && *(_QWORD *)(gpDispInfo + 32LL) )
  {
    v15 = *((_QWORD *)v13 + 5);
    if ( a4 )
    {
      v16 = *(_DWORD *)(v15 + 104);
      v17 = *(_DWORD *)(v15 + 108);
      v18 = *a4;
      v19 = _mm_cvtsi128_si32(*(__m128i *)a4);
      v21[2] = v16 + *(_QWORD *)&a4->right;
      v21[3] = v17 + v18.bottom;
      v21[0] = v16 + v19;
      v21[1] = v17 + v18.top;
      v22.left = a2 + v16 + v19;
      v22.right = v16 + v18.right + a2;
      v22.bottom = v17 + v18.bottom + a3;
      v22.top = v17 + v18.top + a3;
      UnionRect(&v22, &v22.left, v21);
    }
    else
    {
      v22 = *(struct tagRECT *)(v15 + 104);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    SpbCheckRect(v13, &v22, 0);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v14;
}
