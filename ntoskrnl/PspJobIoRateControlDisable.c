/*
 * XREFs of PspJobIoRateControlDisable @ 0x1406F6E38
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140752E58 (PspSetJobIoRateControl.c)
 * Callees:
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x1402919C8 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     PspIoRateEntryDeactivate @ 0x1407552BC (PspIoRateEntryDeactivate.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspJobIoRateControlDisable(__int64 a1)
{
  unsigned int v1; // edi
  PVOID v3; // rbx
  __int64 v5; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1656) )
  {
    PspIoRateEntryDeactivate(a1 + 1616);
    v1 = 1;
  }
  P[1] = P;
  P[0] = P;
  PspJobIoRateVolumeEntryRemoveAll(a1, (__int64)P);
  while ( 1 )
  {
    v3 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v5 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v5 + 8) = P;
    PspIoRateEntryDeactivate(v3);
    ExFreePoolWithTag(v3, 0);
    ++v1;
  }
  return v1;
}
