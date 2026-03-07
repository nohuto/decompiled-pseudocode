__int64 __fastcall BgpGxParseBitmap(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rbx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9[2] = 0;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 2) < 0x30u )
    return (unsigned int)-1073741811;
  v3 = (_DWORD *)(a1 + 14);
  if ( *(_WORD *)a1 != 19778 || *(_DWORD *)(a1 + 30) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = *(unsigned __int16 *)(a1 + 28);
    if ( (((_DWORD)v4 - 24) & 0xFFFFFFF7) != 0 || *v3 != 40 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      v9[0] = *(_DWORD *)(a1 + 18);
      v9[1] = *(_DWORD *)(a1 + 22);
      v5 = BgpGxRectangleCreate(v9, v4, &v10);
      if ( v5 < 0 )
      {
        if ( v10 )
          BgpGxRectangleDestroy(v10);
      }
      else
      {
        v6 = (__int64)v3;
        v7 = v10;
        BgpGxCopyBitmapToRectangle(v10, v6);
        *a2 = v7;
      }
    }
  }
  return (unsigned int)v5;
}
