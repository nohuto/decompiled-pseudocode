/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x180101A24
 * Callers:
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800D0C68 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18001A2B0 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAA@XZ @ 0x180116DF0 (--1-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@QEAA@XZ.c)
 *     ??1?$DynArrayIA@M$01$0A@@@QEAA@XZ @ 0x180251060 (--1-$DynArrayIA@M$01$0A@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UGpuId@CCommonRegistryData@@$0A@@@QEAAJPEFBUGpuId@CCommonRegistryData@@I@Z @ 0x18026E8AC (-AddMultipleAndSet@-$DynArray@UGpuId@CCommonRegistryData@@$0A@@@QEAAJPEFBUGpuId@CCommonRegistryD.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        const unsigned __int16 *a1,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  unsigned int v3; // edi
  char *v6; // rbx
  char *v7; // rax
  unsigned int v8; // eax
  __int16 v9; // si
  __int16 v10; // ax
  char v11; // dl
  __int16 v12; // ax
  char *EndPtr; // [rsp+40h] [rbp-30h] BYREF
  char *pvData; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  unsigned int v18; // [rsp+68h] [rbp-8h]
  const unsigned __int16 *pcbData; // [rsp+A0h] [rbp+30h] BYREF
  __int16 v20; // [rsp+B8h] [rbp+48h] BYREF
  __int16 v21; // [rsp+BAh] [rbp+4Ah]
  __int16 v22; // [rsp+BCh] [rbp+4Ch]

  pcbData = a1;
  v3 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\Dwm",
          L"ShaderLinkingGPUBlacklist",
          2u,
          0LL,
          0LL,
          (LPDWORD)&pcbData) )
  {
    LODWORD(pcbData) = (_DWORD)pcbData + 1;
    pvData = (char *)DefaultHeap::Alloc((unsigned int)pcbData);
    v6 = pvData;
    if ( pvData
      && !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\Dwm",
            L"ShaderLinkingGPUBlacklist",
            2u,
            0LL,
            pvData,
            (LPDWORD)&pcbData) )
    {
      EndPtr = pvData;
      v7 = pvData;
      v17 = 0LL;
      v16 = 0LL;
      v18 = 0;
      if ( !*pvData )
      {
LABEL_14:
        *a3 = v3;
        DynArrayImpl<0>::DetachData((__int64)&v16, 6u, a2);
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v16);
        operator delete(v6);
        return 1;
      }
      while ( 1 )
      {
        v8 = strtoul(v7, &EndPtr, 16);
        v9 = v8;
        if ( v8 - 1 > 0xFFFE || *EndPtr != 58 )
          break;
        v10 = strtoul(EndPtr + 1, &EndPtr, 16);
        v11 = 0;
        if ( *EndPtr == 42 )
        {
          v10 *= 16;
          v11 = 1;
          ++EndPtr;
        }
        v21 = v10;
        v12 = -16;
        v20 = v9;
        if ( !v11 )
          v12 = -1;
        v22 = v12;
        if ( (int)DynArray<CCommonRegistryData::GpuId,0>::AddMultipleAndSet(&v16, &v20) < 0 )
          break;
        v7 = EndPtr;
        if ( !*EndPtr )
        {
          v3 = v18;
          goto LABEL_14;
        }
      }
      DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>(&v16);
    }
    std::unique_ptr<char [0]>::~unique_ptr<char [0]>(&pvData);
  }
  return 0;
}
