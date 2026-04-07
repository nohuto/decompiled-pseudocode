/*
 * XREFs of ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x1800A2B50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x1800A2A20 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x1800A2AF4 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::UpdateTransition(CTextTetherVisual *this)
{
  int updated; // eax
  int v3; // edi
  __int64 v4; // rax

  updated = CTextTetherVisual::UpdateInstructions(this);
  v3 = updated;
  if ( updated >= 0 )
  {
    v4 = *((_QWORD *)this + 37);
    if ( v4 && *(_BYTE *)(v4 + 72) )
      CTextTetherVisual::Stop(this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x104u);
  }
  if ( v3 < 0 )
    CTextTetherVisual::Stop(this);
  return (unsigned int)v3;
}
