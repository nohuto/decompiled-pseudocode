void __fastcall CheckPlacementBounds(
        struct tagRECT *a1,
        struct tagPOINT *a2,
        struct tagPOINT *a3,
        struct tagMONITOR *a4)
{
  __int64 *MonitorWorkRect; // rax
  LONG top; // r13d
  int v9; // esi
  __int64 v10; // r9
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  int v13; // r10d
  LONG bottom; // ecx
  int v15; // r11d
  LONG left; // r14d
  int v17; // edi
  LONG right; // r8d
  LONG x; // r8d
  LONG y; // ecx
  int v21; // ebx
  int v22; // r10d
  int v23; // ecx
  int v24; // r10d
  int v25; // r11d
  int v26; // eax
  int v27; // ecx
  LONG v28; // eax
  int v29; // r8d
  LONG v30; // ecx
  __int128 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+30h] [rbp-38h] BYREF

  MonitorWorkRect = (__int64 *)GetMonitorWorkRect(&v32, a4);
  top = a1->top;
  v9 = -1;
  v10 = *MonitorWorkRect;
  v11 = HIDWORD(*MonitorWorkRect);
  v31 = *(_OWORD *)MonitorWorkRect;
  v12 = MonitorWorkRect[1];
  if ( top < (int)v11 )
    v13 = -1;
  else
    v13 = top > SHIDWORD(v31);
  bottom = a1->bottom;
  if ( bottom < (int)v11 )
    v15 = -1;
  else
    v15 = bottom > SHIDWORD(v31);
  left = a1->left;
  if ( a1->left < (int)v10 )
    v17 = -1;
  else
    v17 = left > SDWORD2(v31);
  right = a1->right;
  if ( right >= (int)v10 )
    v9 = right > SDWORD2(v31);
  if ( v13 * v15 > 0 || v17 * v9 > 0 )
  {
    if ( v13 >= 0 )
    {
      if ( v15 > 0 )
      {
        v27 = bottom - top;
        v28 = HIDWORD(v31) - v27;
        if ( HIDWORD(v31) - v27 <= (int)v11 )
          v28 = v11;
        a1->top = v28;
        a1->bottom = v27 + v28;
      }
    }
    else
    {
      a1->top = v11;
      a1->bottom = bottom - top;
    }
    if ( v17 >= 0 )
    {
      if ( v9 > 0 )
      {
        v29 = right - left;
        v30 = v10;
        if ( (int)v12 - v29 > (int)v10 )
          v30 = v12 - v29;
        a1->left = v30;
        a1->right = v30 + v29;
      }
    }
    else
    {
      a1->left = v10;
      a1->right = right - left;
    }
  }
  x = a2->x;
  if ( a2->x != -1 )
  {
    y = a2->y;
    v21 = y >= (int)v11 ? y > SHIDWORD(v12) : -1;
    v22 = y + *(_DWORD *)(gpsi + 2088LL);
    v23 = v22 >= (int)v11 ? v22 > SHIDWORD(v12) : -1;
    v24 = x >= (int)v10 ? x > (int)v12 : -1;
    v25 = x + *(_DWORD *)(gpsi + 2084LL);
    v26 = v25 >= (int)v10 ? v25 > (int)v12 : -1;
    if ( v21 * v23 > 0 || v24 * v26 > 0 )
    {
      a2->y = -1;
      a2->x = -1;
    }
  }
  if ( a3->x != -1 && ((int)v10 + a3->x >= (int)v12 || (int)v11 + a3->y >= SHIDWORD(v12)) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
