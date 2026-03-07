__int64 __fastcall MirrorRegion(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  int RegionData; // eax
  unsigned int v9; // ebp
  __int64 v10; // rax
  struct tagRECT *v11; // rbx
  __int64 right; // r10
  struct tagRECT *v13; // r9
  _DWORD *v14; // rcx
  int v15; // edx
  LONG left; // ecx
  __int64 v17; // r11
  LONG v18; // r8d
  __int64 Region; // rax
  __int64 v20; // rbp

  v3 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 0x40) != 0 && a2 > 2 )
  {
    RegionData = GreGetRegionData(a2, 0LL, 0LL);
    v9 = RegionData;
    if ( RegionData > 0 )
    {
      v10 = Win32AllocPoolZInit(RegionData, 1768780629LL);
      v11 = (struct tagRECT *)v10;
      if ( v10 )
      {
        if ( (unsigned int)GreGetRegionData(a2, v9, v10) )
        {
          right = (unsigned int)v11->right;
          v13 = v11 + 2;
          v14 = *(_DWORD **)(a1 + 40);
          if ( a3 )
            v15 = v14[28] - v14[26];
          else
            v15 = v14[24] - v14[22];
          left = v11[1].left;
          v11[1].left = v15 - v11[1].right;
          v11[1].right = v15 - left;
          if ( (int)right > 0 )
          {
            v17 = right;
            do
            {
              v18 = v13->left;
              v13->left = v15 - v13->right;
              v13->right = v15 - v18;
              ++v13;
              --v17;
            }
            while ( v17 );
          }
          OrderRects(v11 + 2, right);
          Region = GreExtCreateRegion(0LL, v9, v11);
          v20 = Region;
          if ( Region )
          {
            GreCombineRgn(a2, Region, 0LL, 5LL);
            GreDeleteObject(v20);
            v3 = 1;
          }
        }
        Win32FreePool(v11);
      }
    }
  }
  return v3;
}
