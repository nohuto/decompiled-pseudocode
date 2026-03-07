HWND __fastcall xxxWindowHitTest2(struct tagWND *a1, struct tagPOINT a2, int *a3, unsigned int a4)
{
  struct tagWND *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  HWND v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v18; // rax
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]
  struct tagPOINT v21; // [rsp+88h] [rbp+10h] BYREF

  v21 = a2;
  v20 = 0LL;
  v7 = a1;
  v19 = 0LL;
  if ( !a1
    || !(unsigned int)IsCompositionInputWindow(a1) && (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0
    || !(unsigned int)IsCompositionInputWindow(v7) && !PtInRect((_DWORD *)(*((_QWORD *)v7 + 5) + 88LL), *(_QWORD *)&a2)
    || tagWND::PtOutsideClipRgnOrMaxClip(v7, &v21)
    || (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
  {
    return 0LL;
  }
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v7) && (a4 & 1) != 0 )
  {
    v14 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v14 + 31) & 0xC0) != 0x40 )
    {
      v15 = -2;
      goto LABEL_16;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow(v7) )
  {
    v9 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), *(_QWORD *)&a2) )
    {
      ThreadLock(*((_QWORD *)v7 + 14), &v19);
      v10 = xxxWindowHitTest(*((struct tagWND **)v7 + 14), a2, a3, a4);
      ThreadUnlock1(v12, v11, v13);
      if ( v10 )
        return v10;
    }
  }
  LODWORD(v14) = IsCompositionInputWindow(v7);
  if ( (_DWORD)v14 || (LODWORD(v14) = gptiCurrent, *((_QWORD *)v7 + 2) != gptiCurrent) )
  {
    v15 = 1;
    goto LABEL_16;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v14) = xxxSendTransformableMessageTimeout(
                   v7,
                   0x84u,
                   0LL,
                   (__int128 *)(LOWORD(v21.x) | (LOWORD(v21.y) << 16)),
                   0,
                   0,
                   0LL,
                   1,
                   0);
  v15 = v14;
  if ( (_DWORD)v14 == -1 )
    return 0LL;
LABEL_16:
  if ( a3 )
    *a3 = v15;
  v16 = *((_QWORD *)v7 + 5);
  LOBYTE(v14) = ~*(_BYTE *)(v16 + 26);
  if ( v15 == (((unsigned int)v14 >> 6) & 1 | 0x10) && (*(_BYTE *)(v16 + 30) & 4) == 0 )
  {
    v18 = SizeBoxHwnd(v7, v16, v8);
    if ( v18 )
      v7 = (struct tagWND *)v18;
  }
  return *(HWND *)v7;
}
