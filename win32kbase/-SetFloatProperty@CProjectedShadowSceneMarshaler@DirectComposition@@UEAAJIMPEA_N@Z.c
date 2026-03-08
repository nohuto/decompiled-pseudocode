/*
 * XREFs of ?SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C000CE80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0006C90 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetFloatProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  *a4 = 0;
  switch ( a2 )
  {
    case 0u:
      *((_DWORD *)this + 4) |= 0x1000u;
      *((float *)this + 26) = a3;
      goto LABEL_8;
    case 3u:
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 27) = a3;
      goto LABEL_8;
    case 4u:
      *((_DWORD *)this + 4) |= 0x2000u;
      *((float *)this + 28) = a3;
      goto LABEL_8;
    case 5u:
      *((_DWORD *)this + 4) |= 0x800u;
      *((float *)this + 29) = a3;
      goto LABEL_8;
    case 6u:
      *((_DWORD *)this + 4) |= 0x4000u;
      *((float *)this + 30) = a3;
      goto LABEL_8;
    case 7u:
      *((_DWORD *)this + 4) |= 0x8000u;
      *((float *)this + 31) = a3;
LABEL_8:
      *a4 = 1;
      return 0LL;
  }
  return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
