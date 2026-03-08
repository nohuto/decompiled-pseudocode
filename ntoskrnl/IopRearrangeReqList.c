/*
 * XREFs of IopRearrangeReqList @ 0x14085097C
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406F6080 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpRestoreResourcesInternal @ 0x14096A7C4 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     qsort @ 0x1403D48B0 (qsort.c)
 */

unsigned __int64 __fastcall IopRearrangeReqList(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 *v3; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned int v7; // edx
  unsigned int v8; // eax

  v1 = 0LL;
  if ( *(_DWORD *)(a1 + 32) > 1u )
  {
    v7 = 0;
    do
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v7 + 40) + 4LL) = v7;
      ++v7;
      v8 = *(_DWORD *)(a1 + 32);
    }
    while ( v7 < v8 );
    v3 = (unsigned __int64 *)(a1 + 40);
    qsort((void *)(a1 + 40), v8, 8uLL, IopCompareReqAlternativePriority);
  }
  else
  {
    v3 = (unsigned __int64 *)(a1 + 40);
  }
  result = *(unsigned int *)(a1 + 32);
  v5 = v3;
  v6 = (unsigned __int64)&v3[result];
  if ( (unsigned __int64)v3 < v6 )
  {
    do
    {
      result = *v5;
      if ( *(_DWORD *)*v5 > 0x7FFFu )
        break;
      ++v5;
    }
    while ( (unsigned __int64)v5 < v6 );
  }
  if ( v5 != v3 )
    v1 = v5;
  *(_QWORD *)(a1 + 24) = v1;
  return result;
}
