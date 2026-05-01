/*
 * XREFs of ?CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ @ 0x1804EAA2C
 * Callers:
 *     s_OnDrawItem @ 0x1804EB6E0 (s_OnDrawItem.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C0284 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall Microsoft::WRL::Wrappers::CompatibleDC::CheckValidity(
        Microsoft::WRL::Wrappers::CompatibleDC *this)
{
  signed int result; // eax

  result = 0;
  if ( !*((_QWORD *)this + 1) )
    return ResultFromKnownLastError();
  return result;
}
