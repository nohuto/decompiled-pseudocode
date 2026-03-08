/*
 * XREFs of ?UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x1801C9FF8
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004A570 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall CSuperWetInkManager::UnregisterSuperWetInkVisual(CSuperWetInkManager *this, struct CVisual *a2)
{
  struct CVisual **v4; // rcx
  struct CVisual **v5; // r8
  struct CVisual **v6; // rdx

  v4 = (struct CVisual **)*((_QWORD *)this + 2);
  v5 = (struct CVisual **)*((_QWORD *)this + 3);
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v5 )
        return;
    }
    memmove_0(v4, v6, (char *)v5 - (char *)v6);
    *((_QWORD *)this + 3) -= 8LL;
  }
}
