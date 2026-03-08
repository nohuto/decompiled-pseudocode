/*
 * XREFs of ?SetIntegerProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0262A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetIntegerProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  v6 = a3 - 4;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( *((_BYTE *)this + 92) != (a4 != 0) )
      {
        *((_DWORD *)this + 4) |= 0x400u;
        *((_BYTE *)this + 92) = a4 != 0;
        *a5 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else if ( *((_DWORD *)this + 22) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((_DWORD *)this + 22) = a4;
    *a5 = 1;
  }
  return v5;
}
