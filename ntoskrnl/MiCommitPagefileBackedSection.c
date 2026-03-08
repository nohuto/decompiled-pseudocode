/*
 * XREFs of MiCommitPagefileBackedSection @ 0x14078D374
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     MiChargeSegmentCommit @ 0x1407F1988 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiCommitPagefileBackedSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rsi
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 ProtoPteAddress; // r14
  BOOL v16; // eax
  ULONG_PTR v17; // rbx
  __int64 result; // rax
  ULONG_PTR v19; // rsi
  ULONG_PTR i; // rcx
  __int64 v21; // rax
  ULONG_PTR v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23[8]; // [rsp+48h] [rbp-40h] BYREF

  v9 = *(unsigned int *)(a2 + 48);
  v22 = 0LL;
  v11 = a3;
  v23[0] = 0LL;
  if ( (a5 | MmCompatibleProtectionMask[(v9 >> 7) & 7] | 0x700) != (MmCompatibleProtectionMask[(v9 >> 7) & 7] | 0x700) )
    return 3221225550LL;
  v13 = a3 >> 12;
  v14 = a4 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a2, a3 >> 12, 0, &v22);
  MiGetProtoPteAddress(a2, v14, 0, v23);
  v16 = MiVadPureReserve(a2);
  v17 = v22;
  if ( v16 )
  {
    v19 = v22;
    for ( i = v22; ; i = v19 )
    {
      result = MiAddViewsForSection(i, 1uLL, 8);
      if ( (int)result < 0 )
        break;
      if ( v19 == v23[0] )
      {
        if ( !ProtoPteAddress )
        {
          v21 = MiGetProtoPteAddress(a2, v13, 0, &v22);
          v17 = v22;
          ProtoPteAddress = v21;
        }
        v11 = a3;
        goto LABEL_3;
      }
      v19 = *(_QWORD *)(v19 + 16);
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)MiChargeSegmentCommit(v17, ProtoPteAddress, v14 - v13 + 1) )
      return MiSetProtectionOnSection(a1, a2, v11, a4, a5, 0, a8, a9);
    else
      return 3221225773LL;
  }
  return result;
}
