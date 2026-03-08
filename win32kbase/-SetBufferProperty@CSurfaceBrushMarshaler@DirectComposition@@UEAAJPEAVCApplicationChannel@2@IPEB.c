/*
 * XREFs of ?SetBufferProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00AFE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetBufferProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  __int128 v8; // xmm0
  int v10; // r8d
  char v11; // al
  char v12; // al

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    v10 = v7 - 6;
    if ( v10 )
    {
      if ( v10 == 1 && a4 && a5 == 1 )
      {
        v11 = *a4;
        *((_DWORD *)this + 4) |= 0x1000u;
        *((_BYTE *)this + 121) = v11;
        goto LABEL_5;
      }
    }
    else if ( a4 && a5 == 1 )
    {
      v12 = *a4;
      *((_DWORD *)this + 4) |= 0x800u;
      *((_BYTE *)this + 120) = v12;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 || a5 != 16 )
    return (unsigned int)-1073741811;
  v8 = *(_OWORD *)a4;
  *((_DWORD *)this + 4) |= 0x20u;
  *(_OWORD *)((char *)this + 88) = v8;
LABEL_5:
  *a6 = 1;
  return v6;
}
