/*
 * XREFs of ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C00FB0F4
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00FB208 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
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
      Prop = (_OWORD *)GetProp(v3, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
      if ( Prop )
        *Prop = *v1;
    }
  }
}
