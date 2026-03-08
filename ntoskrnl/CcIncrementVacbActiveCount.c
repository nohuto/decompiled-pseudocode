/*
 * XREFs of CcIncrementVacbActiveCount @ 0x140335D80
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x14021B360 (CcGetVirtualAddressIfMapped.c)
 *     CcGetVacbMiss @ 0x140335850 (CcGetVacbMiss.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
    KeBugCheckEx(0x34u, 0xAECuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (_WORD)result == 1 )
    _InterlockedAdd((volatile signed __int32 *)(v1 + 552), 1u);
  return result;
}
