/*
 * XREFs of RIMInitOneCoreEditionData @ 0x1C0056A44
 * Callers:
 *     RIMInitialize @ 0x1C0056920 (RIMInitialize.c)
 * Callees:
 *     <none>
 */

__int64 RIMInitOneCoreEditionData()
{
  __int64 result; // rax
  int v1; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v4 = 0;
  DestinationString = 0LL;
  v3 = dword_1C028F6FC;
  RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
  result = ZwQueryLicenseValue(&DestinationString, &v5, &v3, 4LL, &v4);
  v1 = dword_1C028F6FC;
  if ( (int)result >= 0 )
    v1 = v3;
  dword_1C028F6FC = v1;
  return result;
}
