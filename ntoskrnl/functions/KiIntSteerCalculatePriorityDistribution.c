int __fastcall KiIntSteerCalculatePriorityDistribution(char *a1, _QWORD **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int16 v5; // ax
  char *v6; // rdi
  __int16 v8; // ax
  __int16 v9; // ax
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // r9
  int *v13; // rcx
  _QWORD *i; // rbx
  _QWORD *v15; // r15
  unsigned int v16; // esi
  __int128 *v17; // r14
  unsigned int v18; // ecx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int128 *v21; // rcx
  int v22; // edx
  __int64 *v23; // rdx
  int v24; // r11d
  __int64 v25; // r10
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int128 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h]

  v5 = *(_WORD *)(a3 + 8);
  v27 = 0LL;
  WORD4(v27) = v5;
  v6 = a1;
  *(_QWORD *)&v27 = *(_QWORD *)a3;
  v8 = *(_WORD *)(a4 + 8);
  v28 = 0LL;
  WORD4(v28) = v8;
  *(_QWORD *)&v28 = *(_QWORD *)a4;
  v9 = *(_WORD *)(a5 + 8);
  v29 = 0LL;
  WORD4(v29) = v9;
  *(_QWORD *)&v29 = *(_QWORD *)a5;
  if ( !a1 )
  {
    v6 = (char *)KiIntSteerDistributionContext;
    memset((char *)KiIntSteerDistributionContext + 260, 0, 0x100uLL);
  }
  LODWORD(v10) = KeQueryActiveProcessorCountEx(0);
  if ( (_DWORD)v10 )
  {
    v11 = *(_DWORD *)v6;
    v12 = (unsigned int)v10;
    v13 = KiProcessorIndexToNumberMappingTable;
    do
    {
      if ( v11 <= *(int *)((char *)v13 + v6 - (char *)KiProcessorIndexToNumberMappingTable + 4) )
      {
        v23 = (__int64 *)&v27;
        v24 = *v13 & 0x3F;
        v25 = 3LL;
        do
        {
          v10 = *v23 & ~(1LL << v24);
          *v23 = v10;
          v23 += 2;
          --v25;
        }
        while ( v25 );
      }
      ++v13;
      --v12;
    }
    while ( v12 );
  }
  for ( i = *a2; i != a2; i = (_QWORD *)*i )
  {
    LODWORD(v10) = -1;
    v15 = i - 26;
    v16 = 0;
    v17 = &v27;
    while ( 1 )
    {
      if ( *(_QWORD *)v17 )
      {
        LODWORD(v10) = KiIntSteerGetNextProcessorTarget(i - 26, &v27 + v16);
        if ( (_DWORD)v10 != -1 )
          break;
      }
      ++v16;
      ++v17;
      if ( v16 >= 3 )
        goto LABEL_15;
    }
    *(_DWORD *)&v6[4 * (unsigned int)v10 + 260] += 10000LL
                                                 * v15[24]
                                                 / (KiIntSteerPreviousPerfSnapDelta
                                                  * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[(unsigned int)v10]
                                                                                      + 68));
    if ( *(_DWORD *)v6 <= (unsigned int)(*(_DWORD *)&v6[4 * (unsigned int)v10 + 4]
                                       + *(_DWORD *)&v6[4 * (unsigned int)v10 + 260]) )
    {
      v20 = 3LL;
      v21 = &v27;
      v22 = KiProcessorIndexToNumberMappingTable[(unsigned int)v10] & 0x3F;
      do
      {
        *(_QWORD *)v21++ &= ~(1LL << v22);
        --v20;
      }
      while ( v20 );
    }
    v18 = KiProcessorIndexToNumberMappingTable[(unsigned int)v10];
    *(_DWORD *)((char *)v15 + 186) = 0;
    *((_WORD *)v15 + 95) = 0;
    *((_WORD *)v15 + 92) = v18 >> 6;
    v15[22] = 1LL << (v18 & 0x3F);
    v19 = (_QWORD *)*i;
    v10 = i[1];
    if ( *(_QWORD **)(*i + 8LL) != i || *(_QWORD **)v10 != i )
      __fastfail(3u);
    *(_QWORD *)v10 = v19;
    v19[1] = v10;
LABEL_15:
    ;
  }
  return v10;
}
