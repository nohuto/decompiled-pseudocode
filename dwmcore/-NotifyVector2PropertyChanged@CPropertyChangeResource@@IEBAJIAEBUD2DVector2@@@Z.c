/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180097C88
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180023860 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180039D40 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800967C4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180097A04 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097B98 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector2 *a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

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
          v8 = *((_QWORD *)this + 2);
          v14 = *(_QWORD *)a3;
          v9 = *(_QWORD *)(v8 + 1240);
          v13[0] = *(unsigned int *)(v3 + 76);
          v10 = *(_QWORD *)(v9 + 40);
          v13[1] = *((unsigned int *)this + 16);
          v11 = CoreUICallSend(v10, v13, 2LL, 14LL, 2, &unk_18033946D, a2, &v14);
          v4 = v11;
          if ( v11 == -2018375675 )
          {
            return 0;
          }
          else if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x11Du, 0LL);
          }
        }
      }
    }
  }
  return v4;
}
