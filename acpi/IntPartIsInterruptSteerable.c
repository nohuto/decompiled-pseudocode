__int64 __fastcall IntPartIsInterruptSteerable(__int64 a1, bool *a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // esi
  unsigned int v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF

  v9 = 0LL;
  v8 = 0;
  if ( *(_WORD *)(a1 + 8) )
  {
    *a2 = 0;
    return 0;
  }
  v4 = KeQueryInterruptPartitionCount(0LL, &v8);
  v5 = v4;
  if ( v4 == 259 )
  {
    *a2 = KeQueryGroupAffinity_0(*(_WORD *)(a1 + 8)) == *(_QWORD *)a1;
  }
  else
  {
    if ( v4 < 0 || !v8 )
    {
      *a2 = 0;
      return 0;
    }
    *a2 = 1;
    v6 = 0;
    while ( 1 )
    {
      v5 = KeQueryInterruptPartitionInformation(*(unsigned __int16 *)(a1 + 8), v6, &v9);
      if ( v5 < 0 || (*(_QWORD *)a1 & (unsigned __int64)v9) == 0 )
        break;
      if ( ++v6 >= v8 )
        return (unsigned int)v5;
    }
    *a2 = 0;
  }
  return (unsigned int)v5;
}
