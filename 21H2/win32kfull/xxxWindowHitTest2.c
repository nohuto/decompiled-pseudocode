/*
 * XREFs of xxxWindowHitTest2 @ 0x1C00D7414
 * Callers:
 *     xxxWindowFromPoint @ 0x1C00C11CC (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C00D735C (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02168F4 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     LayerHitTest @ 0x1C0006BE4 (LayerHitTest.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006B91C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxWindowHitTest @ 0x1C00D735C (xxxWindowHitTest.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00D7618 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     SizeBoxHwnd @ 0x1C025D50C (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(const struct tagWND *a1, unsigned __int64 a2, int *a3, char a4)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v18; // rax
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]
  unsigned int v21; // [rsp+9Ch] [rbp+14h]

  v21 = HIDWORD(a2);
  v20 = 0LL;
  v7 = (unsigned __int64)a1;
  v19 = 0LL;
  if ( !a1 || !(unsigned int)IsCompositionInputWindow(a1) && (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x10) == 0 )
    return 0LL;
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v7)
    && !PtInRect((_DWORD *)(*(_QWORD *)(v7 + 40) + 88LL), a2) )
  {
    return 0LL;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 168LL);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)a2, v21) )
      return 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7) && (a4 & 1) != 0 )
  {
    v14 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v14 + 31) & 0xC0) != 0x40 )
    {
      v15 = -2;
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v7) )
  {
    v9 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), a2) )
    {
      v10 = *(_QWORD *)(v7 + 112);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v19 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v19;
      *((_QWORD *)&v19 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      v12 = xxxWindowHitTest(*(_QWORD *)(v7 + 112));
      ThreadUnlock1(v13);
      if ( v12 )
        return v12;
    }
  }
  LODWORD(v14) = IsCompositionInputWindow((const struct tagWND *)v7);
  if ( (_DWORD)v14 || (LODWORD(v14) = gptiCurrent, *(_QWORD *)(v7 + 16) != gptiCurrent) )
  {
    v15 = 1;
    goto LABEL_18;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v14) = xxxSendTransformableMessageTimeout(
                   v7,
                   0x84u,
                   0LL,
                   (struct _LARGE_STRING *)((unsigned __int16)a2 | ((unsigned __int16)v21 << 16)),
                   0,
                   0,
                   0LL,
                   1,
                   0);
  v15 = v14;
  if ( (_DWORD)v14 == -1 )
    return 0LL;
LABEL_18:
  if ( a3 )
    *a3 = v15;
  v16 = *(_QWORD *)(v7 + 40);
  LOBYTE(v14) = ~*(_BYTE *)(v16 + 26);
  if ( v15 == (((unsigned int)v14 >> 6) & 1 | 0x10) && (*(_BYTE *)(v16 + 30) & 4) == 0 )
  {
    v18 = SizeBoxHwnd(v7);
    if ( v18 )
      v7 = v18;
  }
  return *(_QWORD *)v7;
}
