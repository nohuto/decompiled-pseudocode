/*
 * XREFs of ?InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z @ 0x1800475A0
 * Callers:
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180047440 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B140 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800431F8 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 */

__int64 __fastcall CGlobalLightSet::InsertUdwmDCompVisualBetween(
        CGlobalLightSet *this,
        struct CVisual **a2,
        struct CVisual *a3,
        struct CVisual *a4)
{
  VisualCollection *v7; // rbp
  int inserted; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !CGlobalLightSet::ValidateUdwmDCompVisual(this, (struct UdwmDcompVisual *)a2) )
    return 0LL;
  if ( *((struct CVisual **)a4 + 3) == a3 )
  {
    v7 = (struct CVisual *)((char *)a3 + 32);
    inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)a3 + 32), a2[2], a4, 1u, 1);
    if ( inserted < 0 )
    {
      v10 = 325LL;
    }
    else
    {
      inserted = VisualCollection::Remove(v7, a4);
      if ( inserted < 0 )
      {
        v10 = 328LL;
      }
      else
      {
        inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)a2[6] + 32), a4, 0LL, 0, 1);
        if ( inserted >= 0 )
          return 0LL;
        v10 = 329LL;
      }
    }
  }
  else
  {
    inserted = -2147024809;
    v10 = 322LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
