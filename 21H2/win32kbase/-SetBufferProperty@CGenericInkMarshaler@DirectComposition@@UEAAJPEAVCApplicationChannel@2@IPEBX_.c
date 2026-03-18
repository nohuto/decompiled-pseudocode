/*
 * XREFs of ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0219370
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C0218E9C (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C021953C (-SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 */

int __fastcall DirectComposition::CGenericInkMarshaler::SetBufferProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const unsigned __int8 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int result; // eax
  __int64 v7; // xmm0_8

  result = 0;
  *a6 = 0;
  if ( !a3 )
    return DirectComposition::CGenericInkMarshaler::SetProperties(this, a4, a5, a6);
  if ( a3 == 3 )
    return DirectComposition::CGenericInkMarshaler::AddSegments(this, a4, a5, a6);
  if ( a3 != 10 || !a4 || a5 != 40 )
    return -1073741811;
  *((_OWORD *)this + 12) = *(_OWORD *)a4;
  *((_OWORD *)this + 13) = *((_OWORD *)a4 + 1);
  v7 = *((_QWORD *)a4 + 4);
  *((_DWORD *)this + 4) &= ~0x100u;
  *((_QWORD *)this + 28) = v7;
  *((_BYTE *)this + 188) = 1;
  *a6 = 1;
  return result;
}
