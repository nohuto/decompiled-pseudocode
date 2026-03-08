/*
 * XREFs of ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0251F90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x1C0251D98 (-SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetIntegerProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int a4,
        bool *a5)
{
  unsigned int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d

  v5 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        if ( a4 > 2 )
          return (unsigned int)-1073741811;
        v8 = *((_DWORD *)this + 28);
        if ( v8 != a4 )
        {
          v8 = a4;
          *a5 = 1;
          *((_DWORD *)this + 4) |= 0x40u;
        }
        *((_DWORD *)this + 28) = v8;
        break;
      case 2:
        if ( a4 > 2 )
          return (unsigned int)-1073741811;
        v7 = *((_DWORD *)this + 29);
        if ( v7 != a4 )
        {
          v7 = a4;
          *a5 = 1;
          *((_DWORD *)this + 4) |= 0x40u;
        }
        *((_DWORD *)this + 29) = v7;
        break;
      case 3:
        if ( a4 <= 2 )
        {
          v6 = *((_DWORD *)this + 30);
          if ( v6 != a4 )
          {
            v6 = a4;
            *a5 = 1;
            *((_DWORD *)this + 4) |= 0x40u;
          }
          *((_DWORD *)this + 30) = v6;
          return v5;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetBoolProperty(this, 0LL, a3, a4 != 0, a5);
    }
  }
  else
  {
    v9 = *((_DWORD *)this + 26);
    if ( v9 != a4 )
    {
      v9 = a4;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
    }
    *((_DWORD *)this + 26) = v9;
  }
  return v5;
}
