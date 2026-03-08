/*
 * XREFs of ?ResetInputThreadMmcss@CInputManager@@UEAAJXZ @ 0x1800C83B0
 * Callers:
 *     ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x1800C8360 (-ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::ResetInputThreadMmcss(CInputManager *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x5Fu, 0LL);
  }
  return v2;
}
