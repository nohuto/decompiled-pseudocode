/*
 * XREFs of McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C002E560
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C00EFF00 (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 *     VidMmReportContextAllocList @ 0x1C00F1B20 (VidMmReportContextAllocList.c)
 *     VidMmReportMultiAlloc @ 0x1C00F1C40 (VidMmReportMultiAlloc.c)
 *     ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00F3700 (-ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0ppppppppppppq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-C0h] BYREF
  va_list v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  va_list v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  va_list v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  va_list v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  va_list v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  va_list v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  va_list v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  va_list v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  va_list v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  va_list v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  va_list v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  va_list v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  __int64 v32; // [rsp+158h] [rbp+58h] BYREF
  va_list va; // [rsp+158h] [rbp+58h]
  __int64 v34; // [rsp+160h] [rbp+60h] BYREF
  va_list va1; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h] BYREF
  va_list va2; // [rsp+168h] [rbp+68h]
  __int64 v38; // [rsp+170h] [rbp+70h] BYREF
  va_list va3; // [rsp+170h] [rbp+70h]
  __int64 v40; // [rsp+178h] [rbp+78h] BYREF
  va_list va4; // [rsp+178h] [rbp+78h]
  __int64 v42; // [rsp+180h] [rbp+80h] BYREF
  va_list va5; // [rsp+180h] [rbp+80h]
  __int64 v44; // [rsp+188h] [rbp+88h] BYREF
  va_list va6; // [rsp+188h] [rbp+88h]
  __int64 v46; // [rsp+190h] [rbp+90h] BYREF
  va_list va7; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h] BYREF
  va_list va8; // [rsp+198h] [rbp+98h]
  __int64 v50; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va9; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va10; // [rsp+1A8h] [rbp+A8h]
  va_list va11; // [rsp+1B0h] [rbp+B0h] BYREF

  va_start(va11, a3);
  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v32 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v34 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v36 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v38 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v40 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v42 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v44 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v46 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v48 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v50 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v52 = va_arg(va11, _QWORD);
  v7 = 8LL;
  va_copy(v6, va);
  v9 = 8LL;
  va_copy(v8, va1);
  v4 = 0;
  va_copy(v10, va2);
  va_copy(v12, va3);
  va_copy(v14, va4);
  v11 = 8LL;
  va_copy(v16, va5);
  va_copy(v18, va6);
  va_copy(v20, va7);
  va_copy(v22, va8);
  va_copy(v24, va9);
  va_copy(v26, va10);
  va_copy(v28, va11);
  v30 = &v4;
  v13 = 8LL;
  v15 = 8LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 8LL;
  v27 = 8LL;
  v29 = 8LL;
  v31 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, 0LL, 0xEu, &v5);
}
