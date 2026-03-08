/*
 * XREFs of KiRemoveCpuPartitionAssignmentProcess @ 0x140295BA0
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x140295B18 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405725AC (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiRemoveCpuPartitionAssignmentProcess(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  _QWORD *result; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // r9
  _QWORD *v8; // r11
  __int64 v9; // r11
  _QWORD *v10; // r9
  _QWORD *v11; // r8

  v2 = (_QWORD *)(a1 + 1056);
  result = *(_QWORD **)(a1 + 1056);
  while ( result )
  {
    v4 = result;
    v5 = result;
    if ( result == v2 )
      break;
    result = (_QWORD *)*result;
    v6 = v5 - 2;
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_11;
    v8 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v8 != v6
      || (*v8 = v7, *(_QWORD *)(v7 + 8) = v8, v9 = *v4, *(_QWORD **)(*v4 + 8LL) != v4)
      || (v10 = (_QWORD *)v4[1], (_QWORD *)*v10 != v4)
      || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = *(_QWORD **)(a2 + 8), *v11 != a2) )
    {
LABEL_11:
      __fastfail(3u);
    }
    *v6 = a2;
    v6[1] = v11;
    *v11 = v6;
    *(_QWORD *)(a2 + 8) = v6;
  }
  return result;
}
