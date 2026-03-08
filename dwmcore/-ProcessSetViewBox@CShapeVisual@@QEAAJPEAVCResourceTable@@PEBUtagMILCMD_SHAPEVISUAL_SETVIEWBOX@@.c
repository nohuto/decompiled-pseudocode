/*
 * XREFs of ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x18024E25C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1800B8080 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800E9160 (-SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetViewBox(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAPEVISUAL_SETVIEWBOX *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CComponentTransform2D *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  CVectorShape *v12; // [rsp+50h] [rbp+18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
         ResourceWithoutType,
         194LL) )
  {
    v8 = CShapeVisual::EnsureShapeTree(this, &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      v11 = 23;
    }
    else
    {
      v8 = CVectorShape::SetTransform(v12, v5);
      v7 = v8;
      if ( v8 >= 0 )
        return v7;
      v11 = 24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v11, 0LL);
    return v7;
  }
  v7 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x13u, 0LL);
  return v7;
}
