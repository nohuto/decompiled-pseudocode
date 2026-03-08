/*
 * XREFs of ?AddRef@?$ValueReference@I@@W7EAAKXZ @ 0x18011AD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ValueReference<unsigned int>::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *>,Microsoft::WRL::FtmBase>::AddRef(a1 - 8);
}
