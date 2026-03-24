/*
 * XREFs of ?WritePTPProperty@@YAXW4PTPRegistryEntry@@PEAX1K@Z @ 0x1C00CC774
 * Callers:
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C016BAD4 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 * Callees:
 *     RIMRegQueryDWordFromKey @ 0x1C006C6EC (RIMRegQueryDWordFromKey.c)
 */

NTSTATUS __fastcall WritePTPProperty(int a1, void *a2, void *a3, int a4)
{
  __int64 v7; // rsi
  NTSTATUS result; // eax
  const WCHAR *v9; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  int Data; // [rsp+60h] [rbp+8h] BYREF

  Data = 0;
  v7 = 2LL * a1;
  result = RIMRegQueryDWordFromKey(a2, (&off_1C024A928)[2 * a1], a4, &Data);
  Data = a4;
  if ( result )
    a3 = a2;
  if ( a3 )
  {
    v9 = (&off_1C024A928)[v7];
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v9);
    return ZwSetValueKey(a3, &DestinationString, 0, 4u, &Data, 4u);
  }
  return result;
}
