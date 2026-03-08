/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1800AB374
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800981C8 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800AB464 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1800AB908 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v5; // ebx
  CSharedSectionBase *Resource; // rsi
  unsigned int v7; // ecx
  void *v8; // rbp
  LPVOID v9; // rsi
  gsl::details *v10; // rcx
  const struct CPathData *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA9u);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 144);
  if ( Resource )
  {
    v8 = CSharedSectionBase::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v8 )
    {
      v9 = DefaultHeap::Alloc(0x50uLL);
      if ( v9 )
      {
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v14, *((unsigned int *)a3 + 4));
        v14[1] = v8;
        if ( v14[0] == -1LL )
        {
          gsl::details::terminate(v10);
          JUMPOUT(0x1800AB45CLL);
        }
        v11 = (const struct CPathData *)CPathData::CPathData(v9, g_DeviceManager, v14);
        if ( v11 )
        {
          CPathGeometry::SetPath(this, v11);
          return v5;
        }
      }
      v13 = 30;
    }
    else
    {
      v13 = 25;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, v13, 0LL);
  }
  return v5;
}
