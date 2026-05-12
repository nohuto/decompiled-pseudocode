/*
 * XREFs of RaidBusEnumeratorProbeLunZero @ 0x1C00126EC
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C0017870 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0017AB4 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0017F1C (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C001866C (RaidBusEnumeratorGetUnit.c)
 *     memset @ 0x1C0020480 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorProbeLunZero(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _BYTE v5[104]; // [rsp+30h] [rbp-68h] BYREF

  memset(v5, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v5);
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumProbeLunZeroCallback, a1, a2, (unsigned int)v5, 36);
    RaidBusEnumeratorReleaseUnit(a1, v5);
    return v5[93] == 0 ? 0xC000000E : 0;
  }
  return result;
}
