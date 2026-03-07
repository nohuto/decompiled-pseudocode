__int64 __fastcall PnpInvalidateRelationsInList(unsigned int **a1, unsigned int a2, char a3, char a4)
{
  unsigned int **RelationList; // rsi
  unsigned int *v9; // rdx
  unsigned int i; // r8d
  __int64 v11; // rax
  _QWORD *j; // rbx
  _QWORD *v13; // r9
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  int v19; // edx
  int v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF

  Object[0] = 0LL;
  v21 = 0;
  v20 = 0;
  RelationList = (unsigned int **)IopAllocateRelationList(a2);
  if ( !RelationList )
    return 3221225626LL;
  v9 = *a1;
  for ( i = 0; i < **a1; v9 = *a1 )
  {
    v11 = i++;
    v9[6 * v11 + 8] &= ~1u;
  }
  v9[2] = 0;
  v22 = 0LL;
LABEL_5:
  while ( IopEnumerateRelations(a1, (int *)&v22, Object, &v20, &v21) )
  {
    if ( (!a3 || !v20) && !v21 )
    {
      for ( j = Object[0]; ; j = *(_QWORD **)(v17 + 32) )
      {
        if ( (unsigned int)IopSetRelationsTag(a1, j) )
        {
          if ( j )
            IopAddRelationToList(RelationList, (__int64)j, 2LL, 0);
          goto LABEL_5;
        }
        v15 = j[39];
        v16 = *(_QWORD *)(v15 + 40);
        if ( a4 )
        {
          PipClearDevNodeFlags(*(_QWORD *)(v15 + 40), 0x80000);
          v18 = *(_DWORD *)(v16 + 396);
          if ( (v18 & 0x10) != 0 )
          {
            if ( (v18 & 0x2000) != 0 && *(_DWORD *)(v16 + 404) == 47 )
            {
              v19 = 3;
            }
            else
            {
              if ( a2 != 4 )
                goto LABEL_17;
              v19 = 12;
            }
            PnpRequestDeviceAction(j, v19, 1, 0LL, 0LL, 0LL, 0LL);
          }
        }
LABEL_17:
        v17 = *(_QWORD *)(v16 + 16);
        if ( !v17 )
          goto LABEL_5;
      }
    }
  }
  v22 = 0LL;
  while ( IopEnumerateRelations(RelationList, (int *)&v22, Object, 0LL, 0LL) )
    PnpRequestDeviceAction(Object[0], 9, 0, v13, 0LL, 0LL, 0LL);
  IopFreeRelationList(RelationList);
  return 0LL;
}
