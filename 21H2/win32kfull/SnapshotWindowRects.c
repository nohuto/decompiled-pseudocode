/*
 * XREFs of SnapshotWindowRects @ 0x1C01D7988
 * Callers:
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D78AC (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0037374 (IsNonImmersiveBand.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     DesktopWindowFromDesktop @ 0x1C0100060 (DesktopWindowFromDesktop.c)
 */

void *__fastcall SnapshotWindowRects(__int64 a1, _DWORD *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // rbp
  unsigned __int64 *v7; // rdi
  bool v8; // zf
  _QWORD *v9; // rax
  __int64 v10; // rax
  void *v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 Type; // rdx
  __int128 *Prop; // rax
  __int128 v18; // xmm0

  v2 = 0;
  *a2 = 0;
  v4 = DesktopWindowFromDesktop(a1);
  v5 = BuildHwndList(*(struct tagWND **)(v4 + 112), 2, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned __int64 *)((char *)v5 + 32);
    v8 = *((_QWORD *)v5 + 4) == 1LL;
    v9 = (_QWORD *)((char *)v5 + 32);
    if ( v8 )
      goto LABEL_20;
    do
    {
      ++v2;
      ++v9;
    }
    while ( *v9 != 1LL );
    if ( v2 && (v10 = Win32AllocPoolWithQuotaZInit(48LL * v2, 2004054869LL), (v11 = (void *)v10) != 0LL) )
    {
      v12 = *v7;
      if ( *v7 != 1 )
      {
        v13 = v10 + 32;
        do
        {
          v14 = HMValidateHandleNoSecure(v12, 1);
          if ( v14
            && *(char *)(*(_QWORD *)(v14 + 40) + 24LL) >= 0
            && IsNonImmersiveBand(v14)
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL) + 820LL) & 0x30) != 0x10 )
          {
            Type = (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type;
            *(_QWORD *)(v13 + 8) = *v7;
            *(_OWORD *)(v13 - 32) = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
            Prop = (__int128 *)GetProp(v15, Type, 1LL);
            if ( Prop )
            {
              v18 = *Prop;
              *(_DWORD *)v13 |= 1u;
              *(_OWORD *)(v13 - 16) = v18;
            }
            else
            {
              *(_DWORD *)v13 &= ~1u;
            }
            ++*a2;
            v13 += 48LL;
          }
          v12 = *++v7;
        }
        while ( *v7 != 1 );
      }
      if ( *a2 )
        return v11;
      Win32FreePool(v11);
    }
    else
    {
LABEL_20:
      FreeHwndList(v6);
    }
  }
  return 0LL;
}
