/*
 * XREFs of MiFreeInitializationCode @ 0x14072A51C
 * Callers:
 *     MiFreeDriverInitialization @ 0x140729EFC (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140B65494 (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140B71424 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiReturnResident @ 0x1402A52C8 (MiReturnResident.c)
 *     MiUnlockLoaderEntry @ 0x1402A6ACC (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402A6B58 (MiLockLoaderEntry.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     MiGetControlAreaPartition @ 0x14031F9F0 (MiGetControlAreaPartition.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     MiVaToPfnEx @ 0x140384AD0 (MiVaToPfnEx.c)
 *     MiFreeLargeInitializationCodePages @ 0x140391BEC (MiFreeLargeInitializationCodePages.c)
 *     KeReservePrivilegedPages @ 0x1403D1570 (KeReservePrivilegedPages.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiBadRefCount @ 0x14064B094 (MiBadRefCount.c)
 *     MiFreeBootDriverPages @ 0x140B3C044 (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiFreeInitializationCode(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int16 *ControlAreaPartition; // rbp
  char *AnyMultiplexedVm; // rax
  char v18; // dl
  __int64 v19; // r10
  unsigned __int64 v20; // rbx
  __int64 result; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // r14
  int v27; // eax
  _OWORD v28[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v29; // [rsp+50h] [rbp-58h]
  __int64 v30; // [rsp+60h] [rbp-48h]
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+10h]

  v30 = 0LL;
  v6 = a1;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  if ( a4 )
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 48);
    v7 = a1 + 160;
    v8 = a1;
  }
  v9 = (__int64)(a2 << 25) >> 16;
  BugCheckParameter3 = ((__int64)(a3 - a2) >> 3) + 1;
  v10 = BugCheckParameter3;
  v11 = (__int64)(a2 - MiGetPteAddress(v6)) >> 3;
  if ( !a4 )
  {
    MiLockLoaderEntry(v7, 0);
    RtlClearBits(*(PRTL_BITMAP *)(v7 + 112), v11, BugCheckParameter3);
    MiUnlockLoaderEntry(v7, 0);
  }
  v12 = 0LL;
  v13 = &qword_140C65598;
  while ( *(_QWORD *)(*v13 + 48) != v6 )
  {
    v12 = (unsigned int)(v12 + 1);
    ++v13;
    if ( (_DWORD)v12 )
      goto LABEL_8;
  }
  RtlSetBitsEx((__int64)&unk_140C655A0 + 16 * v12, (unsigned int)v11, BugCheckParameter3);
LABEL_8:
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v23 = (__int64)(a2 << 25) >> 16;
    if ( BugCheckParameter3 )
    {
      do
      {
        v24 = MiVaToPfnEx(v23);
        v25 = 48 * v24 - 0x220000000000LL;
        if ( *(_WORD *)(v25 + 32) != 1 )
          MiBadRefCount(v25);
        v26 = v10;
        if ( 512 - (v24 & 0x1FF) <= v10 )
          v26 = 512 - (v24 & 0x1FF);
        if ( (MiFlags & 0xC000) == 0xC000 )
        {
          v27 = KeReservePrivilegedPages();
          if ( v27 < 0 )
            KeBugCheckEx(0x1Au, 0x1211BuLL, v23, v26, v27);
        }
        MiFreeLargeInitializationCodePages(v25, v24, v26);
        v23 += v26 << 12;
        v10 -= v26;
      }
      while ( v10 );
    }
    ControlAreaPartition = MiSystemPartition;
  }
  else if ( a4 )
  {
    MiFreeBootDriverPages(v6, a2, BugCheckParameter3, 1, 0LL);
    ControlAreaPartition = MiSystemPartition;
    if ( v6 == PsNtosImageBase )
      MxKernelFreedGapCharges += BugCheckParameter3;
    else
      MxHalFreedGapCharges += BugCheckParameter3;
  }
  else
  {
    v14 = *(_QWORD *)(v8 + 112);
    if ( v14 )
    {
      v15 = MiSectionControlArea(v14);
      ControlAreaPartition = (unsigned __int16 *)MiGetControlAreaPartition(v15);
    }
    else
    {
      ControlAreaPartition = MiSystemPartition;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v19, a2, BugCheckParameter3, v18, v28);
  }
  v20 = v29;
  if ( (_QWORD)v29 )
  {
    *(_QWORD *)(v7 + 40) -= v29;
    *(_QWORD *)(v7 + 48) -= v20;
    if ( v6 == PsHalImageBase || v6 == PsNtosImageBase )
      qword_140C69628 -= v29;
    else
      _InterlockedExchangeAdd(&dword_140C69650, -(int)v20);
    MiReturnResident((__int64)ControlAreaPartition, v20);
    MiReturnCommit((__int64)ControlAreaPartition, v20 - *((_QWORD *)&v28[0] + 1), v22);
  }
  result = (unsigned __int16)MiFlags & 0xC000;
  if ( (_DWORD)result == 49152 )
  {
    result = MI_IS_PHYSICAL_ADDRESS(v9);
    if ( !(_DWORD)result )
    {
      result = KeReservePrivilegedPages();
      if ( (int)result < 0 )
        KeBugCheckEx(0x1Au, 0x1211AuLL, v9, BugCheckParameter3, (int)result);
    }
  }
  return result;
}
