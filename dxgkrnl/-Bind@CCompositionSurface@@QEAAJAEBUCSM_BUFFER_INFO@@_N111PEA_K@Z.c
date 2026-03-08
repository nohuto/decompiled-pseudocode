/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1C000C3B4
 * Callers:
 *     NtBindCompositionSurface @ 0x1C000C000 (NtBindCompositionSurface.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C007B730 (-PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x1C000C4DC (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x1C000C544 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C000DAA0 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00143AC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C007C270 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C007C980 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        const struct CSM_BUFFER_INFO *a2,
        bool a3,
        char a4,
        bool a5,
        bool a6,
        unsigned __int64 *a7)
{
  struct CCompositionBuffer *v8; // rsi
  __int64 v9; // rcx
  bool v12; // bp
  signed int v13; // ebx
  struct CCompositionBuffer *v14; // rbx
  struct CCompositionBuffer *v16; // [rsp+20h] [rbp-28h] BYREF
  struct CCompositionBuffer *v17; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v17 = 0LL;
  if ( *((_DWORD *)this + 22) && *(_BYTE *)(*((_QWORD *)this + 9) - 24LL + 40) )
    v9 = *((_QWORD *)this + 9) - 24LL;
  v12 = a6;
  v13 = v9 != 0 ? 0xC0000510 : 0;
  if ( (*((_QWORD *)this + 13) || a6) && *(_DWORD *)a2 != 2 )
    return (unsigned int)-1073741790;
  if ( !v9 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v13 = CCompositionBuffer::Create(
              (const struct CSM_BUFFER_INFO *)((char *)a2 + 16),
              (const struct CSM_BUFFER_INFO *)((char *)a2 + 160),
              &v16);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v14 = v16;
      goto LABEL_9;
    }
    if ( *(_DWORD *)a2 != 2 )
      return (unsigned int)-1073741811;
    v13 = CFlipExBuffer::Create(
            (const struct CSM_BUFFER_INFO *)((char *)a2 + 16),
            (const struct CSM_BUFFER_INFO *)((char *)a2 + 160),
            a3,
            &v17);
    if ( v13 >= 0 )
    {
      v8 = v17;
      v14 = v17;
LABEL_9:
      if ( a4 )
        *((_BYTE *)v14 + 41) = 1;
      if ( !a3 )
        CCompositionSurface::ReleaseAllBuffers(this);
      v13 = CCompositionSurface::Bind(this, v14, a7);
      if ( v13 >= 0 && v8 )
      {
        if ( *((_QWORD *)this + 13) )
        {
          v13 = CCompositionSurface::PairBind(this, v8);
          if ( v13 < 0 )
            CCompositionSurface::UnBind(this, 0);
        }
        else
        {
          *((_BYTE *)this + 112) = v12;
          *((_BYTE *)v8 + 652) = v12;
        }
      }
    }
  }
  return (unsigned int)v13;
}
