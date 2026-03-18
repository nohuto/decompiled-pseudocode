/*
 * XREFs of ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C02093B0
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

void __fastcall CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint(CSaveRestoreCheckPoint *this)
{
  _OWORD *v1; // rbx
  _QWORD *v2; // r9
  __int64 v3; // rax
  _OWORD *Prop; // rax

  v1 = (_OWORD *)((char *)this + 8);
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 8)) )
  {
    v3 = HMValidateHandleNoSecure(*v2, 1);
    if ( v3 )
    {
      Prop = (_OWORD *)GetProp(v3, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
      if ( Prop )
        *Prop = *v1;
    }
  }
}
