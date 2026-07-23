/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140A65FFC
 * Callers:
 *     MiInitializeDriverImages @ 0x140A4E6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiMarkPfnVerified @ 0x140310124 (MiMarkPfnVerified.c)
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 *     MiActOnLargeKernelHalPages @ 0x1407A1E1C (MiActOnLargeKernelHalPages.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r12
  __int64 *v2; // r14
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r8
  _DWORD *v6; // r9
  int v7; // edx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 v12; // r13
  BOOL v13; // r12d
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v16; // r15
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h]
  __int64 *v19; // [rsp+70h] [rbp+18h]

  v17 = 0LL;
  v1 = (__int64 *)(a1 + 16);
  v2 = *(__int64 **)(a1 + 16);
  v19 = (__int64 *)(a1 + 16);
  while ( 1 )
  {
    if ( v2 == v1 )
    {
      MiFlags |= 0x1000u;
      return 1LL;
    }
    v10 = v2[6];
    v8 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v10) )
      break;
    if ( (MiFlags & 0x10000) != 0 )
      MiActOnLargeKernelHalPages((char *)v10, (__int64 (__fastcall *)(char *, char *))MiValidateKernelHalLargePageRange);
LABEL_13:
    v2 = (__int64 *)*v2;
  }
  v11 = ((unsigned int)dword_140C4CCB0 >> 12)
      + (unsigned int)(((unsigned __int64)*((unsigned int *)v2 + 16) + 4095) >> 12);
  if ( (PVOID)v10 != PsHalImageBase && (PVOID)v10 != PsNtosImageBase )
    v11 = (unsigned int)(dword_140C4CC4C + v11);
  v12 = v8 + 8 * v11;
  v9 = (unsigned int)v11;
  v16 = 0LL;
  v18 = (unsigned int)v11;
  if ( v8 >= v12 )
  {
LABEL_10:
    if ( (PVOID)v10 != PsHalImageBase && (PVOID)v10 != PsNtosImageBase )
    {
      _InterlockedExchangeAdd(&dword_140C4EFD0, v11);
      qword_140C4EFB0 -= v9;
    }
    goto LABEL_13;
  }
  v13 = MiPteInShadowRange((unsigned __int64)&v17);
  do
  {
    v3 = MI_READ_PTE_LOCK_FREE(v8);
    v17 = v3;
    if ( v13
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v3 & 1) != 0
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF)) & 0x20) != 0 )
          v3 |= 0x20uLL;
      }
    }
    v4 = 48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( MiIsPfnFromSlabAllocation(v4) )
      ++v16;
    if ( v17 >= 0 )
    {
      v7 = BYTE2(MiFlags) & 1;
      *(_QWORD *)(v4 + 16) = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                           + 192);
      if ( v7 )
      {
        if ( ((*(_QWORD *)(v4 + 40) >> 60) & 7) != 3 )
          MiMarkPfnVerified(v4, 0, v5, v6);
      }
    }
    *(_BYTE *)(v4 + 35) |= 8u;
    v8 += 8LL;
  }
  while ( v8 < v12 );
  v1 = v19;
  if ( !v16 )
  {
LABEL_9:
    v9 = v18;
    goto LABEL_10;
  }
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v16, 0LL, 0) >= 0 )
  {
    qword_140C4EFB0 += v16;
    goto LABEL_9;
  }
  return 0LL;
}
