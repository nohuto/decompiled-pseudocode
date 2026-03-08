/*
 * XREFs of Etw_DeviceListRundown @ 0x1C0013C10
 * Callers:
 *     Etw_ControllerRundown @ 0x1C0013EAC (Etw_ControllerRundown.c)
 * Callees:
 *     Etw_DeviceRundown @ 0x1C000FFA0 (Etw_DeviceRundown.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Etw_DeviceListRundown(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  __int64 v3; // r13
  KIRQL v5; // al
  __int64 v6; // rdi
  __int64 *Pool2; // rbx
  KIRQL v8; // al
  KIRQL v9; // r14
  _QWORD *v10; // rbp
  __int64 v11; // r12
  _QWORD *v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebp
  __int64 *v17; // r14
  _QWORD *v18; // rsi

  v2 = (KSPIN_LOCK *)(a2 + 40);
  v3 = a1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 40));
  v6 = *(unsigned int *)(a2 + 64);
  KeReleaseSpinLock(v2, v5);
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      Pool2 = (__int64 *)ExAllocatePool2(64LL, 8 * v6, 1229146200LL);
      if ( !Pool2 )
        break;
      v8 = KeAcquireSpinLockRaiseToDpc(v2);
      v9 = v8;
      if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 64) )
      {
        v10 = (_QWORD *)(a2 + 48);
        v11 = 0LL;
        v12 = (_QWORD *)(*v10 - 72LL);
        if ( v10 != (_QWORD *)*v10 )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
              WdfDriverGlobals,
              *v12,
              Etw_DeviceListRundown,
              661LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            Pool2[v11] = (__int64)v12;
            v11 = (unsigned int)(v11 + 1);
            v13 = (_QWORD *)v12[9];
            v12 = v13 - 9;
          }
          while ( v10 != v13 );
          v3 = a1;
        }
        KeReleaseSpinLock(v2, v9);
        v16 = 0;
        if ( (_DWORD)v6 )
        {
          v17 = Pool2;
          do
          {
            v18 = (_QWORD *)*v17;
            if ( !*v17 )
              break;
            Etw_DeviceRundown(v3, *v17, v14, v15);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1648))(
              WdfDriverGlobals,
              *v18,
              Etw_DeviceListRundown,
              697LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v16;
            ++v17;
          }
          while ( v16 < (unsigned int)v6 );
        }
        ExFreePoolWithTag(Pool2, 0x49434858u);
        return;
      }
      v6 = *(unsigned int *)(a2 + 64);
      KeReleaseSpinLock(v2, v8);
      ExFreePoolWithTag(Pool2, 0x49434858u);
    }
  }
}
