/*
 * XREFs of SleepstudyHelperSetBlockerVerboseDescription @ 0x14099F0E0
 * Callers:
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140726450 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperSetBlockerVerboseDescription(
        _QWORD *a1,
        __int16 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  __int64 v5; // rbp
  unsigned __int16 *v9; // rsi
  unsigned int v10; // ecx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r10d
  unsigned __int16 *v17; // r8
  unsigned int v18; // r9d
  __int64 Pool2; // rax
  __int64 v20; // rdi
  unsigned int v21; // ebx
  __int64 v22; // r8
  unsigned int v23; // r15d
  int *v24; // rbx
  __int64 v25; // r8
  int v26; // eax

  v5 = a4;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( !*((_QWORD *)a3 + 1) )
    return (unsigned int)-1073741811;
  v9 = a5;
  if ( a4 )
  {
    if ( !a5 )
      return (unsigned int)-1073741811;
  }
  if ( a1[8] )
    return (unsigned int)-1073741791;
  v11 = 4 * a4;
  v12 = -1;
  v13 = v5;
  if ( (unsigned __int64)(4 * v5) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v14 = v11 + 12;
  if ( v11 + 12 >= v11 )
    v12 = v11 + 12;
  v10 = v14 < v11 ? 0xC0000095 : 0;
  if ( v14 >= v11 )
  {
    if ( v12 <= 0x10 )
      v12 = 16;
    v15 = v12 + *a3;
    if ( v15 < v12 )
      return (unsigned int)-1073741675;
    v16 = 0;
    if ( (_DWORD)v5 )
    {
      v17 = a5;
      v18 = v15;
      while ( *((_QWORD *)v17 + 1) )
      {
        v15 = v18 + *v17;
        if ( v15 < v18 )
          return (unsigned int)-1073741675;
        ++v16;
        v17 += 8;
        v18 = v15;
        if ( v16 >= (unsigned int)v5 )
          goto LABEL_20;
      }
      return (unsigned int)-1073741811;
    }
LABEL_20:
    Pool2 = ExAllocatePool2(256LL, v15, *(unsigned int *)(*a1 + 24LL));
    v20 = Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 4) = a2;
      v21 = 4 * v5 + 12;
      *(_DWORD *)Pool2 = v5;
      if ( v21 <= 0x10 )
        v21 = 16;
      v22 = *a3 >> 1;
      *(_DWORD *)(Pool2 + 8) = v22;
      memmove((void *)(Pool2 + v21), *((const void **)a3 + 1), 2 * v22);
      v23 = v21 + 2 * *(_DWORD *)(v20 + 8);
      if ( (_DWORD)v5 )
      {
        v24 = (int *)(v20 + 12);
        do
        {
          v25 = *v9 >> 1;
          *v24 = v25;
          memmove((void *)(v20 + v23), *((const void **)v9 + 1), 2 * v25);
          v26 = *v24++;
          v9 += 8;
          v23 += 2 * v26;
          --v13;
        }
        while ( v13 );
      }
      a1[8] = v20;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v10;
}
