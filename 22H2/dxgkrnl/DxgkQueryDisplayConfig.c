/*
 * XREFs of DxgkQueryDisplayConfig @ 0x1C01B6600
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C017D0D0 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C01B3270 (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOP.c)
 */

__int64 __fastcall DxgkQueryDisplayConfig(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5)
{
  unsigned int v8; // r14d
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rcx
  int CachedData; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  char v18; // [rsp+58h] [rbp-8h]

  v16 = -1;
  v17 = 0LL;
  v8 = a1;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2176;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2176);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2176);
  Global = DXGGLOBAL::GetGlobal();
  v15 = 0;
  CachedData = QDC_CACHE::GetCachedData(*((QDC_CACHE **)Global + 187), v8, a3, a4, a5, &v15);
  if ( CachedData < 0 )
    CachedData = QueryDisplayConfigInternal(v10, v15, v8, a2, a3, a4, a5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  }
  return (unsigned int)CachedData;
}
