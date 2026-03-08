/*
 * XREFs of ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x1C000DF90
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C346 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

char __fastcall VidSchiSignalRuntimeFenceForCompletedFlipEntry(
        __int64 a1,
        __int64 a2,
        int a3,
        struct HwQueueStagingList *a4)
{
  _DWORD *v4; // rax
  unsigned int v5; // esi
  unsigned int v8; // ebx
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // r14d
  __int64 v13; // rcx
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _VIDSCH_SYNC_OBJECT *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _VIDSCH_SYNC_OBJECT *v24; // [rsp+90h] [rbp+8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v25; // [rsp+98h] [rbp+10h] BYREF
  int v26; // [rsp+A0h] [rbp+18h]

  v26 = a3;
  v4 = *(_DWORD **)(a2 + 1176);
  v5 = 0;
  LODWORD(v24) = 0;
  v8 = *v4 & 0x3FF;
  if ( *(_BYTE *)(a1 + 156) )
    v5 = (*v4 >> 10) & 0x3FF;
  v9 = !_BitScanForward((unsigned int *)&v10, v8);
  if ( v9 )
    LOBYTE(v10) = -1;
  v11 = (char)v10;
  v9 = !_BitScanForward((unsigned int *)&v10, v5);
  LODWORD(v24) = 0;
  if ( v9 )
    LOBYTE(v10) = -1;
LABEL_7:
  v12 = (char)v10;
  while ( v8 || v5 )
  {
    v13 = *(_QWORD *)(a2 + 1176);
    v14 = v12;
    if ( v11 < v12 )
      v14 = v11;
    v15 = v14 * ((8 * *(_DWORD *)(v13 + 8) + 231) & 0xFFFFFFF8);
    if ( *(_QWORD *)(v15 + v13 + 208) )
    {
      v18 = *(struct _VIDSCH_SYNC_OBJECT **)(v15 + v13 + 216);
      v25 = *(struct _VIDSCH_SYNC_OBJECT **)(v15 + v13 + 208);
      v24 = v18;
      if ( (int)VidSchiSignalSyncObjectsFromCpu(a4, 1u, &v25, 0, (const unsigned __int64 *)&v24, 0LL) < 0 )
      {
        WdLogSingleEntry2(
          1LL,
          *(_QWORD *)(v14 * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                    + *(_QWORD *)(a2 + 1176)
                    + 208LL),
          v18);
        ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to signal RuntimeFlipToFence 0x%p value 0x%I64x",
          *(_QWORD *)(v14 * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                    + *(_QWORD *)(a2 + 1176)
                    + 208LL),
          v18,
          0LL,
          0LL,
          0LL);
      }
      a3 = v26;
    }
    v16 = *(_QWORD *)(a2 + 1176);
    v17 = v14 * ((8 * *(_DWORD *)(v16 + 8) + 231) & 0xFFFFFFF8);
    if ( *(_QWORD *)(v17 + v16 + 224) && a3 )
    {
      v24 = *(struct _VIDSCH_SYNC_OBJECT **)(v17 + v16 + 224);
      if ( (int)VidSchiSignalSyncObjectsFromCpu(a4, 1u, &v24, 0, (const unsigned __int64 *)(v16 + 232 + v17), 0LL) < 0 )
      {
        v19 = *(_QWORD *)(a2 + 1176);
        v20 = v14 * ((8 * *(_DWORD *)(v19 + 8) + 231) & 0xFFFFFFF8);
        WdLogSingleEntry2(1LL, *(_QWORD *)(v20 + v19 + 224), *(_QWORD *)(v20 + v19 + 232));
        v21 = *(_QWORD *)(a2 + 1176);
        v22 = v14 * ((8 * *(_DWORD *)(v21 + 8) + 231) & 0xFFFFFFF8);
        ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to signal RuntimeFlipAwayFence 0x%p value 0x%I64x",
          *(_QWORD *)(v22 + v21 + 224),
          *(_QWORD *)(v22 + v21 + 232),
          0LL,
          0LL,
          0LL);
      }
      a3 = v26;
    }
    LODWORD(v24) = 0;
    if ( v11 >= v12 )
    {
      v5 &= ~(1 << v12);
      v9 = !_BitScanForward((unsigned int *)&v10, v5);
      if ( v9 )
        LOBYTE(v10) = -1;
      goto LABEL_7;
    }
    v8 &= ~(1 << v11);
    v9 = !_BitScanForward((unsigned int *)&v10, v8);
    if ( v9 )
      LOBYTE(v10) = -1;
    v11 = (char)v10;
  }
  return v10;
}
