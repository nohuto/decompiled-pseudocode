/*
 * XREFs of ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405BEE44
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020037C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(__int64 a1)
{
  __int64 Pool2; // rax
  signed __int64 v4; // rsi

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6568), -1LL, 0LL) )
    return 3221226614LL;
  Pool2 = ExAllocatePool2(64LL, 4 * (((unsigned __int64)*(unsigned int *)(a1 + 6212) + 31) >> 5) + 24, 2001956211LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_DWORD *)(Pool2 + 8) = *(_DWORD *)(a1 + 6212);
    *(_QWORD *)(Pool2 + 16) = Pool2 + 24;
    RtlSetAllBits((PRTL_BITMAP)(Pool2 + 8));
    _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6568), v4, -1LL);
    return 0LL;
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 6568), 0LL);
    return 3221225626LL;
  }
}
