/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800AE6E4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2730 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(CWindowData **this)
{
  CWindowData *v1; // rdx

  v1 = this[96];
  if ( v1 )
  {
    *((_DWORD *)v1 + 154) = *((_DWORD *)this + 154);
    *(_OWORD *)((char *)this[96] + 620) = *(_OWORD *)((char *)this + 620);
    *(_OWORD *)((char *)this[96] + 636) = *(_OWORD *)((char *)this + 636);
    *(_OWORD *)((char *)this[96] + 652) = *(_OWORD *)((char *)this + 652);
    *(_OWORD *)((char *)this[96] + 668) = *(_OWORD *)((char *)this + 668);
  }
  CWindowData::~CWindowData(this);
}
