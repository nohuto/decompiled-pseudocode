/*
 * XREFs of RaidBusEnumeratorIssueReportLuns @ 0x1C0017E90
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017CA4 (RaidBusEnumeratorGetLunListFromTarget.c)
 * Callees:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0018098 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C001899C (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C0018ADC (RaidBusEnumeratorAllocateReportLunsResources.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueReportLuns(
        __int64 a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned __int8 **a5)
{
  __int64 v5; // rbp
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v13; // rbx
  unsigned __int8 *v14; // r8
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1 + 64;
  v8 = 0;
  v9 = (unsigned int)*a4;
  v15 = 0LL;
  result = RaidBusEnumeratorAllocateReportLunsResources(a1, v9, a1 + 64);
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorBuildReportLuns(a1, a2, v5, (unsigned int)*a4);
    v13 = v15;
    result = RaidBusEnumeratorIssueSynchronousRequest(a1, a3, v5, v15, (char)&v15);
    if ( (int)result >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)a1 + 426LL) == 1 )
        v14 = *(unsigned __int8 **)(v13 + 64);
      else
        v14 = *(unsigned __int8 **)(v13 + 24);
      if ( (unsigned int)*a4 < (unsigned __int64)(v14[3] | ((v14[2] | ((v14[1] | (*v14 << 8)) << 8)) << 8)) + 8 )
      {
        v8 = -1073741789;
        *a4 = (v14[3] | ((v14[2] | ((v14[1] | (*v14 << 8)) << 8)) << 8)) + 8;
      }
      result = v8;
      *a5 = v14;
    }
    else if ( (_DWORD)result == -1073741789 )
    {
      return 3221225486LL;
    }
  }
  return result;
}
