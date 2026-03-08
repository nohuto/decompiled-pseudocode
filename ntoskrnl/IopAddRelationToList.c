/*
 * XREFs of IopAddRelationToList @ 0x14086207C
 * Callers:
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x14087CBE8 (PnpInvalidateRelationsInList.c)
 *     IopMergeRelationLists @ 0x140969AC4 (IopMergeRelationLists.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x14086210C (PipIsDeviceInDeviceObjectList.c)
 *     PipDeviceObjectListAdd @ 0x140862180 (PipDeviceObjectListAdd.c)
 */

__int64 __fastcall IopAddRelationToList(_BYTE *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdx
  unsigned int v7; // r11d
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( !a2 || !*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) )
    return 3221225486LL;
  if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*(_QWORD *)a1, a2, &v11) )
  {
    v9 = v11;
    v10 = *(_DWORD *)(v11 + 8);
    if ( (int)v7 > v10 )
      v10 = v7;
    *(_DWORD *)(v11 + 8) = v10;
    if ( a4 == 1 )
    {
      ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
      *(_DWORD *)(v9 + 16) |= 1u;
    }
    return 3221225525LL;
  }
  else
  {
    result = PipDeviceObjectListAdd(a1, v6, v7, a4);
    if ( (int)result >= 0 )
      a1[8] = 0;
  }
  return result;
}
