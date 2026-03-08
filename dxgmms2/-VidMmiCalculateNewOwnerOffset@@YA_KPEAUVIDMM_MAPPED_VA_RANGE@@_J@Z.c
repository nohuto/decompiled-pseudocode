/*
 * XREFs of ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00B4824
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C009C8A0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidMmiCalculateNewOwnerOffset(struct VIDMM_MAPPED_VA_RANGE *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = *((_QWORD *)a1 + 15);
  result = a2 + *((_QWORD *)a1 + 9);
  if ( v2 )
    return *((_QWORD *)a1 + 14) + (result - *((_QWORD *)a1 + 14)) % (v2 << 12);
  return result;
}
