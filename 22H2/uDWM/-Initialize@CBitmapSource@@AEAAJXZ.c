/*
 * XREFs of ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180027D44
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180027B80 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18003D064 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x1800498B0 (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x18003C36C (--$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z.c)
 */

__int64 __fastcall CBitmapSource::Initialize(CBitmapSource *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CCompositor::CreateProxy<CBitmapSourceProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (char *)this + 16);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x125u);
  else
    return 0;
  return v2;
}
