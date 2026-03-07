__int64 __fastcall TouchTargetingLayerHitTest(
        struct tagWND *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        _DWORD *a7,
        int a8)
{
  int v9; // edi
  int v13; // eax
  unsigned __int16 v15; // bp
  __int64 v16; // rbx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  int v19; // [rsp+7Ch] [rbp+14h]
  struct tagPOINT v20; // [rsp+A0h] [rbp+38h]
  struct tagPOINT v21; // [rsp+A0h] [rbp+38h]

  v19 = HIDWORD(a2);
  v9 = a2;
  v13 = a7[1] + HIDWORD(a2);
  v20.x = a2 + *a7;
  v20.y = v13;
  if ( a3 )
  {
    if ( DCELayerHitTest(a1, v20) )
      return 1LL;
  }
  else if ( LayerHitTest(a1, v20) )
  {
    return 1LL;
  }
  v17 = *(_QWORD *)a7;
  v18 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  v15 = TouchTargetingRankForRectDeep(&v18, a4, a5, &v17, a8);
  if ( v15 <= 0xFFDu )
  {
    v16 = v17;
    v21.y = HIDWORD(v17) + v19;
    v21.x = v17 + v9;
    if ( a3 )
    {
      if ( !DCELayerHitTest(a1, v21) )
        return 0LL;
    }
    else if ( !LayerHitTest(a1, v21) )
    {
      return 0LL;
    }
    *(_QWORD *)a7 = v16;
    *a6 = v15;
    return 1LL;
  }
  return 0LL;
}
