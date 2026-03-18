/*
 * XREFs of CreateSpb @ 0x1C00C92A0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     SubtractRect @ 0x1C00C1550 (SubtractRect.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C00C9674 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C00DC1F8 (SpbCheck.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C029D748 (GreSaveScreenBits.c)
 */

char __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 DesktopWindow; // rax
  _QWORD *i; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  LONG *v9; // r14
  __int64 *v10; // r12
  __int64 v11; // r8
  struct tagWND *v12; // r9
  struct tagWND *v13; // rdx
  __int64 v14; // rdx
  int v15; // r15d
  int v16; // r13d
  LONG v17; // ebx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v19; // rbp
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int128 v27; // [rsp+70h] [rbp-68h] BYREF
  __int128 v28; // [rsp+80h] [rbp-58h] BYREF

  v4 = a1;
  LODWORD(DesktopWindow) = IsWindowDesktopComposed(a1);
  if ( (_DWORD)DesktopWindow && a2 != 2 )
    return DesktopWindow;
  if ( (a2 & 2) == 0 )
  {
    if ( *((_QWORD *)v4 + 13) )
    {
      DesktopWindow = GetDesktopWindow((__int64)v4);
      if ( v14 != DesktopWindow )
        return DesktopWindow;
    }
  }
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    SpbCheck();
  }
  else
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( i = *(_QWORD **)(gpDispInfo + 24LL); i; i = (_QWORD *)*i )
      GreGetBounds(i[1], 0LL, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  DesktopWindow = Win32AllocPoolWithQuotaZInit(72LL, 1651733333LL);
  v7 = DesktopWindow;
  if ( !DesktopWindow )
    return DesktopWindow;
  v8 = Win32AllocPoolNonPagedZInit(88LL, 1651733333LL);
  *(_QWORD *)(v7 + 64) = v8;
  if ( !v8 )
  {
LABEL_42:
    LOBYTE(DesktopWindow) = Win32FreePool(v7);
    return DesktopWindow;
  }
  v9 = (LONG *)(v7 + 24);
  v10 = (__int64 *)(v7 + 8);
  *(_QWORD *)(v7 + 8) = 0LL;
  *(_OWORD *)(v7 + 24) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 88LL);
  v27 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)(v7 + 24), (int *)(v7 + 24), (int *)&v27) )
  {
LABEL_41:
    Win32FreePool(*(_QWORD *)(v7 + 64));
    goto LABEL_42;
  }
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_DWORD *)(v7 + 48) = a2;
  *(_QWORD *)&v27 = v7 + 8;
  *((_QWORD *)&v27 + 1) = v4;
  HMAssignmentLock(&v27, 0LL);
  if ( (a2 & 2) == 0 )
  {
    v28 = *(_OWORD *)v9;
    if ( !*(_DWORD *)(gpsi + 2220LL) )
    {
      v21 = MonitorFromRect((struct tagRECT *)(v7 + 24), 1u, 0);
      v27 = 0LL;
      v22 = v21;
      if ( SubtractRect((__int64)&v27, (int *)(v7 + 24), (int *)(*(_QWORD *)(v21 + 40) + 28LL)) )
      {
        if ( (unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), &v27) )
          goto LABEL_38;
      }
      if ( !(unsigned int)IntersectRect((_DWORD *)(v7 + 24), (int *)(v7 + 24), (int *)(*(_QWORD *)(v22 + 40) + 28LL))
        || v22 != *(_QWORD *)(gpDispInfo + 96LL) )
      {
        goto LABEL_38;
      }
    }
    if ( *(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL)
      && (v24 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, &v28), (*(_QWORD *)(v7 + 56) = v24) != 0LL) )
    {
      *(_DWORD *)(v7 + 48) |= 1u;
    }
    else
    {
      v15 = *(_DWORD *)(v7 + 32) - *v9;
      v16 = *(_DWORD *)(v7 + 36) - *(_DWORD *)(v7 + 28);
      v17 = *v9 & 7;
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v15 + v17, v16, 0, 0LL, 0LL);
      *(_QWORD *)(v7 + 16) = CompatibleBitmapInternal;
      if ( !CompatibleBitmapInternal
        || (v19 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal)) == 0
        || (v20 = NtGdiBitBltInternal(ghdcMem, v17, 0, v15, v16, a3, *v9, *(_DWORD *)(v7 + 28), 13369344, 0, 0),
            GreSelectBitmap(ghdcMem, v19),
            !v20) )
      {
LABEL_38:
        v23 = *(_QWORD *)(v7 + 16);
        if ( v23 )
          GreDeleteObject(v23);
        HMAssignmentUnlock(v7 + 8);
        goto LABEL_41;
      }
      GreSetBitmapOwner(*(_QWORD *)(v7 + 16), 0LL);
    }
    SetOrClrWF(1, v4, 0x80u, 1);
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
  }
  *(_QWORD *)v7 = *(_QWORD *)(gpDispInfo + 32LL);
  *(_QWORD *)(gpDispInfo + 32LL) = v7;
  SetRectRgnIndirect(ghrgnSPB2, v7 + 24);
  v11 = *(_QWORD *)(*(_QWORD *)(*v10 + 40) + 168LL);
  if ( !v11 || (LODWORD(DesktopWindow) = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v11, 1LL), (_DWORD)DesktopWindow) )
  {
    LOBYTE(DesktopWindow) = IsDesktopWindow(*v10);
    if ( (_DWORD)DesktopWindow || (DesktopWindow = *((_QWORD *)v12 + 5), (*(_BYTE *)(DesktopWindow + 26) & 8) == 0) )
    {
      v13 = (struct tagWND *)*((_QWORD *)v12 + 13);
      if ( !v13 || (LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v7, v13, 0), (_DWORD)DesktopWindow) )
      {
        while ( v4 )
        {
          LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v7, v4, 1);
          if ( !(_DWORD)DesktopWindow )
            break;
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        }
      }
    }
    else
    {
      LOBYTE(DesktopWindow) = SpbTransfer((struct tagSPB *)v7, v12, 1);
    }
  }
  return DesktopWindow;
}
