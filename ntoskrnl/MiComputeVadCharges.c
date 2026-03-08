/*
 * XREFs of MiComputeVadCharges @ 0x14034CBC4
 * Callers:
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A44E38 (MiDeleteNewlyCreatedPartialVads.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14020DC68 (MiLocateLockedVadEvent.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiResidentPagesForSpan @ 0x140784F38 (MiResidentPagesForSpan.c)
 *     MiComputeAweCharges @ 0x140A3E848 (MiComputeAweCharges.c)
 */

__int64 __fastcall MiComputeVadCharges(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  int v8; // r10d
  unsigned __int64 v9; // r9

  v2 = a1;
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = *(unsigned int *)(v2 + 52);
  LODWORD(v5) = v5 & 0x7FFFFFFF;
  v6 = v5 | v3;
  result = 0x7FFFFFFFDLL;
  if ( v6 < 0x7FFFFFFFDLL )
  {
    v8 = *(_DWORD *)(v2 + 48);
    v9 = 0LL;
    *(_QWORD *)(a2 + 16) = 136LL;
    if ( (v8 & 0x200000) == 0 && !MiVadPureReserve(v2) )
      *(_QWORD *)(a2 + 8) = 8
                          * ((*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32))
                           - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)))
                          + 8;
    result = v8 & 0x70;
    if ( (_DWORD)result == 48 )
    {
      if ( (v8 & 0x6200000) != 0x4200000 )
        v9 = MiLocateLockedVadEvent(v2, 256) + 8;
      result = MiComputeAweCharges(v2, v9);
    }
    else
    {
      if ( (_DWORD)result != 16 && (_DWORD)result != 64 )
        goto LABEL_8;
      result = MiResidentPagesForSpan(
                 (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) << 12,
                 ((*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) << 12) | 0xFFF,
                 0LL,
                 v9);
    }
    v9 = result;
LABEL_8:
    *(_QWORD *)a2 = v9;
    return result;
  }
  if ( v6 == 0x7FFFFFFFDLL )
    *(_QWORD *)(a2 + 16) = 64LL;
  return result;
}
