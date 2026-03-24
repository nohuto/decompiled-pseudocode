/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x1C0015DC0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0009610 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015D30 (VidSchMarkDeviceAsError.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035BC0 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035E58 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C003AE98 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0015E8C (VidSchiSignalRegisteredSyncObjects.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1C0026B90 (_tlgKeywordOn.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C00382F4 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C003C45C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     VidSchiNotifyDeviceRemoved @ 0x1C003CF58 (VidSchiNotifyDeviceRemoved.c)
 */

void __fastcall VidSchiMarkDeviceAsError(struct HwQueueStagingList *a1, __int64 a2, int a3, _OWORD *a4)
{
  int v8; // eax
  signed __int32 v9; // r15d
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h] BYREF
  int v22; // [rsp+A8h] [rbp+38h] BYREF
  int v23; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+48h] BYREF

  if ( (unsigned int)a3 <= 0xD && (v8 = 15743, _bittest(&v8, a3)) || a3 >= 15 )
  {
    if ( !g_ErrorDeviceDebugMode && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A GPU Scheduler device 0x%p from process %s has been put in error due to Reason %d.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks when device is put in error, run \"?? dxgmms2!g_ErrorDeviceDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        (const void *)a2,
        *(const char **)(*(_QWORD *)(a2 + 40) + 2640LL),
        a3,
        (const void *)&g_ErrorDeviceDebugMode);
      __debugbreak();
    }
  }
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 200), a3, 0);
  VidSchiSignalRegisteredSyncObjects(a1);
  if ( a4 )
  {
    *(_OWORD *)(a2 + 208) = *a4;
    *(_OWORD *)(a2 + 224) = a4[1];
  }
  if ( !v9 && a3 != 14 )
  {
    v12 = *(_QWORD *)(a2 + 64);
    if ( v12 )
      ((void (__fastcall *)(__int64, _QWORD))DxgCoreInterface[64])(v12, *(unsigned int *)(a2 + 200));
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a2);
    if ( DxgKrnlTelemetryGlobal_LogTelemetryEvent()
      && (unsigned int)dword_1C0050048 > 5
      && (unsigned __int8)tlgKeywordOn(&dword_1C0050048, 0x400000000010LL) )
    {
      v13 = *(_QWORD *)(a2 + 40);
      v14 = *(_QWORD *)(a2 + 32);
      v15 = *(_QWORD *)(v13 + 2632);
      v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 316LL);
      v23 = a3;
      v24 = *(_QWORD *)(v13 + 2640);
      v18 = v15;
      v17 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 1520LL);
      v22 = 1;
      v21 = 1LL;
      v20 = v16;
      v19 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v17,
        (unsigned int)&unk_1C00441FC,
        v14,
        (unsigned int)&v21,
        (__int64)&v22,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v24,
        (__int64)&v23);
    }
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1208LL) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a2 + 32) + 1176LL), 0, 0);
  v10 = (_QWORD *)(a2 + 88);
  for ( i = *(_QWORD **)(a2 + 88); i != v10; i = (_QWORD *)*i )
    VidSchiRundownHardwareContext(a1, (struct VIDSCH_HW_CONTEXT *)(i - 24));
}
