/*
 * XREFs of ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0070630
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C0070580 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 * Callees:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C00706DC (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     PtInRect @ 0x1C00707BC (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C01A2A00 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CCursorClip::ApplySystemClips(__int64 a1, struct tagPOINT a2, char a3, struct tagPOINT *a4)
{
  char v4; // di
  CCursorClip *v7; // r10
  bool v8; // r11
  bool v9; // bp
  int v10; // r14d
  unsigned int v11; // eax
  const struct tagRECT *v12; // rcx
  unsigned int v13; // r15d
  __int64 v15; // r13
  unsigned int v16; // r12d
  __int64 v17; // r9
  int right; // edx
  int v19; // edx
  LONG top; // r8d
  LONG bottom; // r8d
  struct tagRECT *v22; // [rsp+70h] [rbp+8h]
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
  v9 = 1;
  v8 = *(_BYTE *)(a1 + 92) != 0;
  if ( !*(_BYTE *)(a1 + 93) )
    goto LABEL_3;
LABEL_4:
  v10 = *(_DWORD *)(a1 + 88);
  v11 = -1;
  v12 = 0LL;
  v13 = 0;
  if ( v10 )
  {
    v15 = *((_QWORD *)v7 + 10);
    while ( 1 )
    {
      v22 = (struct tagRECT *)v12;
      v16 = v11;
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v15 + 16LL * v13, a2) )
        break;
      v11 = 0;
      if ( a2.x >= v12->left )
      {
        right = v12->right;
        if ( a2.x >= right )
          v11 = a2.x - right + 1;
      }
      else
      {
        v11 = v12->left - a2.x;
      }
      v19 = *(_DWORD *)(v17 + 4);
      top = v12->top;
      if ( v19 >= top )
      {
        bottom = v12->bottom;
        if ( v19 >= bottom )
          v11 += v19 - bottom + 1;
      }
      else
      {
        v11 += top - v19;
      }
      if ( v11 >= v16 )
        v12 = v22;
      ++v13;
      if ( v11 >= v16 )
        v11 = v16;
      if ( v13 == v10 )
        goto LABEL_27;
    }
    v12 = 0LL;
LABEL_27:
    if ( v12 )
      CCursorClip::ClipPointToRect(a2, v12, a4);
  }
  CCursorClip::BoundPointToRegions(v7, *a4, v8, v9, a4);
  if ( *a4 != __PAIR64__(y, a2.x) )
    return 1;
  return v4;
}
