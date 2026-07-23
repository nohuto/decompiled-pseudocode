/*
 * XREFs of RtlpHpSegSetExtraPresent @ 0x140595278
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140594C0C (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x14034D020 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x140595900 (RtlpHpVsChunkSetExtraPresent.c)
 */

unsigned __int64 __fastcall RtlpHpSegSetExtraPresent(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int8 v5; // dl
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx

  result = RtlpHpSegDescriptorValidate(a1, a2);
  v5 = *(_BYTE *)(result + 24) & 0xC;
  if ( v5 < 8u )
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  else
  {
    v6 = result & *(_QWORD *)v4;
    v7 = ((__int64)(result - v6) >> 5 << *(_BYTE *)(v4 + 8)) + v6;
    if ( v5 == 8 )
    {
      v8 = WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v7 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v7 >> 12);
      result = 0x4000LL;
      *(_WORD *)(v8 + v3 - 2) |= 0x4000u;
    }
    else
    {
      return RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(v4 + 32), v3, v6, v7);
    }
  }
  return result;
}
