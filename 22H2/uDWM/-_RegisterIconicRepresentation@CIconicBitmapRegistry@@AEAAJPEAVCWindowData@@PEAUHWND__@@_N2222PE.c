/*
 * XREFs of ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18004560C
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x1800454D8 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001437C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsLivePreview@@YA_NPEAVCWindowData@@@Z @ 0x180056FC0 (-IsLivePreview@@YA_NPEAVCWindowData@@@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180057000 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAA_NXZ @ 0x1800570FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085490 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180089C0C (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::_RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        HWND *a2,
        HWND a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        enum IconicRepresentationType *a9)
{
  unsigned int v9; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // si
  __int64 v16; // r8

  v9 = 0;
  if ( a6 )
    v12 = 2;
  else
    v12 = a4 && !a5;
  *(_DWORD *)a9 = v12;
  if ( v12 != 1 || a7 )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetImpl'::`2'::impl)
      && IsWindowTab((struct CWindowData *)a2)
      && !a7
      && a6 )
    {
      v14 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1);
      v9 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xDBu);
        return v9;
      }
    }
  }
  else
  {
    v13 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xD4u);
      return v9;
    }
  }
  v15 = *(_DWORD *)a9 == 2;
  if ( a8 != v15 && !IsLivePreview((struct CWindowData *)a2) )
    CIconicBitmapRegistry::RegisterBitmapInUse(this, (struct CWindowData *)a2, v15);
  if ( *(_DWORD *)a9 == 1 )
  {
    v16 = 5LL;
  }
  else if ( *(_DWORD *)a9 == 2 )
  {
    v16 = 6LL;
  }
  else
  {
    v16 = 4LL;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer((unsigned int)(*(_DWORD *)a9 - 1), &UdwmSelectIconicRepresentation_Info, v16);
  if ( IsWindowTab((struct CWindowData *)a2) && !a6 && *(_DWORD *)a9 == 1 )
    *(_DWORD *)a9 = 0;
  return v9;
}
