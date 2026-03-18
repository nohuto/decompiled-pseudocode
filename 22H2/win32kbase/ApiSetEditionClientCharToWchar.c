/*
 * XREFs of ApiSetEditionClientCharToWchar @ 0x1C0205C48
 * Callers:
 *     xxxInternalToUnicode @ 0x1C006BCF0 (xxxInternalToUnicode.c)
 * Callees:
 *     IsEditionHandleAltTabCancelSupported @ 0x1C00B6E00 (IsEditionHandleAltTabCancelSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionClientCharToWchar(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int16 v4; // bx

  v4 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 && qword_1C0296828 )
    return (unsigned __int16)qword_1C0296828(a1, a2);
  return v4;
}
