/*
 * XREFs of ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1800B7FB8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1800B8080 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1800B908C (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetShapes(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAPEVISUAL_SETSHAPES *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v8; // eax
  unsigned int v9; // ebx
  gsl::details *v10; // rcx
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-38h]
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  CResource *v15; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v9 = -2003303421;
    v12 = -2003303421;
    v13 = 41;
    goto LABEL_15;
  }
  v8 = CShapeVisual::EnsureShapeTree(this, &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 45;
    goto LABEL_13;
  }
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v14, (unsigned __int64)v5 >> 2);
  v14[1] = a4;
  if ( v14[0] == -1LL || !a4 && v14[0] )
  {
    gsl::details::terminate(v10);
    JUMPOUT(0x1800B8077LL);
  }
  v8 = CContainerVectorShape::SetShapes(v15, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 51;
LABEL_13:
    v12 = v8;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v12, v13, 0LL);
  }
  return v9;
}
