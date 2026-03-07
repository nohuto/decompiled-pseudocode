__int64 *__fastcall MxSwitchDescriptors(unsigned int a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rcx
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned __int64 HighestDescriptorByNode; // rsi
  unsigned int v7; // edx
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  char v12; // [rsp+60h] [rbp+8h]
  __int64 v13; // [rsp+68h] [rbp+10h]

  v1 = a1;
  if ( !MxBootDescriptorAnyNodeBitMap )
  {
    MxBootDescriptorAnyNodeBitMap = 64;
    qword_140D816E0 = (__int64)&MxBootDescriptorAnyNodeBuffer;
  }
  v2 = KeLoaderBlock_0;
  v13 = KeLoaderBlock_0;
  v12 = v1 & 7;
  v3 = v1 >> 3;
LABEL_4:
  v4 = 0LL;
  v5 = (unsigned __int16)KeNumberNodes;
  if ( !_bittest64((const signed __int64 *)qword_140D816E0, v1) )
    v5 = v1;
  HighestDescriptorByNode = (unsigned __int64)MiFindHighestDescriptorByNode(v2, v5);
  if ( HighestDescriptorByNode
    || (v7 = (unsigned __int16)KeNumberNodes, v5 != (unsigned __int16)KeNumberNodes)
    && (v5 = (unsigned __int16)KeNumberNodes,
        *(_BYTE *)(v3 + qword_140D816E0) |= 1 << v12,
        (HighestDescriptorByNode = (unsigned __int64)MiFindHighestDescriptorByNode(v13, v7)) != 0) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(HighestDescriptorByNode + 24);
      if ( v8 == 2 || v8 == 24 )
      {
        if ( *((_DWORD *)MiSearchNumaNodeTable(*(_QWORD *)(HighestDescriptorByNode + 32)) + 2) == (_DWORD)v1
          || _bittest64((const signed __int64 *)qword_140D816E0, v1) )
        {
          v4 = HighestDescriptorByNode;
          goto LABEL_30;
        }
        if ( !v4 )
          v4 = HighestDescriptorByNode;
      }
      v9 = *(_QWORD *)HighestDescriptorByNode;
      v10 = HighestDescriptorByNode;
      if ( *(_QWORD *)HighestDescriptorByNode )
      {
        while ( 1 )
        {
          HighestDescriptorByNode = v9;
          if ( !*(_QWORD *)(v9 + 8) )
            break;
          v9 = *(_QWORD *)(v9 + 8);
        }
      }
      else
      {
        while ( 1 )
        {
          HighestDescriptorByNode = *(_QWORD *)(HighestDescriptorByNode + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !HighestDescriptorByNode || *(_QWORD *)(HighestDescriptorByNode + 8) == v10 )
            break;
          v10 = HighestDescriptorByNode;
        }
      }
      if ( !HighestDescriptorByNode )
      {
        *(_BYTE *)(v3 + qword_140D816E0) |= 1 << v12;
        if ( !v4 )
        {
          if ( v5 != (unsigned __int16)KeNumberNodes )
          {
            v2 = v13;
            goto LABEL_4;
          }
          MxBootFreeDescriptor[5 * v1 + 4] = 0LL;
          return 0LL;
        }
LABEL_30:
        MiInitializeBootMemoryDescriptor(
          (unsigned __int64 *)&MxBootFreeDescriptor[5 * v1],
          v4,
          *(_QWORD *)(v4 + 32),
          *(_QWORD *)(v4 + 40));
        *(_DWORD *)(v4 + 24) |= 0x40000000u;
        return &MxBootFreeDescriptor[5 * v1];
      }
    }
  }
  return 0LL;
}
