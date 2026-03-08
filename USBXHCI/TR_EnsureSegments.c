/*
 * XREFs of TR_EnsureSegments @ 0x1C000B240
 * Callers:
 *     Isoch_PrepareStage @ 0x1C0004AD0 (Isoch_PrepareStage.c)
 *     TR_AcquireSegments @ 0x1C00225C8 (TR_AcquireSegments.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0041B80 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     Bulk_EP_EnableForwardProgress @ 0x1C0046B10 (Bulk_EP_EnableForwardProgress.c)
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 * Callees:
 *     CommonBuffer_AcquireBuffers @ 0x1C000B404 (CommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 *     TR_AcquireSecureSegments @ 0x1C0040F24 (TR_AcquireSecureSegments.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0041E20 (WPP_RECORDER_SF_DDDDD.c)
 */

__int64 __fastcall TR_EnsureSegments(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi
  unsigned int v7; // ebx
  void *v8; // r13
  KIRQL v9; // al
  _QWORD *v10; // rsi
  _QWORD *v11; // rcx
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v15; // ebx
  KIRQL v16; // al
  _QWORD *v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-30h]

  v4 = 0LL;
  v7 = 0;
  v8 = *(void **)(*(_QWORD *)(a1 + 40) + 120LL);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v10 = (_QWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 104) = v9;
  v11 = *(_QWORD **)(a1 + 208);
  if ( (_QWORD *)(a1 + 208) != v11 )
  {
    do
    {
      v11 = (_QWORD *)*v11;
      ++v7;
    }
    while ( v10 != v11 );
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    LOBYTE(v18) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v18,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      16,
      (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      v7,
      a2);
  }
  if ( a2 <= v7 )
    return 0LL;
  v13 = a2 - v7;
  v22 = &v21;
  v21 = &v21;
  if ( a3 )
  {
    v4 = a1 + 128;
    *(_QWORD *)(a1 + 144) = a1;
    *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
    *(_DWORD *)(a1 + 152) = v13;
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 160) = 828862034;
  }
  if ( *(_BYTE *)(a1 + 280) )
    v14 = TR_AcquireSecureSegments(a1, v13, &v21);
  else
    v14 = CommonBuffer_AcquireBuffers(v8, a1, 828862034, v4);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(_QWORD *)(a1 + 56);
      v20 = *(_DWORD *)(v19 + 144);
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v19,
        14,
        17,
        (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        v20,
        *(_DWORD *)(a1 + 64),
        v13);
    }
  }
  else
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v17 = v21;
    *(_BYTE *)(a1 + 104) = v16;
    if ( v17 != &v21 )
    {
      **(_QWORD **)(a1 + 216) = v17;
      v21[1] = *(_QWORD *)(a1 + 216);
      *v22 = v10;
      *(_QWORD *)(a1 + 216) = v22;
      v22 = &v21;
      v21 = &v21;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  return v15;
}
