/*
 * XREFs of AccessPTPEnabledStatus @ 0x1C009D120
 * Callers:
 *     EnablePTPDevices @ 0x1C015CA90 (EnablePTPDevices.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C01C0898 (RIMApiSetSetUserPTPEnabledPreference.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C009D4F4 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall AccessPTPEnabledStatus(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  void *PointerDeviceConfigurationKey; // rdi
  int Data; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  v3 = 0;
  Data = a1;
  ResultLength = 0;
  DestinationString = 0LL;
  if ( a3 )
    *a3 = 1;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(1LL, a2 != 0 ? 131097 : 131078);
  if ( PointerDeviceConfigurationKey )
  {
    RtlInitUnicodeString(&DestinationString, L"Enabled");
    if ( a2 )
    {
      if ( ZwQueryValueKey(
             PointerDeviceConfigurationKey,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) < 0
        || v12 != 4
        || v13 != 4 )
      {
        goto LABEL_11;
      }
      if ( !v14 )
        *a3 = 0;
    }
    else if ( ZwSetValueKey(PointerDeviceConfigurationKey, &DestinationString, 0, 4u, &Data, 4u) < 0 )
    {
      goto LABEL_11;
    }
    v3 = 1;
LABEL_11:
    ZwClose(PointerDeviceConfigurationKey);
  }
  return v3;
}
