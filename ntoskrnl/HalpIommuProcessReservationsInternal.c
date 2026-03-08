/*
 * XREFs of HalpIommuProcessReservationsInternal @ 0x14039A0E8
 * Callers:
 *     HalpIommuProcessReservations @ 0x14039A08C (HalpIommuProcessReservations.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpIommuDetermineReservedPciRid @ 0x14039A1AC (HalpIommuDetermineReservedPciRid.c)
 *     HalpIommuProcessMemoryErrata @ 0x14039A298 (HalpIommuProcessMemoryErrata.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuProcessReservationsInternal(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, unsigned int *, _QWORD); // rax
  __int64 result; // rax
  _DWORD *MemoryInternal; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))a1[43];
  v7 = 0;
  result = v2(a1[2], &v7, 0LL);
  if ( (_DWORD)result == -1073741789 )
  {
    MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(8 * v7 + 8, 1u);
    a1[69] = MemoryInternal;
    if ( MemoryInternal )
    {
      *MemoryInternal = v7;
      result = ((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))a1[43])(a1[2], &v7, a1[69] + 8LL);
      if ( (int)result >= 0 )
      {
        result = HalpIommuProcessMemoryErrata(v7, a1[69] + 8LL, a2);
        if ( (int)result >= 0 )
          return HalpIommuDetermineReservedPciRid(a1[69]);
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
