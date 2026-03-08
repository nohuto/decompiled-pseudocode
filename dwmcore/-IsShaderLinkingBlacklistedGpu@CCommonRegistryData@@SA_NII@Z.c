/*
 * XREFs of ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800D0C68
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1800CF23C (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x180101A24 (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z.c)
 */

char __fastcall CCommonRegistryData::IsShaderLinkingBlacklistedGpu(const unsigned __int16 *a1, unsigned __int16 a2)
{
  const struct CCommonRegistryData::GpuId *v2; // rax
  int v3; // ebx
  int v5; // edi
  unsigned int v6; // ecx
  _WORD *i; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  struct CCommonRegistryData::GpuId *v10; // [rsp+48h] [rbp+20h] BYREF

  v2 = CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds;
  v3 = 0;
  v5 = (int)a1;
  if ( CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds )
  {
    v6 = CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds;
  }
  else if ( CCommonRegistryData::ParseGpuIdListKey(a1, &v10, &v9) )
  {
    v2 = v10;
    v6 = v9;
    CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds = v10;
    CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds = v9;
  }
  else
  {
    v2 = (const struct CCommonRegistryData::GpuId *)&unk_180338CC4;
    CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds = 0;
    CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds = (const struct CCommonRegistryData::GpuId *const)&unk_180338CC4;
    v6 = 0;
  }
  if ( !v6 )
    return 0;
  for ( i = (_WORD *)((char *)v2 + 2); v5 != (unsigned __int16)*(i - 1) || (a2 & i[1]) != *i; i += 3 )
  {
    if ( ++v3 >= v6 )
      return 0;
  }
  return 1;
}
