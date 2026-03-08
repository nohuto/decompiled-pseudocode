/*
 * XREFs of ExpStampPoolEntryWithQuotaProcess @ 0x1402951BC
 * Callers:
 *     ExpStampPoolWithQuotaProcess @ 0x140295114 (ExpStampPoolWithQuotaProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpStampPoolEntryWithQuotaProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
    return -1LL;
  result = a1 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a2 ^ ExpPoolQuotaCookie ^ a1;
  return result;
}
