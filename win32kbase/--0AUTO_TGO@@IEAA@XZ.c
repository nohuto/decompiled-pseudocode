/*
 * XREFs of ??0AUTO_TGO@@IEAA@XZ @ 0x1C0027230
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettings @ 0x1C019249C (DrvChangeDisplaySettings.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0193FD4 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0044340 (PushThreadGuardedObject.c)
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
