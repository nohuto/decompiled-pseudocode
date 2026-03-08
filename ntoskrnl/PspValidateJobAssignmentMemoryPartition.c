/*
 * XREFs of PspValidateJobAssignmentMemoryPartition @ 0x140700D44
 * Callers:
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x140797010 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspValidateJobAssignmentMemoryPartition(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx

  switch ( a4 )
  {
    case 4:
      if ( *(_QWORD *)(a1 + 1272) == a1 + 1272
        && !*(_QWORD *)(a1 + 1776)
        && *(_QWORD *)(a3 + 1296)
        && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1776LL)
        && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1776LL) != -1LL
        && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1776LL) != *(_QWORD *)(a3 + 2520) )
      {
        return 0;
      }
      break;
    case 6:
      return 1;
    case 7:
LABEL_7:
      if ( *(_QWORD *)(a1 + 1776) )
        return *(_QWORD *)(a2 + 1776) == 0LL;
      return 1;
  }
  v5 = *(_QWORD *)(a1 + 1776);
  if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_QWORD *)(a3 + 2520) == v5 || a3 == *(_QWORD *)(v5 + 112) )
  {
    if ( ((a4 - 4) & 0xFFFFFFFC) != 0 )
      return 1;
    goto LABEL_7;
  }
  return 0;
}
