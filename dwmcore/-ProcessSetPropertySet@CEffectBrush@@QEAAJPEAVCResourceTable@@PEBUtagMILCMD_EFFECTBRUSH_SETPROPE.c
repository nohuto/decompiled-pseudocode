/*
 * XREFs of ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x18003E3D4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPropertySet@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertySet@@@Z @ 0x18003E450 (--4-$ComPtr@VCPropertySet@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertySet@@@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x18003F5B0 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertySet(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETPROPERTYSET *a3)
{
  char *v3; // rdi
  __int64 Resource; // rax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v3 = (char *)this + 104;
  if ( *((_QWORD *)this + 13) )
  {
    v7 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303422, 0x8Fu, 0LL);
  }
  else
  {
    Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 135LL);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CPropertySet>::operator=(v3, Resource);
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*(_QWORD *)v3 + 80LL) = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
      return 0;
    }
    else
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x95u, 0LL);
    }
  }
  return v7;
}
