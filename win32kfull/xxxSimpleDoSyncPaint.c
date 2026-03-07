__int64 __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // ebx
  int v5; // ebp
  int v6; // r12d
  _DWORD *v7; // rax
  int v8; // r14d
  int v9; // ecx
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int v13; // r15d
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // ebp
  __int64 v17; // rbx
  void *v18; // rax
  HRGN NCUpdateRgn; // rax
  HRGN v20; // rsi

  result = GetStyleWindow(a1, 2818LL);
  if ( result )
    return result;
  v3 = *((_QWORD *)a1 + 5);
  v4 = *(_DWORD *)(v3 + 28);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v3 + 232);
  *(_BYTE *)(v3 + 18) &= ~0x40u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v7 = (_DWORD *)*((_QWORD *)a1 + 5);
    v8 = v7[7];
    v9 = v7[6];
    v10 = v7[58];
    v11 = v5 ^ v9;
    v12 = v6 ^ v10;
    v13 = v4 ^ v8;
    if ( v4 == v8 )
    {
      if ( v11 )
        goto LABEL_12;
      if ( !v12 )
        goto LABEL_6;
    }
    if ( (v13 & 0xB1CF0000) != 0 )
    {
      v16 = -16;
      goto LABEL_16;
    }
LABEL_12:
    if ( (v11 & 0x4E27A9) != 0 )
    {
      v16 = -20;
      v8 = v9;
    }
    else
    {
      if ( (v12 & 0x12C0) == 0 )
        goto LABEL_17;
      v16 = -268435456;
      v8 = v10;
    }
LABEL_16:
    DirtyVisRgnTrackers(a1);
    v17 = *(_QWORD *)a1;
    v18 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v18, v17, v16, v8);
LABEL_17:
    if ( (v11 & 0x200A0381) != 0 || (v13 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1LL);
  }
LABEL_6:
  v14 = *((_QWORD *)a1 + 5);
  result = *(unsigned __int8 *)(v14 + 17);
  v15 = (*(unsigned __int8 *)(v14 + 17) >> 2) & 2 | 1;
  if ( (result & 2) == 0 )
    v15 = (*(unsigned __int8 *)(v14 + 17) >> 2) & 2;
  if ( v15 )
  {
    if ( (*(_BYTE *)(v14 + 31) & 0x10) != 0 )
    {
      result = gptiCurrent;
      if ( !*(_QWORD *)(v14 + 136) )
      {
        SetOrClrWF(0LL, a1, 258LL, 1LL);
        result = SetOrClrWF(0LL, a1, 260LL, 1LL);
        LOBYTE(v15) = v15 & 0xFE;
      }
      if ( *((_QWORD *)a1 + 2) == gptiCurrent )
      {
        NCUpdateRgn = GetNCUpdateRgn(a1, 1);
        v20 = NCUpdateRgn;
        if ( (v15 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
          xxxSendNCPaint(a1, NCUpdateRgn);
        if ( (v15 & 1) != 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
          {
            DeleteMaybeSpecialRgn(v20);
            v20 = GetNCUpdateRgn(a1, 0);
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 2) != 0 )
          {
            SetOrClrWF(0LL, a1, 258LL, 1LL);
            SetOrClrWF(0LL, a1, 260LL, 1LL);
            xxxSendEraseBkgnd(a1, 0LL, v20);
          }
        }
        return DeleteMaybeSpecialRgn(v20);
      }
    }
    else
    {
      SetOrClrWF(0LL, a1, 264LL, 1LL);
      SetOrClrWF(0LL, a1, 258LL, 1LL);
      SetOrClrWF(0LL, a1, 1664LL, 1LL);
      return SetOrClrWF(0LL, a1, 260LL, 1LL);
    }
  }
  return result;
}
