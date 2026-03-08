/*
 * XREFs of ?SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C0252730 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetBufferProperty(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArrayBase::Copy(
             (DirectComposition::CParticleBaseBehaviorMarshaler *)((char *)this + 56),
             a4,
             a5,
             0x18uLL,
             0x61714344u);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x20u;
  }
  return result;
}
