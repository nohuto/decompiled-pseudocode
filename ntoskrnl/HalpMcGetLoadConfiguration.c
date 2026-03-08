/*
 * XREFs of HalpMcGetLoadConfiguration @ 0x140519574
 * Callers:
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmGetSystemRoutineAddress @ 0x1407EA850 (MmGetSystemRoutineAddress.c)
 */

__int64 __fastcall HalpMcGetLoadConfiguration(_BYTE *a1)
{
  int (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, _QWORD *); // rax
  bool v3; // sf
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v6[14]; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v7; // [rsp+C0h] [rbp+67h] BYREF

  v7 = 0;
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[1]) = 288;
  v6[2] = L"ParallelLoad";
  LODWORD(v6[4]) = 0x4000000;
  v6[3] = &v7;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (int (__fastcall *)(__int64, const wchar_t *, _QWORD *))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (int (__fastcall *)(__int64, const wchar_t *, _QWORD *))RtlQueryRegistryValues;
  v3 = SystemRoutineAddress(2LL, L"McUpdate", v6) < 0;
  result = v7;
  if ( !v3 )
    result = v7 & 1;
  *a1 = result;
  return result;
}
