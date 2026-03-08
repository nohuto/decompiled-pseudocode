/*
 * XREFs of UsbhRefPdo @ 0x1C00012A0
 * Callers:
 *     UsbhCompletePdoWakeIrps @ 0x1C0001010 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000EB10 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     UsbhBusResume_Action @ 0x1C0012650 (UsbhBusResume_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001C090 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhSetPortData @ 0x1C0057810 (UsbhSetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhRefPdo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v7; // rbx
  __int64 Pool2; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 1668571500;
    v9 = v7 + 318;
    *(_QWORD *)(Pool2 + 32) = a2;
    *(_DWORD *)(Pool2 + 24) = a4;
    *(_QWORD *)(Pool2 + 40) = a3;
    v10 = (_QWORD *)(Pool2 + 8);
    v11 = (_QWORD *)*((_QWORD *)v9 + 1);
    if ( (_DWORD *)*v11 != v9 )
      __fastfail(3u);
    *v10 = v9;
    v10[1] = v11;
    *v11 = v10;
    *((_QWORD *)v9 + 1) = v10;
  }
  else
  {
    ++v7[322];
  }
  return a2;
}
