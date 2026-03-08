/*
 * XREFs of ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180023860
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18001B368 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180038938 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x180039DEC (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180097C88 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180097D40 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180098BA8 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::NotifyCurrentPropertyValues(CVisual *this, int a2)
{
  unsigned int v2; // ebx
  FLOAT v5; // xmm1_4
  FLOAT v6; // xmm0_4
  unsigned __int64 v7; // rcx
  FLOAT v8; // xmm1_4
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  float OpacityInternal; // xmm0_4
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  struct D2D_VECTOR_3F v22; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_VECTOR_3F v23; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (a2 & 0x8000000) == 0 )
    goto LABEL_29;
  v5 = *((float *)this + 29);
  v23.x = *((FLOAT *)this + 28);
  v6 = *((float *)this + 30);
  v23.y = v5;
  v7 = *(_QWORD *)&v23.x - CVisual::sc_defaultOffset;
  v23.z = v6;
  if ( *(_QWORD *)&v23.x == CVisual::sc_defaultOffset )
    v7 = LODWORD(v23.z) - (unsigned __int64)(unsigned int)dword_1803E6EE8;
  if ( v7
    && (v12 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Bu, (const struct D2DVector3 *)&v23),
        v2 = v12,
        v12 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1913u, 0LL);
  }
  else
  {
LABEL_29:
    if ( (a2 & 0x2000000) == 0
      || (OpacityInternal = CVisual::GetOpacityInternal(this), OpacityInternal == 1.0)
      || (v15 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x19u, OpacityInternal), v2 = v15, v15 >= 0) )
    {
      if ( (a2 & 0x10000000) == 0
        || (v8 = *((float *)this + 34), v22.x = *((FLOAT *)this + 33), v22.y = v8, *(_QWORD *)&v22.x == CVisual::sc_Size)
        || (v10 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Cu, (const struct D2DVector2 *)&v22),
            v2 = v10,
            v10 >= 0) )
      {
        if ( (a2 & 0x20000000) == 0 )
          goto LABEL_30;
        CVisual::GetRelativeOffsetInternal(this, &v22);
        v23 = v22;
        v17 = *(_QWORD *)&v22.x - CVisual::sc_defaultRelativeOffset;
        if ( *(_QWORD *)&v22.x == CVisual::sc_defaultRelativeOffset )
          v17 = LODWORD(v23.z) - (unsigned __int64)(unsigned int)dword_1803E6EF8;
        if ( v17
          && (v18 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Du, (const struct D2DVector3 *)&v23),
              v2 = v18,
              v18 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1932u, 0LL);
        }
        else
        {
LABEL_30:
          if ( (a2 & 0x40000000) != 0 )
          {
            CVisual::GetRelativeLayoutSizeInternal(this);
            *(_QWORD *)&v22.x = *(_QWORD *)&v23.x;
            if ( *(_QWORD *)&v23.x != CVisual::sc_defaultRelativeSize )
            {
              v20 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Eu, (const struct D2DVector2 *)&v22);
              v2 = v20;
              if ( v20 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x193Cu, 0LL);
            }
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1925u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x191Cu, 0LL);
    }
  }
  return v2;
}
