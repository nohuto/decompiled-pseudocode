__int64 __fastcall TransformRegionBetweenCoordinateSpaces(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  int RegionData; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // r14
  unsigned int v11; // ebp
  __int64 RectRgn; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v4 = 0;
  if ( (unsigned __int64)*a3 > 2
    && (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
  {
    RegionData = GreGetRegionData(v3, 0LL, 0LL);
    v7 = RegionData;
    if ( RegionData > 0 )
    {
      v8 = Win32AllocPoolZInit(RegionData, 1919775573LL);
      v9 = (_DWORD *)v8;
      if ( v8 )
      {
        if ( (unsigned int)GreGetRegionData(v3, v7, v8) )
        {
          v10 = v9 + 8;
          v19 = 0LL;
          v11 = 0;
          RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
          if ( !v9[2] )
            goto LABEL_14;
          do
          {
            TransformRectBetweenCoordinateSpaces(&v19, v10, a1, a2);
            v13 = v19 - *v10;
            if ( (_QWORD)v19 == *v10 )
              v13 = *((_QWORD *)&v19 + 1) - v10[1];
            v4 |= v13 != 0;
            v14 = GreCreateRectRgnIndirect(&v19);
            v15 = v14;
            if ( v14 )
            {
              GreCombineRgn(RectRgn, RectRgn, v14, 2LL);
              GreDeleteObject(v15);
            }
            v10 += 2;
            ++v11;
          }
          while ( v11 < v9[2] );
          if ( v4 )
            *a3 = RectRgn;
          else
LABEL_14:
            GreDeleteObject(RectRgn);
        }
        Win32FreePool(v9);
      }
    }
  }
  return v4;
}
