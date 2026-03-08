/*
 * XREFs of ?GetResourceMarshaler@CBaseAnimationMarshaler@DirectComposition@@UEAAPEAVCResourceMarshaler@2@XZ @ 0x1C00BFD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DirectComposition::CResourceMarshaler *__fastcall DirectComposition::CBaseAnimationMarshaler::GetResourceMarshaler(
        DirectComposition::CBaseAnimationMarshaler *this)
{
  return (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
}
