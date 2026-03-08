/*
 * XREFs of PipDeviceObjectListIndexOf @ 0x140862130
 * Callers:
 *     PipIsDeviceInDeviceObjectList @ 0x14086210C (PipIsDeviceInDeviceObjectList.c)
 *     IopMergeRelationLists @ 0x140969AC4 (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x140969C34 (IopRemoveRelationFromList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipDeviceObjectListIndexOf(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // r10d
  _QWORD *v5; // rax

  v4 = 0;
  if ( a3 <= 0 )
  {
LABEL_5:
    v4 = -1;
    if ( a4 )
      *a4 = 0LL;
  }
  else
  {
    v5 = (_QWORD *)(a1 + 16);
    while ( a2 != *v5 )
    {
      ++v4;
      v5 += 3;
      if ( v4 >= a3 )
        goto LABEL_5;
    }
    if ( a4 )
      *a4 = a1 + 8 * (3LL * v4 + 2);
  }
  return (unsigned int)v4;
}
