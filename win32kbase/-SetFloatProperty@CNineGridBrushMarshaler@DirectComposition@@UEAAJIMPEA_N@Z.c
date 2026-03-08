/*
 * XREFs of ?SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00B3220
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0006C90 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetFloatProperty(
        DirectComposition::CNineGridBrushMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v6; // eax
  __int64 v7; // rcx

  v4 = 0;
  *a4 = 0;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v6 = 0x2000;
        v7 = 108LL;
        break;
      case 3u:
        v6 = 64;
        v7 = 80LL;
        break;
      case 4u:
        v6 = 1024;
        v7 = 84LL;
        break;
      case 5u:
        v6 = 256;
        v7 = 96LL;
        break;
      case 6u:
        v6 = 4096;
        v7 = 100LL;
        break;
      case 8u:
        v6 = 128;
        v7 = 88LL;
        break;
      case 9u:
        v6 = 2048;
        v7 = 92LL;
        break;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    }
  }
  else
  {
    v6 = 512;
    v7 = 104LL;
  }
  if ( (DirectComposition::CNineGridBrushMarshaler *)((char *)this + v7) )
  {
    *(float *)((char *)this + v7) = a3;
    *((_DWORD *)this + 4) |= v6;
    *a4 = 1;
  }
  return v4;
}
