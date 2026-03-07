__int64 __fastcall Edgy::_HitTestEdgyRegion(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  __int64 v6; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  __int64 v12; // r13
  __int64 v13; // rsi
  int v14; // ebp
  __int64 v15; // rdx
  int *v16; // r14
  __int128 v19; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v20[16]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h] BYREF

  *(_DWORD *)(a1 + 20) = 0;
  v6 = a3;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  v21 = 0LL;
  if ( (unsigned int)GetPointerDeviceRects(a3, &v21, 0LL) )
  {
    v10 = *a2;
    v11 = 0;
    if ( *a2 )
    {
      v12 = *((_QWORD *)a2 + 1);
      while ( 1 )
      {
        v13 = v12 + 32LL * v11;
        if ( *(_QWORD *)v13 == v6 )
          break;
LABEL_12:
        if ( ++v11 >= v10 )
          return a1;
      }
      v14 = *(_DWORD *)(v13 + 16);
      if ( a5 == 3 )
      {
        v15 = a6 != 0 ? 2 : 0;
      }
      else
      {
        if ( a5 != 1 )
        {
LABEL_11:
          v6 = a3;
          goto LABEL_12;
        }
        v15 = 1LL;
      }
      v16 = (int *)((char *)&a2[13 * v15 + 12] + (-(__int64)(((v14 - 1) & 0xFFFFFFFD) == 0) & 0xFFFFFFFFFFFFFFE8uLL));
      if ( v16 )
      {
        v19 = *(_OWORD *)Edgy::_GetRectForLocation((__int64)v20, &v21, v14, *v16);
        if ( PtInRect(&v19, a4) )
        {
          *(_QWORD *)a1 = v13;
          *(_QWORD *)(a1 + 8) = v16;
          *(_DWORD *)(a1 + 16) = v14;
          return a1;
        }
      }
      goto LABEL_11;
    }
  }
  return a1;
}
