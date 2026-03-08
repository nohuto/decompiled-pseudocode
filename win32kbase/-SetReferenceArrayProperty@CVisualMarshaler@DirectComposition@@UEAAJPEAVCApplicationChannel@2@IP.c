/*
 * XREFs of ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0252C70
 * Callers:
 *     ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C005E830 (-SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025CF10 (-SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicat.c)
 *     ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025D020 (-SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00AA160 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 46;
  if ( !v7 )
  {
    result = DirectComposition::CResourceMarshalerArrayBase::Set(
               (DirectComposition::CVisualMarshaler *)((char *)this + 320),
               a2,
               (__int64)a4,
               a5,
               36);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 92) |= 1u;
    goto LABEL_8;
  }
  if ( v7 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArrayBase::Set(
             (DirectComposition::CVisualMarshaler *)((char *)this + 344),
             a2,
             (__int64)a4,
             a5,
             36);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 92) |= 2u;
LABEL_8:
    *a6 = 1;
  }
  return result;
}
