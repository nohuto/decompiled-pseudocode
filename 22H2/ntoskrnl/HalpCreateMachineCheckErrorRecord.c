/*
 * XREFs of HalpCreateMachineCheckErrorRecord @ 0x1404B9A40
 * Callers:
 *     HalpCreateErrorRecord @ 0x1404B9A00 (HalpCreateErrorRecord.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x1404B9BA8 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCreateMcaProcessorErrorRecord @ 0x1404B9E1C (HalpCreateMcaProcessorErrorRecord.c)
 *     HalpMcaAMDIsMemoryError @ 0x1404BD0E4 (HalpMcaAMDIsMemoryError.c)
 */

__int64 __fastcall HalpCreateMachineCheckErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // bx
  char v9; // r14
  unsigned int v10; // ecx
  int v11; // eax
  int McaMemoryErrorRecord; // eax
  unsigned int v13; // ebx
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_WORD *)(a2 + 120);
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v9 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    v10 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 96)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << (v10 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v9 = 1;
  }
  v11 = *(_DWORD *)(a2 + 84);
  if ( v11 != 1 )
  {
    if ( v11 != 2 || !(unsigned __int8)HalpMcaAMDIsMemoryError(a2 + 80, v4) )
      goto LABEL_8;
LABEL_18:
    McaMemoryErrorRecord = HalpCreateMcaMemoryErrorRecord(a1, a2, a3, a4);
    goto LABEL_9;
  }
  if ( (v4 & 0xEF80) == 0x80 || (v4 & 0xEF00) == 0x100 && (v4 & 3) == 2 && (unsigned __int8)v4 >> 4 == 7 )
    goto LABEL_18;
LABEL_8:
  McaMemoryErrorRecord = HalpCreateMcaProcessorErrorRecord(a1, a2, a3, a4);
LABEL_9:
  v13 = McaMemoryErrorRecord;
  if ( McaMemoryErrorRecord >= 0 && (*(_QWORD *)(a2 + 120) & 0x2000000000000000LL) != 0 && *(_DWORD *)(a3 + 12) == 2 )
    *(_DWORD *)(a3 + 104) |= 1u;
  if ( v9 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v13;
}
