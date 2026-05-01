/*
 * XREFs of ?_VerifyAndPrepareLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAUIAppLayout@@@Z @ 0x1800DA510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_VerifyAndPrepareLayout(
        PPIWin32VtcLayoutOperation *this,
        struct IAppLayout *a2)
{
  return CAppLayoutOperation::_VerifyAndPrepareLayout((PPIWin32VtcLayoutOperation *)((char *)this + 24), a2, 0);
}
