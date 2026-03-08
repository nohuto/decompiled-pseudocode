/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@234@PEAI@Z @ 0x180292400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *,1>,Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>(
           a1,
           a2,
           a3,
           a4);
}
