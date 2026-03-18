/*
 * XREFs of ?Initialize@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00BE290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::Initialize(DirectComposition::CInteractionMarshaler *this)
{
  *((_DWORD *)this + 70) = (unsigned int)PsGetCurrentProcessId();
  return 0LL;
}
