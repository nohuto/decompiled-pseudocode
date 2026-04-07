/*
 * XREFs of ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800025FC
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800021F0 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180093C98 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180094B70 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800981B0 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CTopLevelWindow::GetActualWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3,
        char a4,
        bool a5)
{
  int v5; // esi
  __int64 v9; // r9
  LONG v10; // r14d
  LONG right; // r10d
  LONG bottom; // r11d
  LONG v13; // r10d
  LONG v14; // r11d
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rbp
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax

  v5 = 0;
  *retstr = *(struct tagRECT *)(*((_QWORD *)this + 91) + 48LL);
  if ( a3 )
    OffsetRect(retstr, -retstr->left, -retstr->top);
  if ( (*((_BYTE *)this + 240) & 4) == 0 || (v9 = 644LL, !a4) )
    v9 = 628LL;
  v10 = *(_DWORD *)((char *)this + v9) + retstr->left;
  right = retstr->right;
  bottom = retstr->bottom;
  retstr->left = v10;
  v13 = right - *(_DWORD *)((char *)this + v9 + 4);
  retstr->right = v13;
  retstr->top += *(_DWORD *)((char *)this + v9 + 8);
  v14 = bottom - *(_DWORD *)((char *)this + v9 + 12);
  retstr->bottom = v14;
  if ( a5 )
  {
    v16 = *((_QWORD *)this + 41);
    if ( v16 )
    {
      v17 = *((_QWORD *)this + 42);
      if ( v17 )
      {
        v18 = *((_QWORD *)this + 44);
        if ( v18 )
        {
          v19 = *((_DWORD *)this + 154) - *(_DWORD *)(v17 + 24) - *(_DWORD *)((char *)this + v9 + 4);
          v20 = *((_DWORD *)this + 156) - *(_DWORD *)(v18 + 28) - *(_DWORD *)((char *)this + v9 + 12);
          v21 = *((_DWORD *)this + 153) - *(_DWORD *)(v16 + 24);
          v22 = 0;
          v23 = v21 - *(_DWORD *)((char *)this + v9);
          if ( v23 >= 0 )
            v22 = v23;
          retstr->left = v10 + v22;
          v24 = 0;
          if ( v19 >= 0 )
            v24 = v19;
          retstr->right = v13 - v24;
          if ( v20 >= 0 )
            v5 = v20;
          retstr->bottom = v14 - v5;
        }
      }
    }
  }
  return retstr;
}
