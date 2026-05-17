/*
 * XREFs of RtlpHpSegSetExtraPresent @ 0x18006B318
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x18006B2A4 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x180022944 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x18006B380 (RtlpHpVsChunkSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpSegSetExtraPresent(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 v5; // dl
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx

  result = RtlpHpSegDescriptorValidate(a1, a2);
  v5 = *(_BYTE *)(result + 24) & 0xC;
  if ( v5 < 8u )
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  else
  {
    v6 = result & *(_QWORD *)a1;
    v7 = ((result - v6) >> 5 << *(_BYTE *)(a1 + 8)) + v6;
    if ( v5 == 8 )
    {
      v8 = WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v7 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v7 >> 12);
      result = 0x4000LL;
      *(_WORD *)(v8 + a2 - 2) |= 0x4000u;
    }
    else
    {
      return RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(a1 + 32), a2, v6, v7);
    }
  }
  return result;
}
