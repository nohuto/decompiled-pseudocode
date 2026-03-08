/*
 * XREFs of ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x18022AB7C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E83CC (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180260E60 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessTipPointBuffer(
        volatile signed __int32 **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_TIPPOINTBUFFER *a3)
{
  volatile signed __int32 **v3; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // edx
  __int64 v8; // rcx
  struct CSharedSectionBase *Resource; // rbx
  int v10; // eax
  __int64 v11; // rcx

  v3 = this + 11;
  v6 = 0;
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(this + 11);
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, v7, 0xAAu);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(v3);
      v10 = CGenericInkTipPointSource::Create(
              Resource,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              *((_DWORD *)a3 + 5),
              (struct CGenericInkTipPointSource **)v3);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x8Bu, 0LL);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x86u, 0LL);
    }
  }
  return v6;
}
