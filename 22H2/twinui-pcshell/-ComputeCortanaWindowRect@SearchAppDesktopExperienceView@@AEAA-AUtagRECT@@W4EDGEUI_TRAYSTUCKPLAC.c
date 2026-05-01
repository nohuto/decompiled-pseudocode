/*
 * XREFs of ?ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1_N@Z @ 0x18001A030
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 */

_DWORD *__fastcall SearchAppDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int *a7,
        char a8)
{
  int v10; // r8d
  LANGID ThreadUILanguage; // ax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // rcx
  int v16; // eax
  LANGID v17; // ax
  int v18; // ecx
  _DWORD *result; // rax

  if ( !a3 )
  {
    v15 = a6;
    v16 = a6[2];
    goto LABEL_19;
  }
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      ThreadUILanguage = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
        v12 = a7[2] - a4;
      else
        v12 = *a7;
      *a2 = v12;
      if ( a8 )
        v13 = a6[3];
      else
        v13 = a6[1];
      v14 = v13 - a5;
      goto LABEL_20;
    }
    v15 = a6;
    v16 = *a6 - a4;
LABEL_19:
    v14 = v15[1];
    *a2 = v16;
    goto LABEL_20;
  }
  v17 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v17) )
    v18 = a7[2] - a4;
  else
    v18 = *a7;
  *a2 = v18;
  if ( a8 )
    v14 = a6[1];
  else
    v14 = a6[3];
LABEL_20:
  a2[1] = v14;
  result = a2;
  a2[2] = a4 + *a2;
  a2[3] = a5 + a2[1];
  return result;
}
