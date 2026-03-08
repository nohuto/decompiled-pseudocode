/*
 * XREFs of ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800AEDB0
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CD738 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
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
