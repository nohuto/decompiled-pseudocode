__int64 __fastcall SdbpGetNextTagId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  unsigned int *v5; // r14
  int v6; // edi
  unsigned int TagDataSize; // eax

  v2 = a2;
  v4 = a2 + 2;
  if ( a2 + 2 < 2 )
  {
    AslLogCallPrintf(1LL);
    v5 = (unsigned int *)(a1 + 20);
  }
  else
  {
    v5 = (unsigned int *)(a1 + 20);
    if ( *(_DWORD *)(a1 + 20) >= v4 )
    {
      if ( (*(_WORD *)(a2 + *(_QWORD *)(a1 + 8)) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, a2) == -1 )
        goto LABEL_17;
      goto LABEL_7;
    }
    AslLogCallPrintf(1LL);
  }
  AslLogCallPrintf(1LL);
  if ( v4 < 2 )
  {
LABEL_16:
    AslLogCallPrintf(1LL);
LABEL_17:
    AslLogCallPrintf(1LL);
    return *v5;
  }
LABEL_7:
  if ( *v5 < v4 )
    goto LABEL_16;
  v6 = 6;
  if ( (*(_WORD *)(v2 + *(_QWORD *)(a1 + 8)) & 0xF000u) < 0x7000 )
    v6 = 2;
  TagDataSize = SdbGetTagDataSize(a1, (unsigned int)v2);
  if ( (*(_DWORD *)(a1 + 2608) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return (unsigned int)v2 + v6 + TagDataSize;
}
