/*
 * XREFs of ?CalculateSharedArea@@YANAEBUtagRECT@@0@Z @ 0x180306348
 * Callers:
 *     ?IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplateAppliedToView@TabViewManagerMeasures@@@Z @ 0x180306A98 (-IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplat.c)
 * Callees:
 *     <none>
 */

double __fastcall CalculateSharedArea(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG left; // ebp
  LONG top; // r14d
  LONG bottom; // r8d
  LONG v5; // edi
  LONG v6; // eax
  LONG v7; // esi
  LONG right; // r11d
  LONG v9; // ebx
  LONG v10; // r10d
  LONG v11; // r9d
  LONG v12; // edx
  LONG v13; // ecx
  int v14; // edx
  int v15; // ecx

  left = a2->left;
  top = a2->top;
  bottom = a2->bottom;
  v5 = a1->left;
  v6 = a1->left;
  v7 = a1->top;
  right = a1->right;
  v9 = v7;
  v10 = a2->right;
  if ( a1->left <= a2->left )
    v6 = a2->left;
  v11 = a1->bottom;
  v12 = a1->right;
  v13 = v11;
  if ( v7 <= top )
    v9 = top;
  if ( right >= v10 )
    v12 = v10;
  if ( v11 >= bottom )
    v13 = bottom;
  v14 = v12 - v6;
  if ( v14 <= 0 )
    return 0.0;
  v15 = v13 - v9;
  if ( v15 <= 0 )
    return 0.0;
  else
    return (double)(v14 * v15)
         / ((double)((v10 - left) * (bottom - top)) + (double)((right - v5) * (v11 - v7)) - (double)(v14 * v15));
}
