/*
 * XREFs of ?SetBufferProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0262720
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 */

__int64 __fastcall DirectComposition::CSnapshotMarshaler::SetBufferProperty(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int128 v9; // xmm1

  v6 = 0;
  *a6 = 0;
  if ( a3 == 4 && a5 == 64 )
  {
    if ( memcmp((char *)this + 76, a4, 0x40uLL) )
    {
      *(_OWORD *)((char *)this + 76) = *a4;
      *(_OWORD *)((char *)this + 92) = a4[1];
      *(_OWORD *)((char *)this + 108) = a4[2];
      v9 = a4[3];
      *((_DWORD *)this + 4) |= 0x20u;
      *(_OWORD *)((char *)this + 124) = v9;
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
