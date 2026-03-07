char __fastcall CCursorClip::ApplySystemClips(__int64 a1, struct tagPOINT a2, char a3, struct tagPOINT *a4)
{
  char v4; // di
  CCursorClip *v7; // r10
  char v8; // al
  bool v9; // r14
  bool v10; // bp
  bool v11; // r11
  int v12; // r12d
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  __int64 v16; // rcx
  const struct tagRECT *v17; // r8
  const struct tagRECT *v18; // r9
  unsigned int v19; // eax
  int right; // edx
  LONG v21; // ecx
  LONG top; // edx
  LONG bottom; // edx
  __int64 v24; // [rsp+70h] [rbp+8h]
  LONG y; // [rsp+7Ch] [rbp+14h]

  y = a2.y;
  v4 = 0;
  *a4 = a2;
  v7 = (CCursorClip *)a1;
  if ( (a3 & 1) != 0 )
  {
    v8 = 1;
    v9 = *(_BYTE *)(a1 + 276) != 0;
    if ( *(_BYTE *)(a1 + 277) )
    {
      v10 = 1;
      goto LABEL_11;
    }
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  v10 = 0;
  if ( !v8 )
  {
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
LABEL_11:
  v11 = 1;
  if ( (a3 & 4) == 0 )
    goto LABEL_4;
LABEL_5:
  v12 = *(_DWORD *)(a1 + 272);
  v13 = -1;
  v14 = 0;
  if ( v12 )
  {
    v16 = *(_QWORD *)(a1 + 264);
    v24 = v16;
    while ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v16 + 16LL * v14, a2) )
    {
      v19 = 0;
      if ( a2.x >= v17->left )
      {
        right = v17->right;
        if ( a2.x >= right )
          v19 = a2.x - right + 1;
      }
      else
      {
        v19 = v17->left - a2.x;
      }
      v21 = a4->y;
      top = v17->top;
      if ( v21 >= top )
      {
        bottom = v17->bottom;
        if ( v21 >= bottom )
          v19 += v21 - bottom + 1;
      }
      else
      {
        v19 += top - v21;
      }
      v16 = v24;
      if ( v19 >= v13 )
        v17 = v18;
      ++v14;
      if ( v19 >= v13 )
        v19 = v13;
      v13 = v19;
      if ( v14 == v12 )
      {
        if ( v17 )
          CCursorClip::ClipPointToRect(a2, v17, a4);
        break;
      }
    }
  }
  CCursorClip::BoundPointToRegions(v7, *a4, v9, v10, v11, a4);
  if ( *a4 != __PAIR64__(y, a2.x) )
    return 1;
  return v4;
}
