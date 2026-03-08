/*
 * XREFs of ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18022F774
 * Callers:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18022DD74 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18022E784 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x180232AD4 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::GetScrollRange(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // edx

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v4 = a1[35];
        v5 = a1[36];
      }
    }
    else
    {
      v4 = a1[24];
      v5 = a1[27];
    }
  }
  else
  {
    v4 = a1[23];
    v5 = a1[26];
  }
  *a3 = v4;
  *a4 = v5;
}
