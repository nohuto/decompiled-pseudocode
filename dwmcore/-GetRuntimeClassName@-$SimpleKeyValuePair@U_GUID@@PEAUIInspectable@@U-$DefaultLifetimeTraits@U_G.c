/*
 * XREFs of ?GetRuntimeClassName@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180292A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.Collections.IKeyValuePair`2<Guid, Object>", 0x3Cu, a2);
}
