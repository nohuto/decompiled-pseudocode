__int64 __fastcall FindAdjacentMonitor(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rdi
  int v5; // ebp
  __int64 v6; // rsi
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct tagRECT v11; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v5 = 0;
  v6 = *((_QWORD *)gpDispInfo + 13);
  while ( v6 )
  {
    v7 = v5;
    v11 = *ExpandedMonitorRect(&v12, (struct tagMONITOR *)v6, a2);
    v8 = ComputeAdjacencyOverlap(a1, &v11);
    v9 = v6;
    v6 = *(_QWORD *)(v6 + 56);
    if ( v8 > v5 )
      v5 = v8;
    if ( v8 <= v7 )
      v9 = v2;
    v2 = v9;
  }
  return v2;
}
