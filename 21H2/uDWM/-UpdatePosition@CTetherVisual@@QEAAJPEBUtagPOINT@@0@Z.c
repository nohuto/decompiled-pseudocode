/*
 * XREFs of ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800A5AA8
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18009F944 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A0434 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800A5648 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800A5834 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::UpdatePosition(
        struct tagPOINT *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  unsigned int v3; // ebx
  int updated; // eax

  v3 = 0;
  if ( a3 )
    this[38] = *a3;
  if ( a2 )
    this[37] = *a2;
  if ( a3 || a2 )
  {
    updated = CTetherVisual::UpdateInstructions((CTetherVisual *)this);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x53u);
  }
  return v3;
}
