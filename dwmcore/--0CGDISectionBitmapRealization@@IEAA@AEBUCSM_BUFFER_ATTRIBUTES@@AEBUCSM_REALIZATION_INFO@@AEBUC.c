/*
 * XREFs of ??0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1800F4F88
 * Callers:
 *     ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x1800F4DC4 (-Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@.c)
 *     ??0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1802AD2FC (--0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AE.c)
 * Callees:
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1800F50CC (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 */

CGDISectionBitmapRealization *__fastcall CGDISectionBitmapRealization::CGDISectionBitmapRealization(
        CGDISectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        bool a5,
        int a6)
{
  char *v6; // rdi
  CGDISectionBitmapRealization *result; // rax
  bool v9; // [rsp+20h] [rbp-18h]

  v6 = (char *)this + 16;
  if ( a6 )
  {
    *(_QWORD *)v6 = &CGDISectionBitmapRealization::`vbtable'{for `CSectionBitmapRealization'};
    *((_QWORD *)this + 41) = &CGDISectionBitmapRealization::`vbtable'{for `ID2DBitmapCacheSource'};
    *((_QWORD *)this + 50) = &CGDISectionBitmapRealization::`vbtable'{for `IGDIBitmapRealization'};
    *((_QWORD *)this + 59) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 62) = &CGDISectionBitmapRealization::`vbtable'{for `IBitmapRealization'};
  }
  CSectionBitmapRealization::CSectionBitmapRealization(this, a2, a3, a4, v9);
  *(_QWORD *)this = &CGDISectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 42) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
  *((_QWORD *)this + 49) = &CGDIBitmapRealization::`vftable'{for `IGDIBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v6 + 4LL) + 16) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v6 + 8LL) + 16) = &CGDISectionBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v6 + 12LL) + 16) = &CGDISectionBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v6 + 16LL) + 16) = &CGDISectionBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v6 + 4LL) + 12) = *(_DWORD *)(*(_QWORD *)v6 + 4LL) - 416;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v6 + 8LL) + 12) = *(_DWORD *)(*(_QWORD *)v6 + 8LL) - 432;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v6 + 12LL) + 12) = *(_DWORD *)(*(_QWORD *)v6 + 12LL) - 448;
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v6 + 16LL) + 12) = *(_DWORD *)(*(_QWORD *)v6 + 16LL) - 472;
  *(_OWORD *)((char *)this + 408) = 0LL;
  return result;
}
