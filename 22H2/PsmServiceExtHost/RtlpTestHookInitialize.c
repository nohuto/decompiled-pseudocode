/*
 * XREFs of RtlpTestHookInitialize @ 0x180043390
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     NtClose_0 @ 0x180044EFC (NtClose_0.c)
 */

__int64 RtlpTestHookInitialize()
{
  int v1; // r8d
  int v2; // ecx
  void *KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+70h] [rbp+37h] BYREF

  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18008D720;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 9u, &ObjectAttributes) >= 0
    && NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_18008D710,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x18u,
         &ResultLength) >= 0 )
  {
    RtlpUserPolicies = *(_QWORD *)&KeyValueInformation[12];
    v1 = 1049601;
    if ( KeyValueInformation[12] > 0x14u || !_bittest(&v1, KeyValueInformation[12]) )
      LOBYTE(RtlpUserPolicies) = 0;
    if ( BYTE1(RtlpUserPolicies) > 0x14u || !_bittest(&v1, BYTE1(RtlpUserPolicies)) )
      BYTE1(RtlpUserPolicies) = 0;
    if ( BYTE2(RtlpUserPolicies) > 0x14u || (v2 = 1082401, !_bittest(&v2, BYTE2(RtlpUserPolicies))) )
      BYTE2(RtlpUserPolicies) = 0;
  }
  if ( KeyHandle )
    NtClose_0(KeyHandle);
  return 0LL;
}
