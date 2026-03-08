/*
 * XREFs of ?ProcessSetTransform@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETTRANSFORM@@@Z @ 0x18021D3F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x1801EADC4 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ??4?$com_ptr_t@VCTransform3D@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCTransform3D@@@Z @ 0x18021D130 (--4-$com_ptr_t@VCTransform3D@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCTransform3D@@@Z.c)
 */

__int64 __fastcall CCaptureController::ProcessSetTransform(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETTRANSFORM *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rax
  __int64 v8; // rcx
  struct CTransform3D **v9; // rsi
  struct CResource ***v10; // rdi
  struct CResource ***v11; // rbp
  int v12; // eax
  __int64 v13; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0xBBu)) != 0 )
  {
    v9 = (struct CTransform3D **)((char *)this + 120);
    if ( Resource != *((_QWORD *)this + 15) )
    {
      wil::com_ptr_t<CTransform3D,wil::err_returncode_policy>::operator=((__int64 *)this + 15, Resource);
      v10 = (struct CResource ***)*((_QWORD *)this + 8);
      v11 = (struct CResource ***)*((_QWORD *)this + 9);
      while ( v10 != v11 )
      {
        v12 = CCaptureRenderTarget::SetTransform(*v10, *v9);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x67u, 0LL);
          return v4;
        }
        ++v10;
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x5Cu, 0LL);
  }
  return v4;
}
