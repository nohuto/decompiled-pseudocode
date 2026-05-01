/*
 * XREFs of ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x18014DAC8
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x1801B6A58 (--0bad_optional_access@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::optional<bool>::value(__int64 a1)
{
  __int128 pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  if ( !*(_BYTE *)(a1 + 1) )
  {
    pExceptionObject = 0LL;
    v3 = 0LL;
    std::bad_optional_access::bad_optional_access((std::bad_optional_access *)&pExceptionObject);
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return a1;
}
