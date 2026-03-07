__int64 __fastcall KiConfigureProcessorBlock(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ecx
  unsigned int v3; // r11d
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 *v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // r10

  v1 = *(_QWORD *)(a1 + 192);
  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = v2 >> 6;
  v4 = *(_QWORD *)(v1 + 128) | (1LL << (v2 & 0x3F));
  _BitScanForward64(&v5, v4);
  v6 = v2 >> 6 << 6;
  *(_BYTE *)(v1 + 116) = v5;
  _BitScanReverse64(&v7, v4);
  *(_QWORD *)(v1 + 128) = v4;
  *(_DWORD *)(v1 + 176) = KiProcessorNumberToIndexMappingTable[v6 + (unsigned int)v5];
  *(_DWORD *)(v1 + 180) = KiProcessorNumberToIndexMappingTable[v6 + (unsigned int)v7];
  result = v4 - 1;
  if ( ((v4 - 1) & v4) == 0 )
  {
    v9 = *(unsigned __int16 *)(v1 + 138);
    v10 = KeNodeBlock;
    v11 = KeNodeBlock[v9];
    v12 = *(_DWORD *)(v11 + 16);
    if ( !v12 )
      *(_BYTE *)(v11 + 12) = v3;
    v13 = (unsigned __int16)KeNumberNodes;
    v14 = v12;
    result = v3;
    v15 = 0;
    *(_DWORD *)(v11 + 16) = v14 | (1 << v3);
    if ( v13 )
    {
      v16 = 0LL;
      do
      {
        if ( v15 != (_DWORD)v9 )
        {
          result = KiGetSubNodeForGroup(*v10, v3);
          if ( result )
          {
            *(_QWORD *)(result + 144) |= 1LL << v9;
            result = *(_QWORD *)(v1 + 144) | (1LL << v16);
            *(_QWORD *)(v1 + 144) = result;
          }
        }
        ++v15;
        ++v16;
        ++v10;
      }
      while ( v15 < v13 );
    }
  }
  return result;
}
