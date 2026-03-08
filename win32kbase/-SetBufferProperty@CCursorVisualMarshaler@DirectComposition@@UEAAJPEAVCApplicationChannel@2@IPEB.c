/*
 * XREFs of ?SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A7380 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::SetBufferProperty(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 )
  {
    return (unsigned int)DirectComposition::CVisualMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  else if ( a4 && a5 == 8 )
  {
    v7 = *(_QWORD *)a4;
    *((_DWORD *)this + 97) |= 2u;
    *((_QWORD *)this + 47) = v7;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
