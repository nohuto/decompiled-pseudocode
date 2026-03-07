__int64 KiPopulateSubNodes()
{
  unsigned __int16 v0; // bx
  __int64 *v1; // r8
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 Pool2; // rsi
  __int64 result; // rax
  bool v6; // cf
  unsigned __int16 v7; // r11
  _QWORD *v8; // rcx
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // r9
  unsigned int v11; // r10d
  __int16 v12; // dx
  __int64 v13; // rcx

  v0 = 0;
  if ( KeNumberNodes )
  {
    v1 = KeNodeBlock;
    v2 = (unsigned __int16)KeNumberNodes;
    do
    {
      v3 = *v1++;
      v0 += (unsigned __int16)(*(_WORD *)(v3 + 8) + KiMaximumGroupSize - 1) / (unsigned __int16)KiMaximumGroupSize;
      --v2;
    }
    while ( v2 );
  }
  Pool2 = ExAllocatePool2(72LL, 24LL * v0, 0x414E534Bu);
  if ( !Pool2 || (result = ExAllocatePool2(72LL, 8LL * v0, 0x414E534Bu)) == 0 )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  v6 = KeNumberNodes != 0;
  v7 = 0;
  v8 = (_QWORD *)KiSubNodes;
  v9 = 0;
  KiSubNodes = result;
  KiSubNodeConfigBlock = Pool2;
  *(_QWORD *)result = *v8;
  if ( v6 )
  {
    do
    {
      result = KeNodeBlock[v9];
      v10 = *(_WORD *)(result + 8);
      if ( v10 )
      {
        v11 = KiMaximumGroupSize;
        do
        {
          v12 = v11;
          result = v7;
          if ( v10 <= v11 )
            v12 = v10;
          v13 = 3LL * v7;
          *(_WORD *)(Pool2 + 8 * v13) = v7++;
          *(_WORD *)(Pool2 + 8 * v13 + 2) = v9;
          *(_BYTE *)(Pool2 + 8 * v13 + 4) = v12;
          v10 -= v12;
        }
        while ( v10 );
      }
      ++v9;
    }
    while ( v9 < (unsigned __int16)KeNumberNodes );
  }
  KiSubNodeCount = v0;
  return result;
}
