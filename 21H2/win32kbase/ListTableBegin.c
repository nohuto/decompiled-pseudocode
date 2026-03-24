/*
 * XREFs of ListTableBegin @ 0x1C0182788
 * Callers:
 *     RIMCmActiveContactsBegin @ 0x1C017FC18 (RIMCmActiveContactsBegin.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ListTableIteratorNext @ 0x1C01828D8 (ListTableIteratorNext.c)
 */

__int64 __fastcall ListTableBegin(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 48);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 49);
  v8[0] = a2;
  v8[1] = 0LL;
  v8[2] = *(_QWORD *)a2;
  v4 = ListTableIteratorNext(v9, v8);
  v5 = *(_OWORD *)v4;
  v6 = *(_QWORD *)(v4 + 16);
  result = a1;
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
