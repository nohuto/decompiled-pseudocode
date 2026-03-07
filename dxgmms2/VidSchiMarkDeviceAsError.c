void __fastcall VidSchiMarkDeviceAsError(struct HwQueueStagingList *a1, __int64 a2, int a3, _OWORD *a4)
{
  int v8; // eax
  signed __int32 v9; // r14d
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  ADAPTER_DISPLAY *v14; // rcx
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h] BYREF
  int v22; // [rsp+A8h] [rbp+38h] BYREF
  int v23; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+48h] BYREF

  if ( (byte_1C00769C1 & 1) != 0 )
    McTemplateK0ptq_EtwWriteTransfer((_DWORD)a1, a2, a3, *(_QWORD *)(a2 + 8), a3 < 0, a3);
  if ( (unsigned int)a3 > 0xE || (v8 = 17024, !_bittest(&v8, a3)) )
  {
    if ( a3 >= 0 && !g_ErrorDeviceDebugMode && !KdRefreshDebuggerNotPresent() )
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
        *(const char **)(*(_QWORD *)(a2 + 40) + 2648LL),
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
    if ( a3 == 7 || a3 == 22 )
    {
      v12 = *(_QWORD *)(a2 + 40) + 2832LL;
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL);
      *(_QWORD *)(v12 + 24) = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 2840LL);
      *(_QWORD *)(v12 + 32) = *(_QWORD *)(v12 + 16);
      *(_BYTE *)v12 = 1;
      *(_QWORD *)(v12 + 40) = *(_QWORD *)(v13 + 404);
      RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 48), *(PCUNICODE_STRING *)(v13 + 1744));
    }
    v14 = *(ADAPTER_DISPLAY **)(a2 + 64);
    if ( v14 )
      DxgCoreInterface[70](
        v14,
        (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*(unsigned int *)(a2 + 200));
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a2);
    if ( DxgKrnlTelemetryGlobal_LogTelemetryEvent()
      && (unsigned int)dword_1C0076048 > 5
      && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
    {
      v16 = *(_QWORD *)(a2 + 40);
      v23 = a3;
      v24 = *(_QWORD *)(v16 + 2648);
      v18 = *(_QWORD *)(v16 + 2640);
      v17 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL);
      v19 = *(_QWORD *)(v17 + 1744);
      v20 = *(_QWORD *)(v17 + 404);
      v22 = 1;
      v21 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v17,
        (unsigned int)&unk_1C0057006,
        v15,
        (unsigned int)&v21,
        (__int64)&v22,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v24,
        (__int64)&v23);
    }
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1224LL) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a2 + 32) + 1192LL), 0, 0);
  v10 = (_QWORD *)(a2 + 88);
  for ( i = *(_QWORD **)(a2 + 88); i != v10; i = (_QWORD *)*i )
    VidSchiRundownHardwareContext(a1, (struct VIDSCH_HW_CONTEXT *)(i - 24));
}
