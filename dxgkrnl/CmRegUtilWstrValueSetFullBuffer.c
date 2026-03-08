/*
 * XREFs of CmRegUtilWstrValueSetFullBuffer @ 0x1C0393E34
 * Callers:
 *     PpRegStateUpdateStackCreationSettings @ 0x1C03936FC (PpRegStateUpdateStackCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C005D324 (WdmlibRtlInitUnicodeStringEx.c)
 */

int __fastcall CmRegUtilWstrValueSetFullBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ULONG DataSize)
{
  int result; // eax
  void *Data; // r9
  void *v7; // r10
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Security");
  if ( result >= 0 )
    return ZwSetValueKey(v7, &DestinationString, 0, 3u, Data, DataSize);
  return result;
}
