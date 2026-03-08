/*
 * XREFs of ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x1800B8FDC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1800B908C (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CContainerVectorShape::ProcessSetShapes(
        CContainerVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES *a3,
        const void *a4,
        unsigned int a5)
{
  gsl::details *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x2Cu, 0LL);
  }
  else
  {
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v13, (unsigned __int64)a5 >> 2);
    v13[1] = a4;
    if ( v13[0] == -1LL || !a4 && v13[0] )
    {
      gsl::details::terminate(v8);
      JUMPOUT(0x1800B9085LL);
    }
    v9 = CContainerVectorShape::SetShapes(this, a2);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x33u, 0LL);
  }
  return v11;
}
