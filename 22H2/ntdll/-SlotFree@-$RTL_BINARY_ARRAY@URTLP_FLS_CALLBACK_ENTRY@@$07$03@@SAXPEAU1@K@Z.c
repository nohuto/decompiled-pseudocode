/*
 * XREFs of ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x18007488C
 * Callers:
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180074680 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     ?RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z @ 0x180075874 (-RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  _DWORD *v3; // r10
  __int64 result; // rax

  _BitScanReverse(&v2, a2);
  v3 = *(_DWORD **)(a1 + 8LL * (v2 - 4));
  --*v3;
  result = a2;
  if ( *(_QWORD *)&v3[4 * (a2 ^ (unsigned __int64)(unsigned int)(1 << v2)) + 4] )
    NT_ASSERT("T::IsEmpty(&Chunk->Slots[SlotIndex])");
  return result;
}
