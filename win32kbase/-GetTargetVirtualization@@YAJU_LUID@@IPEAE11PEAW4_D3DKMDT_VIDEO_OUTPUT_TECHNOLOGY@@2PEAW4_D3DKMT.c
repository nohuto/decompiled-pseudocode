/*
 * XREFs of ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C019074C
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00E2170 (DrvSetDisplayConfigValidateParams.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C018CA3C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTargetVirtualization(
        struct _LUID a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a7,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a8)
{
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 DxgkWin32kInterface; // rax
  int v16; // eax
  struct _LUID v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = a2;
  v18 = a1;
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD))DxDdGetDxgkWin32kInterface)(a1, a2);
  v11 = (*(__int64 (__fastcall **)(struct _LUID *, _QWORD, struct _LUID *, unsigned int *))(v10 + 552))(
          &v18,
          v19,
          &v18,
          &v19);
  v14 = v11;
  if ( v11 < 0
    || (DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v13, v12),
        v16 = (*(__int64 (__fastcall **)(struct _LUID, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, enum _D3DKMT_DISPLAY_TARGET_USAGE *))(DxgkWin32kInterface + 568))(
                v18,
                v19,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8),
        v14 = v16,
        v16 < 0) )
  {
    WdLogSingleEntry1(2LL, v14);
  }
  return (unsigned int)v14;
}
