/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180098BA8
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18001B290 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180023860 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023990 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800967C4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097B98 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180098AC0 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector3 *a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = 0;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 76) )
    {
      if ( *((_DWORD *)this + 16) )
      {
        v6 = *((_DWORD *)this + 18);
        if ( _bittest(&v6, a2) )
        {
          v7 = *((_QWORD *)this + 2);
          v13 = *(_QWORD *)a3;
          v8 = *(_QWORD *)(v7 + 1240);
          v14 = *((_DWORD *)a3 + 2);
          v9 = *(_QWORD *)(v8 + 40);
          v15[0] = *(unsigned int *)(v3 + 76);
          v15[1] = *((unsigned int *)this + 16);
          v10 = CoreUICallSend(v9, v15, 2LL, 14LL, 3, &unk_180339473, a2, &v13);
          v4 = v10;
          if ( v10 == -2018375675 )
          {
            return 0;
          }
          else if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x14Au, 0LL);
          }
        }
      }
    }
  }
  return v4;
}
