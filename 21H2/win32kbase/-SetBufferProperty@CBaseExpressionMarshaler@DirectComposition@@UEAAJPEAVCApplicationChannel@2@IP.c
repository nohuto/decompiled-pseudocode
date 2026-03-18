/*
 * XREFs of ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A8F60
 * Callers:
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A8E90 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C022AB30 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?SetBufferProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0234390 (-SetBufferProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 * Callees:
 *     DirectComposition::Memory::Allocate_1 @ 0x1C00EA21C (DirectComposition--Memory--Allocate_1.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v10; // rax
  _OWORD *v11; // rax

  v6 = 0;
  if ( a3 != 5 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 12) )
    return (unsigned int)-1073741790;
  if ( a5 == 12 )
  {
    if ( *a4 != 1 )
      return (unsigned int)-1073741811;
    v10 = DirectComposition::Memory::Allocate_1(0xCuLL);
    if ( v10 )
    {
      *((_QWORD *)this + 12) = v10;
      *(_QWORD *)v10 = *(_QWORD *)a4;
      *(_DWORD *)(v10 + 8) = a4[2];
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 == 16 )
  {
    if ( *a4 != 2 )
      return (unsigned int)-1073741811;
    v11 = (_OWORD *)DirectComposition::Memory::Allocate_1(0x10uLL);
    if ( v11 )
    {
      *((_QWORD *)this + 12) = v11;
      *v11 = *(_OWORD *)a4;
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
LABEL_6:
  *((_DWORD *)this + 4) &= ~0x40u;
  *a6 = 1;
  return v6;
}
