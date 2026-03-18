/*
 * XREFs of ApiSetEditionFindThreadPointerData @ 0x1C00E7700
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0089C90 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C00E4920 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01B9DB0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionFindThreadPointerData(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( qword_1C0296A00 && (int)qword_1C0296A00() >= 0 && qword_1C0296A08 )
    return qword_1C0296A08(a1, a2);
  return v2;
}
