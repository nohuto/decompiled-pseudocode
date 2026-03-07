void __fastcall Etw_EndpointListRundown(int a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  int v3; // r13d
  KIRQL v5; // al
  __int64 v6; // rdi
  _QWORD *Pool2; // rbx
  KIRQL v8; // al
  KIRQL v9; // r14
  _QWORD *v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r15
  _QWORD *v13; // rax
  unsigned int v14; // ebp
  _QWORD **v15; // r14
  _QWORD *v16; // r8
  _QWORD *v17; // rsi

  v2 = (KSPIN_LOCK *)(a2 + 88);
  v3 = a1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  v6 = *(unsigned int *)(a2 + 112);
  KeReleaseSpinLock(v2, v5);
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8 * v6, 1229146200LL);
      if ( !Pool2 )
        break;
      v8 = KeAcquireSpinLockRaiseToDpc(v2);
      v9 = v8;
      if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 112) )
      {
        v10 = (_QWORD *)(a2 + 96);
        v11 = 0LL;
        v12 = *v10 - 64LL;
        if ( v10 != (_QWORD *)*v10 )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1640))(
              WdfDriverGlobals,
              *(_QWORD *)(v12 + 24),
              Etw_EndpointListRundown,
              902LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            Pool2[v11] = v12;
            v11 = (unsigned int)(v11 + 1);
            v13 = *(_QWORD **)(v12 + 64);
            v12 = (__int64)(v13 - 8);
          }
          while ( v10 != v13 );
          v3 = a1;
        }
        KeReleaseSpinLock(v2, v9);
        v14 = 0;
        if ( (_DWORD)v6 )
        {
          v15 = (_QWORD **)Pool2;
          do
          {
            v16 = *v15;
            if ( !*v15 )
              break;
            v17 = v16 + 3;
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
              McTemplateK0pppnnn_EtwWriteTransfer(
                (_DWORD)v16 + 103,
                (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_ENDPOINT_INFORMATION,
                v3,
                *(_QWORD *)(*v16 + 8LL),
                v16[1],
                *v17);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
              WdfDriverGlobals,
              *v17,
              Etw_EndpointListRundown,
              939LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v14;
            ++v15;
          }
          while ( v14 < (unsigned int)v6 );
        }
        ExFreePoolWithTag(Pool2, 0x49434858u);
        return;
      }
      v6 = *(unsigned int *)(a2 + 112);
      KeReleaseSpinLock(v2, v8);
      ExFreePoolWithTag(Pool2, 0x49434858u);
    }
  }
}
