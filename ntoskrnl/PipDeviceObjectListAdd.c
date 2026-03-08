/*
 * XREFs of PipDeviceObjectListAdd @ 0x140862180
 * Callers:
 *     IopAddRelationToList @ 0x14086207C (IopAddRelationToList.c)
 *     PipGrowDeviceObjectList @ 0x140969C70 (PipGrowDeviceObjectList.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PipGrowDeviceObjectList @ 0x140969C70 (PipGrowDeviceObjectList.c)
 */

__int64 __fastcall PipDeviceObjectListAdd(unsigned int **a1, void *a2, unsigned int a3, int a4)
{
  unsigned int *v4; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = *a1;
  v4 = v11;
  if ( *v11 + 1 != v11[1] || (result = PipGrowDeviceObjectList(&v11), v4 = v11, (int)result >= 0) )
  {
    v9 = 3LL * *v4;
    ObfReferenceObjectWithTag(a2, 0x4C706E50u);
    v4[2 * v9 + 8] = 0;
    *(_QWORD *)&v4[2 * v9 + 4] = a2;
    v4[2 * v9 + 6] = a3;
    if ( a4 == 1 )
    {
      v4[2 * v9 + 8] = 1;
      ++v4[2];
    }
    ++*v4;
    result = 0LL;
  }
  *a1 = v4;
  return result;
}
