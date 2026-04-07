/*
 * XREFs of ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x18009B9BC
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009C57C (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18009B6E8 (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateRectAnimation(
        CAnimatedGlassSheet *this,
        const struct tagRECT *a2,
        float a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  int started; // eax
  struct tagRECT v10; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  if ( !EqualRect(a2, (const RECT *)this + 25) )
  {
    v6 = *((_QWORD *)this + 14);
    v7 = *((_QWORD *)this + 15);
    *(_QWORD *)&v10.left = v6;
    v10.right = v7 + v6;
    v10.bottom = HIDWORD(v6) + HIDWORD(v7);
    started = CAnimatedGlassSheet::StartRectAnimation(this, &v10, a2, a3);
    v5 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x16Bu);
  }
  return v5;
}
