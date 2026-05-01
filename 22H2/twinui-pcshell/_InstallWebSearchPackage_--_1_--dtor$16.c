/*
 * XREFs of _InstallWebSearchPackage_::_1_::dtor$16 @ 0x1800A798A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InstallWebSearchPackage_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<IStream>::~com_ptr<IStream>((_QWORD *)(a2 + 224));
}
