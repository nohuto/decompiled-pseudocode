/*
 * XREFs of ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x1800C8360
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetInputThreadMmcss@CInputManager@@UEAAJXZ @ 0x1800C83B0 (-ResetInputThreadMmcss@CInputManager@@UEAAJXZ.c)
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x1800C83F4 (-TriggerMmcss@CKst@@QEAAJXZ.c)
 */

__int64 __fastcall CGlobalInputManager::ResetInputThreadMmcss(CKst **this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  CKst *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = CInputManager::ResetInputThreadMmcss((CInputManager *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x40u, 0LL);
  }
  else
  {
    v5 = this[41];
    if ( v5 )
    {
      v6 = CKst::TriggerMmcss(v5);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x45u, 0LL);
    }
  }
  return v4;
}
