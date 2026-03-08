/*
 * XREFs of ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x1C0037400
 * Callers:
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z @ 0x1C0049888 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pqqqqXR4XR4_EtwWriteTransfer @ 0x1C0038DC4 (McTemplateK0pqqqqXR4XR4_EtwWriteTransfer.c)
 */

void __fastcall VidSchiTraceHwFlipQueueLogUpdate(
        struct _VIDSCH_GLOBAL *a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  unsigned int v14; // r14d
  _QWORD *v15; // rdx
  _QWORD v16[64]; // [rsp+50h] [rbp-428h] BYREF
  _QWORD v17[64]; // [rsp+250h] [rbp-228h] BYREF

  v5 = a3;
  v8 = a4;
  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  v9 = *((_QWORD *)a1 + v5 + 400);
  v10 = 288 * v8;
  v11 = 0LL;
  v12 = *(_DWORD *)(v9 + 288 * v8 + 372);
  v13 = (a5 + 1) % v12;
  v14 = (v12 + *(_DWORD *)(v9 + 288 * v8 + 376) - 1) % v12 + 1;
  while ( v13 != v14 % v12 )
  {
    v15 = (_QWORD *)(*(_QWORD *)(v9 + v10 + 432) + 16LL * v13);
    v17[v11] = *v15;
    v16[v11] = v15[1];
    v12 = *(_DWORD *)(v9 + v10 + 372);
    v11 = (unsigned int)(v11 + 1);
    v13 = (v13 + 1) % v12;
  }
  if ( (byte_1C00769C4 & 1) != 0 )
    McTemplateK0pqqqqXR4XR4_EtwWriteTransfer(
      v12,
      v14 % v12,
      v11,
      *((_QWORD *)a1 + 2),
      v5,
      v8,
      a2,
      v11,
      (__int64)v17,
      (__int64)v16);
}
