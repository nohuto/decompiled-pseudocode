/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x1406556E8
 * Callers:
 *     PspIumAllocatePartitionState @ 0x1405A34F0 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionPages @ 0x1405A3A2C (PspIumFreePartitionPages.c)
 *     PspIumFreePartitionState @ 0x1405A3B3C (PspIumFreePartitionState.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140236884 (MiPartitionObjectToPartition.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiFreeSecureKernelPage @ 0x1406543B4 (MiFreeSecureKernelPage.c)
 */

void __fastcall MmFreeNonChargedSecurePages(void **BugCheckParameter2, int a2, unsigned int a3, ULONG_PTR *a4)
{
  __int64 v4; // r12
  ULONG_PTR *v8; // r15
  void ***v9; // rdi
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax
  _BYTE v16[4]; // [rsp+30h] [rbp-A9h] BYREF
  ULONG_PTR v17; // [rsp+34h] [rbp-A5h] BYREF
  ULONG_PTR BugCheckParameter2a[22]; // [rsp+40h] [rbp-99h] BYREF

  v4 = a3;
  v16[0] = 0;
  memset(BugCheckParameter2a, 0, sizeof(BugCheckParameter2a));
  LODWORD(v17) = 0;
  v8 = &a4[v4];
  v9 = MiPartitionObjectToPartition(BugCheckParameter2, 1, v16);
  v11 = (unsigned int)v4;
  if ( a4 < v8 )
  {
    do
    {
      MiFreeSecureKernelPage(*a4, (__int64)v9, 0, (ULONG_PTR)BugCheckParameter2a, &v17);
      if ( !a2 && _InterlockedDecrement64((volatile signed __int64 *)v9 + 57) < 0 )
        KeBugCheckEx(0x1Au, 0x42403uLL, (ULONG_PTR)v9, 0LL, 0LL);
      ++a4;
    }
    while ( a4 < v8 );
    if ( (_DWORD)v17 )
    {
      BugCheckParameter2a[0] = 0LL;
      BugCheckParameter2a[4] = 0LL;
      BugCheckParameter2a[5] = (unsigned int)((_DWORD)v17 << 12);
      LOWORD(BugCheckParameter2a[1]) = 8 * ((BugCheckParameter2a[5] >> 12) + 6);
      WORD1(BugCheckParameter2a[1]) = 2;
      MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2a, 0);
    }
  }
  if ( !a2 )
    goto LABEL_20;
  MiReturnCommit((__int64)v9, (unsigned int)v4, v10);
  if ( v9 != (void ***)MiSystemPartition
    || (CurrentPrcb = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_18:
    if ( v11 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 2160, v11);
    goto LABEL_20;
  }
  if ( (unsigned __int64)(v4 + CachedResidentAvailable) > 0x100 || (unsigned int)v4 >= 0x80000uLL )
  {
LABEL_15:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v11 = (int)CachedResidentAvailable - 192 + (unsigned __int64)(unsigned int)v4;
    }
    goto LABEL_18;
  }
  while ( 1 )
  {
    v15 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            v4 + CachedResidentAvailable,
            CachedResidentAvailable);
    v14 = (_DWORD)CachedResidentAvailable == v15;
    LODWORD(CachedResidentAvailable) = v15;
    if ( v14 )
      break;
    if ( v15 == -1 || (unsigned __int64)(v4 + v15) > 0x100 )
      goto LABEL_15;
  }
LABEL_20:
  if ( v16[0] )
    PsDereferencePartition((__int64)v9[25]);
}
