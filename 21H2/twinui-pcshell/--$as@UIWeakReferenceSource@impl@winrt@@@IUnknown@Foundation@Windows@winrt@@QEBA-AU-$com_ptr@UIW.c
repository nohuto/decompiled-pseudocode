/*
 * XREFs of ??$as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@3@XZ @ 0x18021D0F4
 * Callers:
 *     ??0?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotification@Notifications@UI@Windows@1@@Z @ 0x18011A57C (--0-$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotific.c)
 * Callees:
 *     ??$as@UIWeakReferenceSource@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@@impl@winrt@@YA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18007229C (--$as@UIWeakReferenceSource@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@23@@im.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<winrt::impl::IWeakReferenceSource>(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  winrt::impl::as<winrt::impl::IWeakReferenceSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
    a2,
    *a1);
  return a2;
}
