void __fastcall UsbhDeregisterPdo(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _DWORD *v7; // r13
  _DWORD *v8; // rax
  __int64 v9; // rsi
  __int64 PortData; // rax
  __int64 v11; // r14
  int v12; // r10d
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  KIRQL v17; // dl
  __int64 v18; // [rsp+20h] [rbp-38h]

  v7 = FdoExt(a1);
  v8 = PdoExt(a2);
  v9 = (__int64)v8;
  if ( *((_BYTE *)v8 + 2740) || (PortData = UsbhGetPortData(a1, *((_WORD *)v8 + 714)), (v11 = PortData) == 0) )
  {
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    Log(a1, 4, 1685219152, PortData, a2);
    v13 = (_QWORD *)(v9 + 1320);
    v14 = *(_QWORD *)(v9 + 1320);
    if ( *(_QWORD *)(v14 + 8) != v9 + 1320 )
      goto LABEL_11;
    v15 = *(_QWORD **)(v9 + 1328);
    if ( (_QWORD *)*v15 != v13 )
      goto LABEL_11;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v18 = *(unsigned int *)(v9 + 1420);
    *v13 = 0LL;
    *(_QWORD *)(v9 + 1328) = 0LL;
    Log(a1, v12, 1685219122, v9, v18);
    UsbhResetPortData(a1, a2, a5 + 132);
    v16 = (_QWORD *)*((_QWORD *)v7 + 604);
    if ( (_DWORD *)*v16 != v7 + 1206 )
LABEL_11:
      __fastfail(3u);
    *(_QWORD *)(v9 + 1328) = v16;
    *v13 = v7 + 1206;
    *v16 = v13;
    *((_QWORD *)v7 + 604) = v13;
    SET_PDO_HWPNPSTATE(a2, 4, a4);
    UsbhSetPdo_FailIo(a2);
    v7[226] = 1;
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v17 = *(_BYTE *)(a5 + 132);
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
    UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741810);
    UsbhSignalDriverResetEvent(a1, v11);
    UsbhSshSetPortsBusyState(a1, *(_WORD *)(v9 + 1428), 1, 0);
    UsbhUnlinkPdoDeviceHandle(a1, a2, 2017740851, 1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0x46u, (__int64)"FKh&");
    }
    UsbhBusIoInvalidateDeviceRelations(a1, a5);
  }
}
