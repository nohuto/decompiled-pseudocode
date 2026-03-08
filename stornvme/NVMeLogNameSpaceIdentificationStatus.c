/*
 * XREFs of NVMeLogNameSpaceIdentificationStatus @ 0x1C001FCC0
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 * Callees:
 *     NVMeLogTelemetry @ 0x1C0008A04 (NVMeLogTelemetry.c)
 */

__int64 __fastcall NVMeLogNameSpaceIdentificationStatus(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-B0h]
  int v7; // [rsp+30h] [rbp-A8h]
  int v8; // [rsp+38h] [rbp-A0h]
  int v9; // [rsp+40h] [rbp-98h]

  result = NVMeLogTelemetry(
             a1,
             0LL,
             0LL,
             4,
             "IdentifyNameSpace",
             v6,
             v7,
             v8,
             v9,
             "ActiveNSCount",
             *(unsigned int *)(a1 + 220),
             "ActiveNSCountInNSIDList",
             a2,
             "NN",
             *(unsigned int *)(*(_QWORD *)(a1 + 1840) + 516LL),
             "MNAN",
             *(unsigned int *)(*(_QWORD *)(a1 + 1840) + 540LL),
             "MaxActiveNSID",
             *(unsigned int *)(a1 + 232),
             "MaxActiveNSIDInNSIDList",
             a3,
             "ActiveNSIDListStatus",
             a4,
             0LL,
             0LL);
  if ( *(_BYTE *)(a1 + 22) )
    return StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return result;
}
