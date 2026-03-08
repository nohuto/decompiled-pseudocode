/*
 * XREFs of ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800E9160
 * Callers:
 *     ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z @ 0x1800E90EC (-ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFO.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x18024E25C (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVectorShape::SetTransform(CVectorShape *this, struct CComponentTransform2D *a2)
{
  unsigned int v3; // ebx
  struct CResource *v4; // rdx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = (struct CResource *)*((_QWORD *)this + 9);
  if ( a2 != v4 )
  {
    if ( a2 )
    {
      v6 = CResource::RegisterNotifier(this, a2);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4Du, 0LL);
        return v3;
      }
      v4 = (struct CResource *)*((_QWORD *)this + 9);
    }
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 9) = a2;
    (*(void (__fastcall **)(CVectorShape *, __int64))(*(_QWORD *)this + 72LL))(this, 2LL);
  }
  return v3;
}
