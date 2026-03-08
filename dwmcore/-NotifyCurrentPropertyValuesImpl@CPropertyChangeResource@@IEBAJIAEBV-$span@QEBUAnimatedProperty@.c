/*
 * XREFs of ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800228E8
 * Callers:
 *     ?NotifyCurrentPropertyValues@CRectangleGeometry@@MEBAJI@Z @ 0x180022420 (-NotifyCurrentPropertyValues@CRectangleGeometry@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z @ 0x180022460 (-NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z @ 0x1800226A0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CViewBox@@UEBAJI@Z @ 0x180252060 (-NotifyCurrentPropertyValues@CViewBox@@UEBAJI@Z.c)
 * Callees:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097B98 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(
        CPropertyChangeResource *this,
        int a2,
        _QWORD *a3)
{
  unsigned int **v3; // rbx
  unsigned int v6; // edi
  unsigned int **v7; // rbp
  unsigned int *v8; // rsi
  char *v9; // r14
  int v11; // eax
  unsigned int v12; // ecx

  v3 = (unsigned int **)a3[1];
  v6 = 0;
  v7 = &v3[*a3];
  while ( v3 != v7 )
  {
    v8 = *v3;
    if ( _bittest(&a2, **v3) )
    {
      v9 = (char *)this + *((_QWORD *)v8 + 1);
      if ( memcmp_0(v9, *((const void **)v8 + 6), *((_QWORD *)v8 + 2)) )
      {
        v11 = CPropertyChangeResource::NotifyPropertyChanged(
                this,
                (const struct AnimationHelper::AnimatedProperty *)v8,
                v9);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x264u, 0LL);
          return v6;
        }
      }
    }
    ++v3;
  }
  return v6;
}
