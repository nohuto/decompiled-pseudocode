/*
 * XREFs of PspIumAllocatePartitionState @ 0x140583924
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MmAllocateSecureKernelPages @ 0x140553614 (MmAllocateSecureKernelPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePartitionState(__int64 a1)
{
  ULONG_PTR **v2; // rsi
  _DWORD *PoolWithTag; // rax
  PVOID v4; // rbx
  unsigned int v6; // eax
  ULONG_PTR *v7; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v9; // [rsp+58h] [rbp+10h]

  v8 = 0;
  v2 = *(ULONG_PTR ***)(a1 + 16);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x70507549u);
  v4 = PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  PoolWithTag[22] = 0;
  PoolWithTag[1] = 0;
  *((_QWORD *)PoolWithTag + 1) = v2;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 < 8 )
    v6 = 8;
  *((_DWORD *)v4 + 38) = v6;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_WORD *)v4 + 52) = 8 * ((((unsigned __int64)((unsigned __int16)v4 & 0xFFF) + 4263) >> 12) + 6);
  *((_WORD *)v4 + 53) = 0;
  *((_QWORD *)v4 + 16) = (unsigned __int64)v4 & 0xFFFFFFFFFFFFF000uLL;
  *((_DWORD *)v4 + 35) = (unsigned __int16)v4 & 0xFFF;
  *((_DWORD *)v4 + 34) = 168;
  MiProbeAndLockPages((__int64)v4 + 96, 0, 1u);
  v7 = MmAllocateSecureKernelPages(v2, *((unsigned int *)v4 + 38), 1u, 1, &v8);
  *((_QWORD *)v4 + 20) = v7;
  if ( v7 )
  {
    *((_DWORD *)v4 + 39) = *((_DWORD *)v4 + 38);
    if ( v2 )
      ObfReferenceObjectWithTag(v2, 0x746C6644u);
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = *((_QWORD *)v4 + 18);
    return 0LL;
  }
  else
  {
    if ( (*((_BYTE *)v4 + 106) & 2) != 0 )
      MmUnlockPages((PMDL)v4 + 2);
    ExFreePoolWithTag(v4, 0);
    return 3221225626LL;
  }
}
