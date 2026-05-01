/*
 * XREFs of ??1?$tuple@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@V123@@std@@QEAA@XZ @ 0x180147BCC
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$0 @ 0x18014CE78 (_RequestNotificationPinConsentAsync$_ResumeCoro$2_--_1_--dtor$0.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall std::tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
        __int64 a1)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 24);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
}
