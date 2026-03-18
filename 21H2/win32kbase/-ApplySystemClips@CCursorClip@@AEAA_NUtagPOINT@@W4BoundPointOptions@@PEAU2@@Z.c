/*
 * XREFs of ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C006D350
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C006D2A0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C006D400 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C00E87D0 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CCursorClip::ApplySystemClips(__int64 a1, struct tagPOINT a2, char a3, struct tagPOINT *a4)
{
  char v4; // di
  CCursorClip *v7; // r10
  bool v8; // r11
  bool v9; // r15
  int v10; // r12d
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  __int64 v14; // rcx
  const struct tagRECT *v15; // r8
  const struct tagRECT *v16; // r9
  unsigned int v17; // eax
  int right; // ecx
  LONG v19; // ecx
  LONG top; // edx
  LONG bottom; // edx
  __int64 v22; // [rsp+70h] [rbp+8h]
  LONG y; // [rsp+7Ch] [rbp+14h]

  y = a2.y;
  v4 = 0;
  *a4 = a2;
  v7 = (CCursorClip *)a1;
  if ( (a3 & 1) == 0 )
  {
    v8 = 0;
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  v8 = *(_BYTE *)(a1 + 276) != 0;
  if ( !*(_BYTE *)(a1 + 277) )
    goto LABEL_3;
  v9 = 1;
LABEL_4:
  v10 = *(_DWORD *)(a1 + 272);
  v11 = -1;
  v12 = 0;
  if ( v10 )
  {
    v14 = *(_QWORD *)(a1 + 264);
    v22 = v14;
    while ( !PtInRect((_DWORD *)(v14 + 16LL * v12), *(_QWORD *)&a2) )
    {
      v17 = 0;
      if ( a2.x >= v15->left )
      {
        right = v15->right;
        if ( a2.x >= right )
          v17 = a2.x - right + 1;
      }
      else
      {
        v17 = v15->left - a2.x;
      }
      v19 = a4->y;
      top = v15->top;
      if ( v19 >= top )
      {
        bottom = v15->bottom;
        if ( v19 >= bottom )
          v17 += v19 - bottom + 1;
      }
      else
      {
        v17 += top - v19;
      }
      if ( v17 < v11 )
      {
        v11 = v17;
        v16 = v15;
      }
      v14 = v22;
      if ( ++v12 == v10 )
      {
        if ( v16 )
          CCursorClip::ClipPointToRect(a2, v16, a4);
        break;
      }
    }
  }
  CCursorClip::BoundPointToRegions(v7, *a4, v8, v9, a4);
  if ( *a4 != __PAIR64__(y, a2.x) )
    return 1;
  return v4;
}
