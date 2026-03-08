/*
 * XREFs of VslStartSecureProcessor @ 0x14094009C
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x140542250 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     KeIsKernelCetEnabled @ 0x140384804 (KeIsKernelCetEnabled.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslStartSecureProcessor(int a1, __int64 a2)
{
  _DWORD *Pool2; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  struct _MDL *v8; // r14
  int v9; // edi
  __int64 *v10[10]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v11[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v12[14]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v11, 0, 0x48uLL);
  memset(v12, 0, 0x68uLL);
  memset(v10, 0, 0x48uLL);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 280LL, 1416850774LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v7 = *(_QWORD *)(KeLoaderBlock_0 + 136);
  *Pool2 = a1;
  v8 = (struct _MDL *)(v7 - 384);
  Pool2[1] = *(unsigned __int8 *)(v7 + 209) | (*(unsigned __int8 *)(v7 + 208) << 8);
  if ( KeIsKernelCetEnabled() )
  {
    *((_QWORD *)v5 + 4) = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3720LL);
    *((_QWORD *)v5 + 5) = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3728LL);
    *((PHYSICAL_ADDRESS *)v5 + 6) = MmGetPhysicalAddress(*(PVOID *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3728LL));
  }
  *(_OWORD *)(v5 + 14) = *(_OWORD *)a2;
  *(_OWORD *)(v5 + 18) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v5 + 22) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v5 + 26) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v5 + 30) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v5 + 34) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(v5 + 38) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(v5 + 42) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(v5 + 46) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(v5 + 50) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(v5 + 54) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(v5 + 58) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(v5 + 62) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(v5 + 66) = *(_OWORD *)(a2 + 208);
  result = VslpLockPagesForTransfer((__int64)v11, v8, 0xC080u, 2, 2u);
  if ( (int)result >= 0 )
  {
    *((__int64 **)v5 + 1) = v11[0];
    *((__int64 **)v5 + 2) = v11[7];
    *((PHYSICAL_ADDRESS *)v5 + 3) = MmGetPhysicalAddress(*(PVOID *)(a2 + 176));
    v9 = VslpLockPagesForTransfer((__int64)v10, (struct _MDL *)v5, 0x118u, 0, 0);
    if ( v9 >= 0 )
    {
      v12[1] = v10[0];
      v12[2] = v10[7];
      v9 = VslpEnterIumSecureMode(2u, 2, 0, (__int64)v12);
      VslpUnlockPagesForTransfer(v10);
    }
    VslpUnlockPagesForTransfer(v11);
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v9;
  }
  return result;
}
