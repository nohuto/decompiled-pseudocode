/*
 * XREFs of ?SetIntegerProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C025CA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetIntegerProperty(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 1 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 20) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 20) = a4;
    *a5 = 1;
  }
  return result;
}
