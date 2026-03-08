/*
 * XREFs of ?SetBufferProperty@CManipulationTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00BCED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetBufferProperty(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // r8d

  v6 = 0;
  if ( a5 != 12 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    *((_QWORD *)this + 9) = *(_QWORD *)a4;
    *((_DWORD *)this + 20) = a4[2];
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x80u;
    return v6;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a4;
    *((_DWORD *)this + 23) = a4[2];
    goto LABEL_6;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      *(_QWORD *)((char *)this + 108) = *(_QWORD *)a4;
      *((_DWORD *)this + 29) = a4[2];
      goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  *((_QWORD *)this + 12) = *(_QWORD *)a4;
  *((_DWORD *)this + 26) = a4[2];
LABEL_6:
  *a6 = 1;
  *((_DWORD *)this + 4) &= ~0x80u;
  return v6;
}
