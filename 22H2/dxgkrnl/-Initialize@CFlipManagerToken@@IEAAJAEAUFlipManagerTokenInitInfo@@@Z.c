/*
 * XREFs of ?Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0076E84
 * Callers:
 *     ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0076D10 (-ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 * Callees:
 *     Feature_CompositionTextures__private_IsEnabledDeviceUsage @ 0x1C0027DE8 (Feature_CompositionTextures__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage @ 0x1C0027E3C (Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall CFlipManagerToken::Initialize(CFlipManagerToken *this, struct FlipManagerTokenInitInfo *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  char v6; // al
  __int64 result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = *(_QWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)this + 9) = v4;
  v5 = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)this + 10) = v5;
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 4);
  if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() )
    *((_QWORD *)this + 11) = *((_QWORD *)a2 + 6);
  if ( (unsigned int)Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage() )
    *((_BYTE *)this + 107) = *((_QWORD *)this + 11) != 0LL;
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 5);
  v6 = *((_BYTE *)a2 + 16);
  *((_QWORD *)a2 + 5) = 0LL;
  *((_BYTE *)this + 104) = v6;
  result = 0LL;
  *((_BYTE *)this + 106) = 1;
  return result;
}
