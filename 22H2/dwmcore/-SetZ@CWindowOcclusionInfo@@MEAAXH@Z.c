/*
 * XREFs of ?SetZ@CWindowOcclusionInfo@@MEAAXH@Z @ 0x1800E2D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowOcclusionInfo::SetZ(CWindowOcclusionInfo *this, int a2)
{
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 7) = a2;
  *((_DWORD *)this + 6) = a2;
}
