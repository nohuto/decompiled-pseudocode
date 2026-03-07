__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ecx
  HDC DCEx; // rdi
  __int64 v15; // rdx
  int v16; // ecx
  __int64 *DPIMETRICSForDpi; // rax
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v24[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h]
  __int128 v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h]

  v27 = 0LL;
  v4 = *((_QWORD *)a1 + 5);
  v26 = 0LL;
  if ( (*(_BYTE *)(v4 + 16) & 1) == 0 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 21);
  if ( !v7 )
    return 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v24, v7);
  v25 = 0LL;
  v8 = MNGetpItemFromIndex(*(_QWORD *)v24[0], a2);
  if ( !v8 )
  {
LABEL_22:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
    return 0LL;
  }
  ThreadLock(*(_QWORD *)v24[0], &v26);
  xxxMNRecomputeBarIfNeeded(a1, v24);
  v9 = v25;
  if ( !v25 )
    v9 = *(_QWORD *)v24[0];
  if ( (unsigned int)MNGetpItemIndex(v9, v8) == -1 )
  {
LABEL_21:
    ThreadUnlock1(v11, v10, v12);
    goto LABEL_22;
  }
  v11 = *(unsigned int *)(*(_QWORD *)v8 + 4LL);
  if ( a3 )
  {
    if ( (v11 & 1) == 0 )
    {
      v13 = v11 | 0x100;
      goto LABEL_11;
    }
    goto LABEL_21;
  }
  v13 = v11 & 0xFFFFFEFF;
LABEL_11:
  *(_DWORD *)(*(_QWORD *)v8 + 4LL) = v13;
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
  v15 = *((_QWORD *)a1 + 5);
  v16 = *(_DWORD *)(v15 + 288) & 0xF;
  if ( v16 != 3 && (*(_DWORD *)(v15 + 232) & 0x400) != 0 )
    GetWindowDpiLastNotify((__int64)a1);
  DPIMETRICSForDpi = (__int64 *)GetDPIMETRICSForDpi();
  GreSelectFontInternal((__int64)DCEx, *DPIMETRICSForDpi, 1);
  GreGetTextAlign(DCEx);
  if ( *(_QWORD *)(*(_QWORD *)v24[0] + 88LL) && (***(_DWORD ***)(*(_QWORD *)v24[0] + 88LL) & 0x2000) != 0 )
    GreSetTextAlign(DCEx);
  v18 = *((_QWORD *)a1 + 5);
  v19 = *(_DWORD *)(v18 + 288) & 0xF;
  if ( v19 != 3 && (*(_DWORD *)(v18 + 232) & 0x400) != 0 )
    GetWindowDpiLastNotify((__int64)a1);
  xxxDrawMenuItem(DCEx, 0, 0LL);
  GreSetTextAlign(DCEx);
  ThreadUnlock1(v21, v20, v22);
  _ReleaseDC(DCEx);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
  return 1LL;
}
