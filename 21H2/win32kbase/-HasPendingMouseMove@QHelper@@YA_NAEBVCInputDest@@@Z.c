/*
 * XREFs of ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C004BCDC
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C004BC3C (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0044484 (QHelper--_anonymous_namespace_--GetQ.c)
 */

char __fastcall QHelper::HasPendingMouseMove(QHelper *this, const struct CInputDest *a2)
{
  __int64 v2; // rax
  char v3; // cl

  v2 = QHelper::_anonymous_namespace_::GetQ((__int64)this);
  v3 = 0;
  if ( v2 )
    return (*(_DWORD *)(v2 + 388) & 0x20) != 0;
  return v3;
}
