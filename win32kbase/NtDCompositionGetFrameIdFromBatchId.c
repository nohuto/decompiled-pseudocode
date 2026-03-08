/*
 * XREFs of NtDCompositionGetFrameIdFromBatchId @ 0x1C000A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F334 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameIdFromBatchId(unsigned int a1, int a2, unsigned __int64 *a3)
{
  struct DirectComposition::CApplicationChannel *v5; // r8
  unsigned __int64 v6; // r14
  signed int v7; // ebx
  unsigned __int64 v8; // xmm0_8
  __m128i v10; // [rsp+20h] [rbp-18h]
  struct DirectComposition::CApplicationChannel *v11; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v11 = 0LL;
  v6 = 0LL;
  v7 = a3 == 0LL ? 0xC000000D : 0;
  if ( a3 )
  {
    v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v11);
    v5 = v11;
  }
  if ( v7 >= 0 )
  {
    v10 = *(__m128i *)((char *)v5 + 16 * (a2 & 0x7F) + 536);
    v8 = _mm_srli_si128(v10, 8).m128i_u64[0];
    if ( _mm_cvtsi128_si32(v10) == a2 )
      v6 = v8;
    if ( !v6 )
      v7 = -1073741275;
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
  }
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741275 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v6;
  }
  return (unsigned int)v7;
}
