/*
 * XREFs of _GetUnpackagedAppPinnableItem_::_1_::dtor$0 @ 0x18013A76C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800A1338 (--1-$com_ptr@UIStream@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall GetUnpackagedAppPinnableItem_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return winrt::com_ptr<IStream>::~com_ptr<IStream>(*(_QWORD **)(a2 + 96));
  }
  return result;
}
