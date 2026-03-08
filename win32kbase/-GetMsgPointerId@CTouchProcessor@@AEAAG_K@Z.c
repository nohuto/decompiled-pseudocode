/*
 * XREFs of ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x1C01F5FAC
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01E8C20 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C01E9040 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1C01F5FE0 (-GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01F6440 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 * Callees:
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerId(CTouchProcessor *this, unsigned __int64 a2)
{
  struct CPointerMsgData *NonConstMsgData; // rax

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  if ( NonConstMsgData )
    return *((unsigned __int16 *)NonConstMsgData + 8);
  else
    return 0LL;
}
