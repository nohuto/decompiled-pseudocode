/*
 * XREFs of CreateSpb @ 0x1C000D094
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 * Callees:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000D2CC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C0014BB8 (SpbCheck.c)
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     SubtractRect @ 0x1C024E530 (SubtractRect.c)
 *     GreSaveScreenBits @ 0x1C02AA584 (GreSaveScreenBits.c)
 */

void __fastcall CreateSpb(struct tagWND *a1, int a2, __int64 a3)
{
  struct tagWND *v4; // rsi
  _QWORD *i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _DWORD *v8; // r14
  _QWORD *v9; // r12
  __int64 v10; // r8
  struct tagWND *v11; // r9
  __int64 v12; // rdx
  __int64 DesktopWindow; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // r15d
  int v19; // r13d
  unsigned int v20; // ebx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v22; // rbp
  int v23; // ebx
  struct tagWND *v24; // rdx
  _OWORD v26[2]; // [rsp+70h] [rbp-68h] BYREF

  v4 = a1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) && a2 != 2 )
    return;
  if ( (a2 & 2) == 0 )
  {
    v12 = *((_QWORD *)v4 + 13);
    if ( v12 )
    {
      DesktopWindow = GetDesktopWindow(v4, v12);
      if ( v14 != DesktopWindow )
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
  v6 = (_QWORD *)Win32AllocPoolWithQuotaZInit(72LL, 1651733333LL);
  if ( !v6 )
    return;
  v7 = Win32AllocPoolNonPagedZInit(88LL, 1651733333LL);
  v6[8] = v7;
  if ( !v7 )
  {
LABEL_39:
    Win32FreePool(v6);
    return;
  }
  v8 = v6 + 3;
  v9 = v6 + 1;
  v6[1] = 0LL;
  *(_OWORD *)(v6 + 3) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 88LL);
  v26[0] = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect(v6 + 3, v6 + 3, v26) )
  {
LABEL_38:
    Win32FreePool((void *)v6[8]);
    goto LABEL_39;
  }
  v6[5] = 0LL;
  v6[2] = 0LL;
  *((_DWORD *)v6 + 12) = a2;
  *(_QWORD *)&v26[0] = v6 + 1;
  *((_QWORD *)&v26[0] + 1) = v4;
  HMAssignmentLock(v26, 0LL);
  if ( (a2 & 2) == 0 )
  {
    v26[1] = *(_OWORD *)v8;
    if ( *(_DWORD *)(gpsi + 2220LL)
      || ((v15 = MonitorFromRect(v6 + 3, 1LL),
           v26[0] = 0LL,
           v16 = v15,
           !(unsigned int)SubtractRect(v26, v6 + 3, *(_QWORD *)(v15 + 40) + 28LL))
       || !(unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), v26))
      && (unsigned int)IntersectRect(v6 + 3, v6 + 3, *(_QWORD *)(v16 + 40) + 28LL)
      && v16 == *(_QWORD *)(gpDispInfo + 96LL) )
    {
      if ( *(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL) )
      {
        v17 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL);
        v6[7] = v17;
        if ( v17 )
        {
          *((_DWORD *)v6 + 12) |= 1u;
LABEL_34:
          SetOrClrWF(1LL, v4, 128LL, 1LL);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
          goto LABEL_13;
        }
      }
      v18 = *((_DWORD *)v6 + 8) - *v8;
      v19 = *((_DWORD *)v6 + 9) - *((_DWORD *)v6 + 7);
      v20 = *v8 & 7;
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v18 + v20, v19, 0, 0LL, 0LL);
      v6[2] = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v22 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal);
        if ( v22 )
        {
          v23 = NtGdiBitBltInternal(ghdcMem, v20, 0LL, v18, v19, a3, *v8, *((_DWORD *)v6 + 7), 13369344, 0, 0);
          GreSelectBitmap(ghdcMem, v22);
          if ( v23 )
          {
            GreSetBitmapOwner(v6[2], 0LL);
            goto LABEL_34;
          }
        }
      }
    }
    if ( v6[2] )
      GreDeleteObject();
    HMAssignmentUnlock(v6 + 1);
    goto LABEL_38;
  }
LABEL_13:
  *v6 = *(_QWORD *)(gpDispInfo + 32LL);
  *(_QWORD *)(gpDispInfo + 32LL) = v6;
  SetRectRgnIndirect(ghrgnSPB2, v6 + 3);
  v10 = *(_QWORD *)(*(_QWORD *)(*v9 + 40LL) + 168LL);
  if ( !v10 || (unsigned int)GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v10, 1LL) )
  {
    if ( (unsigned int)IsDesktopWindow(*v9) || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 26LL) & 8) == 0 )
    {
      v24 = (struct tagWND *)*((_QWORD *)v11 + 13);
      if ( !v24 || (unsigned int)SpbTransfer((struct tagSPB *)v6, v24, 0) )
      {
        while ( v4 && (unsigned int)SpbTransfer((struct tagSPB *)v6, v4, 1) )
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
      }
    }
    else
    {
      SpbTransfer((struct tagSPB *)v6, v11, 1);
    }
  }
}
