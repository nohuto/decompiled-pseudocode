/*
 * XREFs of ?Initialize@CAccent@@MEAAJXZ @ 0x180042110
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800286E0 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 74) = 6;
  *((_BYTE *)this + 312) = 0;
  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0xC4u);
  return v2;
}
