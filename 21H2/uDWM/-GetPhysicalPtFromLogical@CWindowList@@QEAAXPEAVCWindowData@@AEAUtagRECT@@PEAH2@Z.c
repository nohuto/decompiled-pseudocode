/*
 * XREFs of ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x180019FA8
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002AE7C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1800982F8 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 * Callees:
 *     floor_0 @ 0x18005814A (floor_0.c)
 */

void __fastcall CWindowList::GetPhysicalPtFromLogical(
        CWindowList *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        int *a4,
        int *a5)
{
  LONG left; // edi
  LONG top; // esi
  int v9; // eax
  float v10; // xmm7_4
  float v11; // xmm7_4
  float v12; // xmm6_4

  left = a3->left;
  top = a3->top;
  v9 = *((_DWORD *)a2 + 87);
  if ( (v9 & 1) != 0 )
  {
    v11 = (float)*((int *)a2 + 80) / (float)*((int *)a2 + 86);
    if ( v11 != 1.0 )
    {
      left = (int)floor_0((float)((float)left * v11) + 0.5);
      top = (int)floor_0((float)((float)top * v11) + 0.5);
    }
  }
  else if ( (v9 & 2) != 0 )
  {
    v12 = (float)*((int *)a2 + 80) / (float)*((int *)a2 + 81);
    if ( v12 != 1.0 )
    {
      left = (int)floor_0((float)((float)left * v12) + 0.5);
      top = (int)floor_0((float)((float)top * v12) + 0.5);
    }
    left += *((_DWORD *)a2 + 84) - (int)floor_0((float)((float)*((int *)a2 + 82) * v12) + 0.5);
    top += *((_DWORD *)a2 + 85) - (int)floor_0((float)((float)*((int *)a2 + 83) * v12) + 0.5);
  }
  else
  {
    if ( (double)*((int *)a2 + 82) != 0.0 || (double)*((int *)a2 + 83) != 0.0 )
    {
      left -= (int)floor_0((float)*((int *)a2 + 82) + 0.5);
      top -= (int)floor_0((float)*((int *)a2 + 83) + 0.5);
    }
    v10 = *((float *)a2 + 76);
    if ( v10 != 1.0 )
    {
      left = (int)floor_0((float)((float)left * v10) + 0.5);
      top = (int)floor_0((float)((float)top * v10) + 0.5);
    }
    if ( (double)*((int *)a2 + 84) != 0.0 || (double)*((int *)a2 + 85) != 0.0 )
    {
      left += (int)floor_0((float)*((int *)a2 + 84) + 0.5);
      top += (int)floor_0((float)*((int *)a2 + 85) + 0.5);
    }
  }
  *a5 = top;
  *a4 = left;
}
