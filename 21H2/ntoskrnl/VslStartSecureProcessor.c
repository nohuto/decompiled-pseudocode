/*
 * XREFs of VslStartSecureProcessor @ 0x140890458
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x1404F53F0 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslStartSecureProcessor(int a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rax
  __int64 **v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // edi
  __int64 *v9[10]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v10[10]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v11[14]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v10, 0, 0x48uLL);
  memset(v11, 0, 0x68uLL);
  memset(v9, 0, 0x48uLL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x54736D56u);
  v5 = (__int64 **)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v7 = *(_QWORD *)(KeLoaderBlock_0 + 136);
  *PoolWithTag = a1;
  PoolWithTag[1] = *(unsigned __int8 *)(v7 + 209) | (*(unsigned __int8 *)(v7 + 208) << 8);
  *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)a2;
  *((_OWORD *)PoolWithTag + 3) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a2 + 96);
  *((_OWORD *)PoolWithTag + 9) = *(_OWORD *)(a2 + 112);
  *((_OWORD *)PoolWithTag + 10) = *(_OWORD *)(a2 + 128);
  *((_OWORD *)PoolWithTag + 11) = *(_OWORD *)(a2 + 144);
  *((_OWORD *)PoolWithTag + 12) = *(_OWORD *)(a2 + 160);
  *((_OWORD *)PoolWithTag + 13) = *(_OWORD *)(a2 + 176);
  *((_OWORD *)PoolWithTag + 14) = *(_OWORD *)(a2 + 192);
  *((_OWORD *)PoolWithTag + 15) = *(_OWORD *)(a2 + 208);
  result = VslpLockPagesForTransfer((__int64)v10, (struct _MDL *)(v7 - 384), 0xB080u, 2, 2u);
  if ( (int)result >= 0 )
  {
    v5[1] = v10[0];
    v5[2] = v10[7];
    *((PHYSICAL_ADDRESS *)v5 + 3) = MmGetPhysicalAddress(*(PVOID *)(a2 + 176));
    v8 = VslpLockPagesForTransfer((__int64)v9, (struct _MDL *)v5, 0x100u, 0, 0);
    if ( v8 >= 0 )
    {
      v11[1] = v9[0];
      v11[2] = v9[7];
      v8 = VslpEnterIumSecureMode(2u, 2, 0, (__int64)v11);
      VslpUnlockPagesForTransfer(v9);
    }
    VslpUnlockPagesForTransfer(v10);
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v8;
  }
  return result;
}
