/*
 * XREFs of BmlCompareWireFormat @ 0x1C03B8AA0
 * Callers:
 *     BmlCompareTargetModes @ 0x1C016E704 (BmlCompareTargetModes.c)
 * Callees:
 *     BmlCompareSingleWireFormatType @ 0x1C03B86BC (BmlCompareSingleWireFormatType.c)
 */

__int64 __fastcall BmlCompareWireFormat(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // r10^1
  char v6; // r11^1
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  unsigned int v10; // r11d

  if ( a1 == a2 )
    WdLogSingleEntry0(1LL);
  result = BmlCompareSingleWireFormatType(
             (*(_DWORD *)(a1 + 128) >> 2) & 0x3F,
             (unsigned __int8)*(_DWORD *)(a2 + 128) >> 2);
  if ( !(_DWORD)result )
  {
    result = BmlCompareSingleWireFormatType(v5 & 0x3F, v6 & 0x3F);
    if ( !(_DWORD)result )
    {
      result = BmlCompareSingleWireFormatType((v7 >> 14) & 0x3F, (v8 >> 14) & 0x3F);
      if ( !(_DWORD)result )
        return BmlCompareSingleWireFormatType((v9 >> 20) & 0x3F, (v10 >> 20) & 0x3F);
    }
  }
  return result;
}
