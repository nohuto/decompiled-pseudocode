/*
 * XREFs of CreateSpb @ 0x1C01617C0
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C003DD5C (zzzLockWindowUpdate2.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0042270 (_MonitorFromRect.c)
 *     IsDesktopWindow @ 0x1C004C550 (IsDesktopWindow.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     SubtractRect @ 0x1C010AD68 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0219BC0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C021A16C (SpbCheck.c)
 *     GreSaveScreenBits @ 0x1C029E814 (GreSaveScreenBits.c)
 */

void __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  _QWORD *i; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  LONG *v10; // r14
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r15d
  int v16; // r13d
  LONG v17; // ebx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v19; // rbp
  int v20; // ebx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rcx
  struct tagWND *v25; // rdx
  __int128 v27; // [rsp+70h] [rbp-68h] BYREF
  __int128 v28; // [rsp+80h] [rbp-58h] BYREF

  v4 = a1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) && a2 != 2 )
    return;
  if ( (a2 & 2) == 0 )
  {
    if ( *((_QWORD *)v4 + 13) )
    {
      DesktopWindow = GetDesktopWindow((__int64)v4);
      if ( v6 != DesktopWindow )
        return;
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
  v8 = (_QWORD *)Win32AllocPoolWithQuota(72LL, 1651733333LL);
  if ( !v8 )
    return;
  v9 = Win32AllocPoolNonPaged(88LL, 1651733333LL);
  v8[8] = v9;
  if ( !v9 )
  {
LABEL_39:
    Win32FreePool(v8);
    return;
  }
  v10 = (LONG *)(v8 + 3);
  v11 = v8 + 1;
  v8[1] = 0LL;
  *(_OWORD *)(v8 + 3) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 88LL);
  v27 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)v8 + 6, (int *)v8 + 6, (int *)&v27) )
  {
LABEL_38:
    Win32FreePool((void *)v8[8]);
    goto LABEL_39;
  }
  v8[5] = 0LL;
  v8[2] = 0LL;
  *((_DWORD *)v8 + 12) = a2;
  *(_QWORD *)&v27 = v8 + 1;
  *((_QWORD *)&v27 + 1) = v4;
  HMAssignmentLock(&v27);
  if ( (a2 & 2) == 0 )
  {
    v28 = *(_OWORD *)v10;
    if ( *(_DWORD *)(gpsi + 2220LL)
      || ((v12 = MonitorFromRect((struct tagRECT *)(v8 + 3), 1u, 0),
           v27 = 0LL,
           v13 = v12,
           !SubtractRect((__int64)&v27, (int *)v8 + 6, (int *)(*(_QWORD *)(v12 + 40) + 28LL)))
       || !(unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), &v27))
      && (unsigned int)IntersectRect((_DWORD *)v8 + 6, (int *)v8 + 6, (int *)(*(_QWORD *)(v13 + 40) + 28LL))
      && v13 == *(_QWORD *)(gpDispInfo + 96LL) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL) )
      {
        v14 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, &v28);
        v8[7] = v14;
        if ( v14 )
        {
          *((_DWORD *)v8 + 12) |= 1u;
LABEL_29:
          SetOrClrWF(1, (__int64)v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
          goto LABEL_30;
        }
      }
      v15 = *((_DWORD *)v8 + 8) - *v10;
      v16 = *((_DWORD *)v8 + 9) - *((_DWORD *)v8 + 7);
      v17 = *v10 & 7;
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v15 + v17, v16, 0, 0LL, 0LL);
      v8[2] = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v19 = GreSelectBitmap(*(_QWORD *)ghdcMem, CompatibleBitmapInternal);
        if ( v19 )
        {
          v20 = NtGdiBitBltInternal(*(HDC *)ghdcMem, v17, 0, v15, v16, a3, *v10, *((_DWORD *)v8 + 7), 13369344, 0, 0);
          GreSelectBitmap(*(_QWORD *)ghdcMem, v19);
          if ( v20 )
          {
            GreSetBitmapOwner(v8[2], 0LL);
            goto LABEL_29;
          }
        }
      }
    }
    v24 = v8[2];
    if ( v24 )
      GreDeleteObject(v24);
    HMAssignmentUnlock(v8 + 1);
    goto LABEL_38;
  }
LABEL_30:
  *v8 = *(_QWORD *)(gpDispInfo + 32LL);
  *(_QWORD *)(gpDispInfo + 32LL) = v8;
  SetRectRgnIndirect(ghrgnSPB2, v8 + 3);
  v21 = *(_QWORD *)(*(_QWORD *)(*v11 + 40) + 168LL);
  if ( !v21 || (unsigned int)GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v21, 1LL) )
  {
    LOBYTE(v22) = IsDesktopWindow(*v11);
    if ( v22 || (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 26LL) & 8) == 0 )
    {
      v25 = *(struct tagWND **)(v23 + 104);
      if ( !v25 || (unsigned int)SpbTransfer((struct tagSPB *)v8, v25, 0) )
      {
        while ( v4 && (unsigned int)SpbTransfer((struct tagSPB *)v8, v4, 1) )
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
      }
    }
    else
    {
      SpbTransfer((struct tagSPB *)v8, (struct tagWND *)v23, 1);
    }
  }
}
