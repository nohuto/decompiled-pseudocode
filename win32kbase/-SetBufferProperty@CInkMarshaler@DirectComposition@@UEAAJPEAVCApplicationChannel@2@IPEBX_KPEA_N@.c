/*
 * XREFs of ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C024FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C024F9CC (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0250050 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetBufferProperty(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        const struct D2D1_INK_BEZIER_SEGMENT *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  int v11; // eax

  v6 = 0;
  *a6 = 0;
  if ( a3 >= 6 )
  {
    if ( a4 && a5 == 36 * (a5 / 0x24) )
      return (unsigned int)DirectComposition::CInkMarshaler::SetSegments(this, a3 - 6, a4, a5 / 0x24, a6);
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)a4;
LABEL_21:
    *((_DWORD *)this + 4) &= ~0x20u;
    goto LABEL_17;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( !a4 || a5 != 28 )
      return (unsigned int)-1073741811;
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)a4;
    *((_QWORD *)this + 11) = *((_QWORD *)a4 + 2);
    *((_DWORD *)this + 24) = *((_DWORD *)a4 + 6);
    goto LABEL_21;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 2 && a4 && a5 == 36 && *((_QWORD *)this + 17) )
        return (unsigned int)DirectComposition::CInkMarshaler::SetSegments(this, *((_DWORD *)this + 34) - 1, a4, 1u, a6);
    }
    else if ( a4 && a5 == 36 * (a5 / 0x24) )
    {
      return (unsigned int)DirectComposition::CInkMarshaler::AddSegments(this, a4, a5 / 0x24, a6);
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 || a5 != 12 )
    return (unsigned int)-1073741811;
  *(_QWORD *)((char *)this + 100) = *(_QWORD *)a4;
  v11 = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 4) &= ~0x40u;
  *((_DWORD *)this + 27) = v11;
LABEL_17:
  *a6 = 1;
  return v6;
}
