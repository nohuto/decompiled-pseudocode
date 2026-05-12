/*
 * XREFs of RaidPrepareSrbForReuse @ 0x1C0073010
 * Callers:
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0018774 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C0018A6C (RaidBusEnumeratorAllocateReportLunsResources.c)
 * Callees:
 *     memset @ 0x1C0020480 (memset.c)
 */

__int64 __fastcall RaidPrepareSrbForReuse(unsigned int *a1)
{
  __int64 v1; // rdi
  char v2; // r8
  int v3; // ebx
  unsigned int v4; // ebp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // r12d
  __int64 v10; // r9
  __int64 v11; // r13
  size_t v12; // r15
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ebx
  int v18; // ecx
  int v19; // ebx

  v1 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( *((_BYTE *)a1 + 2) != 40 )
  {
    v6 = *((_QWORD *)a1 + 4);
    v7 = *((_QWORD *)a1 + 7);
    result = (__int64)memset(a1, 0, 0x58uLL);
    *((_QWORD *)a1 + 4) = v6;
    *((_QWORD *)a1 + 7) = v7;
    return result;
  }
  v9 = a1[14];
  v10 = 0LL;
  v11 = *((_QWORD *)a1 + 13);
  v12 = a1[4];
  v13 = a1[30];
  if ( !v9 )
    goto LABEL_12;
  while ( 1 )
  {
    v14 = a1[v10 + 30];
    if ( (unsigned int)v14 >= 0x80 && (unsigned int)v14 <= (unsigned int)v12 )
      break;
LABEL_18:
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v9 )
      goto LABEL_12;
  }
  v15 = (unsigned int)v14;
  v16 = *(unsigned int *)((char *)a1 + v14) - 64;
  if ( !v16 )
  {
    if ( v15 + 40 > v12 )
      goto LABEL_11;
    v3 = 64;
    goto LABEL_10;
  }
  v18 = v16 - 1;
  if ( !v18 )
  {
    if ( v15 + 56 <= v12 )
    {
      v3 = 65;
LABEL_10:
      v4 = *(unsigned int *)((char *)a1 + v15 + 4);
      v2 = 1;
      v1 = *(_QWORD *)((char *)a1 + v15 + 16);
    }
LABEL_11:
    if ( v2 )
      goto LABEL_12;
    goto LABEL_18;
  }
  if ( v18 != 1 || v15 + 40 > v12 )
    goto LABEL_11;
  v1 = *(_QWORD *)((char *)a1 + v15 + 24);
  v3 = 66;
  v4 = *(unsigned int *)((char *)a1 + v15 + 4);
LABEL_12:
  memset(a1, 0, v12);
  *((_BYTE *)a1 + 2) = 40;
  result = 8LL;
  *(_WORD *)a1 = 8;
  a1[4] = v12;
  *((_QWORD *)a1 + 13) = v11;
  a1[14] = v9;
  a1[30] = v13;
  v17 = v3 - 64;
  if ( !v17 )
  {
    *(unsigned int *)((char *)a1 + v13) = 64;
    goto LABEL_14;
  }
  v19 = v17 - 1;
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      *(unsigned int *)((char *)a1 + v13) = 66;
      *(unsigned int *)((char *)a1 + v13 + 4) = v4;
      *(_QWORD *)((char *)a1 + v13 + 24) = v1;
    }
  }
  else
  {
    *(unsigned int *)((char *)a1 + v13) = 65;
LABEL_14:
    *(unsigned int *)((char *)a1 + v13 + 4) = v4;
    *(_QWORD *)((char *)a1 + v13 + 16) = v1;
  }
  return result;
}
