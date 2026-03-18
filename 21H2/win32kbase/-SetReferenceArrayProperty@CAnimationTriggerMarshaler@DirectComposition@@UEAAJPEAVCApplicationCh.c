/*
 * XREFs of ?SetReferenceArrayProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0226BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00941A0 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 */

__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetReferenceArrayProperty(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArrayBase::Set(
             (DirectComposition::CAnimationTriggerMarshaler *)((char *)this + 88),
             a2,
             (__int64)a4,
             a5,
             0xAu);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *a6 = 1;
  }
  return result;
}
