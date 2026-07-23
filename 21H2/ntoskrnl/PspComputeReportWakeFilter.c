/*
 * XREFs of PspComputeReportWakeFilter @ 0x1405DA738
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1405DA488 (PspFreezeJobTree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspComputeReportWakeFilter(_DWORD *a1, __int64 a2, _QWORD *a3, char a4)
{
  int v4; // eax
  __int64 result; // rax

  *(_QWORD *)a2 = *a3;
  if ( a4 )
  {
    *(_DWORD *)a2 &= ~a1[238];
    *(_DWORD *)(a2 + 4) &= ~a1[239];
  }
  v4 = a1[240] & *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v4;
  result = (unsigned int)~v4;
  a1[240] &= result;
  return result;
}
