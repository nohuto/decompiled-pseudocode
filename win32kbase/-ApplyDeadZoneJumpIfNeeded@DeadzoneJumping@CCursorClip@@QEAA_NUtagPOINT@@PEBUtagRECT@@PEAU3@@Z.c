char __fastcall CCursorClip::DeadzoneJumping::ApplyDeadZoneJumpIfNeeded(
        CCursorClip::DeadzoneJumping *this,
        struct tagPOINT a2,
        const struct tagRECT *a3,
        struct tagPOINT *a4)
{
  _QWORD *i; // rdi
  bool v8; // dl
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  __int64 *v12; // r9
  __int64 *v13; // r10
  LONG y; // ecx
  int v15; // edx
  int v16; // r8d
  int v17; // eax
  int v18; // r11d
  _DWORD *v19; // rdi
  INT v20; // eax
  int v21; // r9d
  int v22; // r11d
  LONG v23; // r9d
  int v24; // r9d
  int v25; // r11d
  LONG v26; // r9d
  tagPOINT v28; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v29; // [rsp+48h] [rbp+10h] BYREF

  v29 = a2;
  *a4 = a2;
  for ( i = *(_QWORD **)this; i && (i[1] != *(_QWORD *)&a3->left || i[2] != *(_QWORD *)&a3->right); i = (_QWORD *)*i )
    ;
  if ( (unsigned int)Feature_DeadzoneLogicStaleRegionFix__private_IsEnabledDeviceUsage() && !i )
    return 0;
  v28 = a2;
  CCursorClip::ClipPointToRect(a2, a3, &v28);
  v8 = 0;
  v9 = v28.x == a3->left;
  if ( v28.y == a3->top )
  {
    v8 = v28.x == a3->left;
    v9 = 2;
    if ( v28.x == a3->left )
      return 0;
  }
  v10 = v9;
  if ( v28.x == a3->right - 1 )
  {
    v9 = 3;
    v8 = v10 != 0;
    if ( v10 )
      goto LABEL_15;
  }
  v11 = v9;
  if ( v28.y == a3->bottom - 1 )
  {
    v9 = 4;
    v8 = v11 != 0;
    goto LABEL_15;
  }
  if ( !v9 )
    return 0;
LABEL_15:
  if ( v8 )
    return 0;
  v12 = (__int64 *)i[3];
  v13 = 0LL;
  if ( !v12 )
    return 0;
  do
  {
    if ( *((_DWORD *)v12 + 16) == v9 )
    {
      if ( v9 == 1 || v9 == 3 )
      {
        y = a4->y;
        v15 = *((_DWORD *)v12 + 9);
        v16 = *((_DWORD *)v12 + 11);
      }
      else
      {
        y = a4->x;
        v15 = *((_DWORD *)v12 + 8);
        v16 = *((_DWORD *)v12 + 10);
      }
      v17 = CCursorClip::DeadzoneJumping::Proximity(y, v15, v16);
      if ( v17 < v18 )
        v13 = v12;
    }
    v12 = (__int64 *)*v12;
  }
  while ( v12 );
  if ( !v13 )
    return 0;
  v19 = (_DWORD *)v13[1];
  v20 = EngMulDiv(1500, *(unsigned __int16 *)(v13[3] + 32), 2540);
  if ( ((v9 - 1) & 0xFFFFFFFD) != 0 )
  {
    v21 = v19[14];
    v22 = v19[12];
    if ( v21 - v22 <= 2 * v20 )
    {
      a4->x = v22 + (v21 - v22) / 2;
    }
    else
    {
      if ( (int)abs32(a4->x - v22) >= (int)abs32(a4->x - v21) )
        v23 = v21 - v20;
      else
        v23 = v22 + v20;
      a4->x = v23;
    }
  }
  else
  {
    v24 = v19[15];
    v25 = v19[13];
    if ( v24 - v25 <= 2 * v20 )
    {
      a4->y = v25 + (v24 - v25) / 2;
    }
    else
    {
      if ( (int)abs32(a4->y - v25) >= (int)abs32(a4->y - v24) )
        v26 = v24 - v20;
      else
        v26 = v25 + v20;
      a4->y = v26;
    }
  }
  InputTraceLogging::Cursor::DeadzoneJumpSuggestion(v9, &v29, a4);
  return 1;
}
