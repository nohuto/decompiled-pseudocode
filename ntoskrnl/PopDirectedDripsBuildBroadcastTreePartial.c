__int64 __fastcall PopDirectedDripsBuildBroadcastTreePartial(__int64 a1, char a2, _DWORD *a3)
{
  char v3; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // ebp
  int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = 0;
  v12 = 0;
  if ( (*(_DWORD *)(a1 + 760) & 0x30000) != 0 )
  {
    v7 = 0;
  }
  else
  {
    PopDirectedDripsDiagBroadcastTreeBegin(a1, a2, &v13);
    v12 = 0;
    v8 = a1;
    v9 = 0;
    while ( (*(_DWORD *)(v8 + 760) & 2) != 0 )
    {
      if ( !*(_QWORD *)(v8 + 8) || (*(_DWORD *)(v8 + 760) & 4) != 0 )
        goto LABEL_14;
      v8 = *(_QWORD *)(v8 + 8);
LABEL_17:
      if ( v8 == a1 )
        goto LABEL_18;
    }
    v10 = PopDirectedDripsBuildBroadcastTreeFull(v8, v13, a2, &v12);
    v7 = v10;
    if ( v10 >= 0 )
    {
      ++v9;
      goto LABEL_14;
    }
    v3 = 1;
    if ( v10 == -1073741637 )
    {
LABEL_14:
      while ( v8 != a1 )
      {
        if ( *(_QWORD *)v8 )
        {
          v8 = *(_QWORD *)v8;
          goto LABEL_17;
        }
        v8 = *(_QWORD *)(v8 + 16);
      }
LABEL_18:
      *a3 |= v12;
      v7 = v9 == 0 ? 0xC00000BB : 0;
    }
  }
  PopDirectedDripsDiagBroadcastTreeEnd(v13, v7, v12, v3);
  return v7;
}
