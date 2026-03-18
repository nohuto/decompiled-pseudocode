/*
 * XREFs of ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800AF510
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AEC50 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CE198 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayManager::Initialize(CDisplayManager *this)
{
  int updated; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx

  updated = CDisplayManager::UpdateDXGIFactory(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, updated, 0x1Cu, 0LL);
  return v3;
}
