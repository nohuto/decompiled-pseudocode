/*
 * XREFs of ?IsSamePointerFrame@CTouchProcessor@@AEAAH_K0@Z @ 0x1C01FBF44
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0092B70 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsSamePointerFrame(CTouchProcessor *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct CPointerMsgData *NonConstMsgData; // rbx
  CTouchProcessor *v6; // rcx

  v3 = 0;
  if ( !a2 || !a3 )
    return 0LL;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  LOBYTE(v3) = *((_DWORD *)NonConstMsgData + 7) == *((_DWORD *)CTouchProcessor::GetNonConstMsgData(v6, a3) + 7);
  return v3;
}
