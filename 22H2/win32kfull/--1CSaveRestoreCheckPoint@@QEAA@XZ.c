/*
 * XREFs of ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C00C1048
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00C115C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

void __fastcall CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint(CSaveRestoreCheckPoint *this)
{
  _OWORD *v1; // rbx
  __int64 v2; // rdx
  _QWORD *v3; // r9
  __int64 v4; // rax
  _OWORD *Prop; // rax

  v1 = (_OWORD *)((char *)this + 8);
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 8)) )
  {
    LOBYTE(v2) = 1;
    v4 = HMValidateHandleNoSecure(*v3, v2);
    if ( v4 )
    {
      Prop = (_OWORD *)GetProp(v4, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( Prop )
        *Prop = *v1;
    }
  }
}
