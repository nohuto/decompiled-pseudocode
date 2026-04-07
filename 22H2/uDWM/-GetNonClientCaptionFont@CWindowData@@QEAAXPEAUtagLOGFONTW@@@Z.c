/*
 * XREFs of ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x18003DF48
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023290 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::GetNonClientCaptionFont(CWindowData *this, struct tagLOGFONTW *a2)
{
  CDesktopManager *v2; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  double v8; // xmm6_8
  double v9; // xmm6_8

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = *((_OWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  *(_OWORD *)&a2->lfHeight = *((_OWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v5 = *((_OWORD *)v2 + 24);
  *(_OWORD *)&a2->lfWeight = v4;
  v6 = *((_OWORD *)v2 + 25);
  *(_OWORD *)&a2->lfFaceName[2] = v5;
  v7 = *((_OWORD *)v2 + 26);
  *(_OWORD *)&a2->lfFaceName[10] = v6;
  *(_QWORD *)&v6 = *((_QWORD *)v2 + 54);
  LODWORD(v2) = *((_DWORD *)v2 + 110);
  *(_OWORD *)&a2->lfFaceName[18] = v7;
  *(_QWORD *)&a2->lfFaceName[26] = v6;
  *(_DWORD *)&a2->lfFaceName[30] = (_DWORD)v2;
  v8 = (double)*((int *)this + 81);
  v9 = v8 / (double)(int)GetDpiForSystem();
  *(double *)&v7 = (double)a2->lfWidth * v9;
  a2->lfHeight = (int)((double)a2->lfHeight * v9);
  a2->lfWidth = (int)*(double *)&v7;
}
