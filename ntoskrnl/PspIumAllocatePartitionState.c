/*
 * XREFs of PspIumAllocatePartitionState @ 0x1405A34F0
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     MmAllocateNonChargedSecurePages @ 0x140654ECC (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1406556E8 (MmFreeNonChargedSecurePages.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePartitionState(__int64 a1)
{
  void *v2; // r14
  int v3; // r15d
  __int64 Pool2; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int v8; // ecx
  __int64 v9; // r9
  int v10; // eax
  PVOID *v11; // r12
  __int64 v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+70h] [rbp+8h] BYREF
  void *v14; // [rsp+78h] [rbp+10h]
  __int64 v15; // [rsp+80h] [rbp+18h]
  __int64 v16; // [rsp+88h] [rbp+20h]

  v2 = *(void **)(a1 + 16);
  v14 = v2;
  v3 = 0;
  v13 = 0;
  Pool2 = ExAllocatePool2(64LL, 168LL, 1884321097LL);
  v5 = Pool2;
  v15 = Pool2;
  v6 = Pool2;
  v16 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = v2;
  v8 = *(_DWORD *)(a1 + 24);
  if ( v8 < 8 )
    v8 = 8;
  *(_DWORD *)(Pool2 + 152) = v8;
  v12 = Pool2 + 96;
  *(_QWORD *)(Pool2 + 96) = 0LL;
  *(_WORD *)(Pool2 + 104) = 8 * (((unsigned __int16)((Pool2 & 0xFFF) + 4263) >> 12) + 6);
  *(_WORD *)(Pool2 + 106) = 0;
  *(_QWORD *)(Pool2 + 128) = Pool2 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(Pool2 + 140) = Pool2 & 0xFFF;
  *(_DWORD *)(Pool2 + 136) = 168;
  MiProbeAndLockPages((_DWORD *)(Pool2 + 96), 0, 1);
  v9 = ExAllocatePool2(64LL, 8LL * *(unsigned int *)(v5 + 152), 1632662857LL);
  *(_QWORD *)(v5 + 160) = v9;
  if ( v9
    && (v13 = *(_DWORD *)(v5 + 152),
        MmAllocateNonChargedSecurePages(v2, 1LL, &v13, v9, v12),
        v10 = *(_DWORD *)(v5 + 152),
        v3 = v13,
        v10 == v13) )
  {
    *(_DWORD *)(v5 + 156) = v10;
    if ( v2 )
      ObfReferenceObjectWithTag(v2, 0x746C6644u);
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v5 + 144);
    return 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(v5 + 106) & 2) != 0 )
      MmUnlockPages((PMDL)(v5 + 96));
    if ( v3 )
    {
      v11 = (PVOID *)(v5 + 160);
      MmFreeNonChargedSecurePages((ULONG_PTR)v2);
    }
    else
    {
      v11 = (PVOID *)(v6 + 160);
    }
    if ( *v11 )
      ExFreePoolWithTag(*v11, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
    return 3221225626LL;
  }
}
