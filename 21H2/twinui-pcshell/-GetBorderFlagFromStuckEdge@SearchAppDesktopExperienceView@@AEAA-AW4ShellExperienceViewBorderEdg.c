/*
 * XREFs of ?GetBorderFlagFromStuckEdge@SearchAppDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x18008BBE8
 * Callers:
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001AB54 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppDesktopExperienceView::GetBorderFlagFromStuckEdge(__int64 a1, int a2, char a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // ecx
  unsigned int v5; // r11d
  unsigned int v6; // r10d
  unsigned int v7; // r8d
  int v8; // edx
  int v9; // edx

  v3 = 0;
  if ( *(_BYTE *)(a1 + 212) || a3 )
  {
    v4 = 5;
    v6 = 5;
    v5 = 1;
    v7 = 4;
  }
  else
  {
    v4 = 7;
    v5 = 9;
    v6 = 13;
    v7 = 12;
  }
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          return v4;
      }
      else
      {
        return v5;
      }
    }
    else
    {
      return v6;
    }
  }
  else
  {
    return v7;
  }
  return v3;
}
