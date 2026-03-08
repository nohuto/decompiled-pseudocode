/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0011358
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002730 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C001162C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C001165C (-ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00116BC (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A980 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A5F00 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  bool v13; // zf
  int v14; // eax
  char v15; // cl
  __int64 v16; // rdi
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // eax
  void *v20; // rcx
  unsigned int v21; // r8d
  void (__fastcall *v23)(_QWORD); // rax
  __int64 v24; // [rsp+58h] [rbp-41h]
  _QWORD v25[2]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-29h] BYREF
  char v27; // [rsp+80h] [rbp-19h]
  _QWORD v28[4]; // [rsp+88h] [rbp-11h] BYREF
  __int16 v29; // [rsp+A8h] [rbp+Fh]
  char v30; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v31; // [rsp+108h] [rbp+6Fh]
  signed __int32 v32; // [rsp+110h] [rbp+77h] BYREF
  int v33; // [rsp+118h] [rbp+7Fh]

  v31 = a2;
  v2 = *((_QWORD *)a1 + 4);
  v4 = a2;
  v5 = a2;
  v6 = *(_QWORD *)(v2 + 8LL * a2 + 3200);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(v6 + 32);
  v24 = v7;
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v2 + 16);
  v25[0] = 0LL;
  v25[1] = *(_QWORD *)(v8 + 2928);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v25);
  if ( v25[0] )
  {
    v9 = (unsigned int *)(v25[0] + 600LL);
    if ( !*(_BYTE *)(v25[0] + 356LL) )
      v9 = (unsigned int *)(v25[0] + 496LL);
    *v9 ^= (*v9 ^ (((1 << *(_DWORD *)(v2 + 152)) - 1) << 10)) & 0xFFC00;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 736), 1u);
    v10 = 740LL;
    if ( *(_BYTE *)(v2 + 2212) )
      v10 = 4 * v4 + 740;
    _InterlockedAdd((volatile signed __int32 *)(v10 + v2), 1u);
    _InterlockedAdd((volatile signed __int32 *)a1 + 393, 1u);
    _InterlockedAdd((volatile signed __int32 *)a1 + v4 + 377, 1u);
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v2, v4);
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 8 * v4 + 3200) + 44328LL) != -1 )
    {
      v23 = *(void (__fastcall **)(_QWORD))(v2 + 3056);
      if ( v23 )
        v23(*(_QWORD *)(v2 + 3120));
    }
    v29 = 0;
    v28[0] = v2 + 1728;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v28);
    v26[1] = v26;
    v26[0] = v26;
    v27 = 0;
    _InterlockedAdd((volatile signed __int32 *)a1 + v5 + 361, 1u);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 32LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 4) + 4LL))
                    + 8 * v5
                    + 88);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v5 + 6480) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
    ++*(_DWORD *)(v2 + 804);
    ++*((_DWORD *)a1 + 394);
    ++*(_DWORD *)(v6 + 3076);
    v12 = ((unsigned __int16)*v9 | (unsigned __int16)(*v9 >> 10)) & 0x3FF;
    v13 = !_BitScanForward((unsigned int *)&v14, v12);
    v33 = v14;
    while ( 1 )
    {
      v15 = -1;
      if ( !v13 )
        v15 = v14;
      if ( !v12 )
        break;
      ++*(_DWORD *)(288LL * v15 + *(_QWORD *)(v2 + 8 * v5 + 3200) + 196);
      v12 &= ~(1 << v15);
      v13 = !_BitScanForward((unsigned int *)&v14, v12);
    }
    v16 = *(unsigned int *)(v7 + 56);
    v17 = v24 + 1384 * v16;
    _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)(v17 + 120));
    v18 = *(_DWORD *)(v17 + 1256) | 0x10;
    *(_QWORD *)(v17 + 1160) = a1;
    *(_DWORD *)(v17 + 1256) = v18;
    v19 = *((_DWORD *)a1 + v5 + 127);
    *(_DWORD *)(v17 + 1256) = v18 | 0x180;
    v20 = *(void **)(v17 + 1296);
    *(_DWORD *)(v17 + 1192) = 0;
    *(_DWORD *)(v17 + 1176) = v19;
    memmove(v20, v9, v9[3]);
    *(_DWORD *)(v24 + 56) = ((_BYTE)v16 + 1) & 0x3F;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 808));
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 3080));
    v21 = v31;
    *(_DWORD *)(v17 + 1172) = 4;
    v30 = 0;
    LOBYTE(v32) = 0;
    VidSchiExecuteMmIoFlip((__int64)v26, v2, v21, v24, v16, &v32, &v30);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v26);
    AcquireSpinLock::Release((AcquireSpinLock *)v28);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v25);
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 22469LL);
  ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocate VidSchSubmitData",
    22469LL,
    0LL,
    0LL,
    0LL,
    0LL);
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v25);
  return 3221225495LL;
}
