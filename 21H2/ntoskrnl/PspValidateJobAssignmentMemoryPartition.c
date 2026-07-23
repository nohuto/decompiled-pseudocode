/*
 * XREFs of PspValidateJobAssignmentMemoryPartition @ 0x1406F5F64
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1406F519C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspValidateJobAssignmentMemoryPartition(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx

  if ( a4 == 4 )
  {
    if ( *(_QWORD *)(a1 + 1056) == a1 + 1056
      && !*(_QWORD *)(a1 + 1560)
      && *(_QWORD *)(a3 + 1296)
      && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1560LL)
      && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1560LL) != -1LL
      && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1560LL) != *(_QWORD *)(a3 + 2520) )
    {
      return 0;
    }
LABEL_3:
    v5 = *(_QWORD *)(a1 + 1560);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
      && *(_QWORD *)(a3 + 2520) != v5
      && a3 != *(_QWORD *)(v5 + 104) )
    {
      return 0;
    }
    return ((a4 - 4) & 0xFFFFFFFC) != 0 || a4 == 6 || !*(_QWORD *)(a1 + 1560) || !*(_QWORD *)(a2 + 1560);
  }
  if ( (unsigned int)(a4 - 6) > 1 )
    goto LABEL_3;
  return ((a4 - 4) & 0xFFFFFFFC) != 0 || a4 == 6 || !*(_QWORD *)(a1 + 1560) || !*(_QWORD *)(a2 + 1560);
}
