/*
 * XREFs of ??0AUTO_TGO@@IEAA@XZ @ 0x1C0015860
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettings @ 0x1C016570C (DrvChangeDisplaySettings.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0167244 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::AUTO_TGO(AUTO_TGO *this)
{
  int v2; // eax

  *(_QWORD *)this = &AUTO_TGO::`vftable';
  v2 = PushThreadGuardedObject((char *)this + 16, this, AUTO_TGO::_DisposeThis);
  *((_DWORD *)this + 2) = v2;
  if ( !v2 )
    WdLogSingleEntry0(1LL);
  return this;
}
