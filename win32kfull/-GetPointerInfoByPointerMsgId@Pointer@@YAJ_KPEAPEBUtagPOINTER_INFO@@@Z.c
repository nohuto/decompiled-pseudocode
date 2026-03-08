/*
 * XREFs of ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C014A9E6
 * Callers:
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C014AB96 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C022AA30 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Pointer::GetPointerInfoByPointerMsgId(
        Pointer *this,
        const struct tagPOINTER_INFO **a2,
        const struct tagPOINTER_INFO **a3)
{
  __int64 v5; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax
  bool v7; // zf
  __int64 result; // rax

  v5 = SGDGetUserSessionState(this);
  PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(v5 + 3424), (unsigned __int64)this);
  *a2 = PointerInfo;
  v7 = PointerInfo == 0LL;
  result = 3221225485LL;
  if ( !v7 )
    return 0LL;
  return result;
}
