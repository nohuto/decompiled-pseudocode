/*
 * XREFs of CallerHasScreenDuplicationCapability @ 0x1C0265A38
 * Callers:
 *     ?SetHandleProperty@CHolographicViewerMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0265DA0 (-SetHandleProperty@CHolographicViewerMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool CallerHasScreenDuplicationCapability()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v2; // [rsp+40h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"screenDuplication");
  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, &DestinationString, &v2) >= 0 && v2 != 0;
}
