/*
 * XREFs of PopCheckDisabledReason @ 0x14082B178
 * Callers:
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x140760968 (PopGetReasonListByReasonCode.c)
 */

char __fastcall PopCheckDisabledReason(int a1)
{
  __int64 ReasonListByReasonCode; // rcx
  char v2; // r10
  char v4; // al

  ReasonListByReasonCode = PopGetReasonListByReasonCode(a1);
  if ( ReasonListByReasonCode )
  {
    v4 = v2;
    if ( *(_BYTE *)(ReasonListByReasonCode + 19) != v2 )
      return 1;
    return v4;
  }
  return v2;
}
