/*
 * XREFs of ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C0063110
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C0062F9C (xxxDW_SendDestroyMessages.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     zzzDestroyCaret @ 0x1C00C32AC (zzzDestroyCaret.c)
 */

void __fastcall xxxMoveFocusAway(const struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      v4 = *(_QWORD *)(gptiCurrent + 416LL);
      v5 = *((_QWORD *)a1 + 13);
      v9[2] = 0LL;
      v9[0] = v4;
      *(_QWORD *)(gptiCurrent + 416LL) = v9;
      v9[1] = v5;
      if ( v5 )
        HMLockObject(v5);
      xxxSetFocus(*((struct tagWND **)a1 + 13));
      ThreadUnlock1(v7, v6, v8);
    }
    else
    {
      xxxSetFocus(0LL);
    }
  }
  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
    zzzDestroyCaret(a1, a2, a3);
}
