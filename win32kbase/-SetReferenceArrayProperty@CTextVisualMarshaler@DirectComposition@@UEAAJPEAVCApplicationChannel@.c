/*
 * XREFs of ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C025D020
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00AA160 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0252C70 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 */

__int64 __fastcall DirectComposition::CTextVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( !a3 )
  {
    result = DirectComposition::CResourceMarshalerArrayBase::Set(
               (DirectComposition::CTextVisualMarshaler *)((char *)this + 376),
               a2,
               (__int64)a4,
               a5,
               35);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 112) |= 2u;
    goto LABEL_11;
  }
  if ( a3 == 1 )
  {
    result = DirectComposition::CResourceMarshalerArrayBase::Set(
               (DirectComposition::CTextVisualMarshaler *)((char *)this + 400),
               a2,
               (__int64)a4,
               a5,
               43);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 112) |= 4u;
    goto LABEL_11;
  }
  if ( a3 != 2 )
    return DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
  result = DirectComposition::CResourceMarshalerArrayBase::Set(
             (DirectComposition::CTextVisualMarshaler *)((char *)this + 424),
             a2,
             (__int64)a4,
             a5,
             43);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 112) |= 8u;
LABEL_11:
    *a6 = 1;
  }
  return result;
}
