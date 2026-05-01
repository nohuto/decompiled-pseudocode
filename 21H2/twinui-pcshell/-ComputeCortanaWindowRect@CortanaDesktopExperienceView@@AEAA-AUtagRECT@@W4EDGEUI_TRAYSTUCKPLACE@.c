/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x18027A848
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x18027A398 (-CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@XZ.c)
 */

LONG *__fastcall CortanaDesktopExperienceView::ComputeCortanaWindowRect(
        CortanaDesktopExperienceView *a1,
        LONG *a2,
        int a3,
        int a4,
        int a5,
        CortanaDesktopExperienceView *a6,
        char a7)
{
  int v9; // r8d
  int v10; // eax
  int v11; // r9d
  LANGID v12; // ax
  LANGID v13; // ax
  int v14; // edx
  int v15; // eax
  LANGID v16; // ax
  LONG v17; // eax
  CortanaDesktopExperienceView *v18; // rax
  LONG v19; // eax
  LANGID v20; // ax
  bool v21; // zf
  LONG v22; // ecx
  CortanaDesktopExperienceView *v23; // rcx
  LONG v24; // eax
  LANGID ThreadUILanguage; // ax
  LONG right; // ecx
  LONG left; // ecx
  LANGID v28; // ax
  LONG *result; // rax
  struct tagRECT v30; // [rsp+20h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v23 = a6;
    v24 = *((_DWORD *)a6 + 2);
    goto LABEL_36;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    if ( *((_DWORD *)a1 + 62) == 2 )
    {
      CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(a1, &v30);
      ThreadUILanguage = GetThreadUILanguage();
      if ( !(unsigned int)IsBiDiLocale(ThreadUILanguage) )
      {
        left = v30.left;
        goto LABEL_34;
      }
      right = v30.right;
    }
    else
    {
      v28 = GetThreadUILanguage();
      if ( !(unsigned int)IsBiDiLocale(v28) )
      {
        left = *(_DWORD *)a6;
        goto LABEL_34;
      }
      right = *((_DWORD *)a6 + 2);
    }
    left = right - a4;
LABEL_34:
    v19 = *((_DWORD *)a6 + 3);
    *a2 = left;
    goto LABEL_37;
  }
  if ( v9 == 1 )
  {
    v23 = a6;
    v24 = *(_DWORD *)a6 - a4;
LABEL_36:
    *a2 = v24;
    v19 = *((_DWORD *)v23 + 1);
    goto LABEL_37;
  }
  v10 = *((_DWORD *)a1 + 62);
  if ( v10 == 1 )
  {
    CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(a1, &v30);
    *a2 = v30.left + (v30.right - v30.left) / 2 - v11 / 2;
    v12 = GetThreadUILanguage();
    if ( !(unsigned int)IsBiDiLocale(v12) && *a2 < *(_DWORD *)a6 )
      *a2 = *(_DWORD *)a6;
    v13 = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(v13) )
    {
      v14 = *((_DWORD *)a6 + 2);
      if ( a4 + *a2 > v14 )
        *a2 = v14 - a4;
    }
    v15 = *((_DWORD *)a6 + 1);
  }
  else
  {
    if ( v10 == 2 )
    {
      CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(a1, &v30);
      v16 = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(v16) )
        v17 = v30.right - a4;
      else
        v17 = v30.left;
      *a2 = v17;
      v18 = a6;
    }
    else
    {
      v20 = GetThreadUILanguage();
      v21 = (unsigned int)IsBiDiLocale(v20) == 0;
      v18 = a6;
      if ( v21 )
        v22 = *(_DWORD *)a6;
      else
        v22 = *((_DWORD *)a6 + 2) - a4;
      *a2 = v22;
    }
    if ( a7 )
      v15 = *((_DWORD *)v18 + 3);
    else
      v15 = *((_DWORD *)v18 + 1);
  }
  v19 = v15 - a5;
LABEL_37:
  a2[1] = v19;
  result = a2;
  a2[2] = a4 + *a2;
  a2[3] = a5 + a2[1];
  return result;
}
