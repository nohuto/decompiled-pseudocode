/*
 * XREFs of CmpVEAddHiveToSIDMappingTable @ 0x1407340A0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     CmpAddStringToMapping @ 0x140734140 (CmpAddStringToMapping.c)
 */

__int64 __fastcall CmpVEAddHiveToSIDMappingTable(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rax
  unsigned __int64 v5; // r8
  _WORD *v6; // rax
  unsigned __int16 MaximumLength; // cx
  unsigned __int16 Length; // dx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(unsigned __int16 **)(a2 + 16);
  v5 = *((_QWORD *)v4 + 1);
  v6 = (_WORD *)(v5 + 2 * (((unsigned __int64)*v4 - 2) >> 1));
  if ( *v6 != 92 )
  {
    MaximumLength = DestinationString.MaximumLength;
    Length = DestinationString.Length;
    do
    {
      --v6;
      Length += 2;
      MaximumLength += 2;
    }
    while ( (unsigned __int64)v6 >= v5 && *v6 != 92 );
    DestinationString.MaximumLength = MaximumLength;
    DestinationString.Length = Length;
  }
  DestinationString.Buffer = v6 + 1;
  result = CmpAddStringToMapping(&DestinationString, a1);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 4112) |= 2u;
    return 0LL;
  }
  return result;
}
