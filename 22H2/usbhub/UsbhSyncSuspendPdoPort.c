/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1C0014C0C
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C0018B00 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetDx @ 0x1C0018BE0 (UsbhPdoSetDx.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhPCE_Suspend @ 0x1C0016A98 (UsbhPCE_Suspend.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C002F46C (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x1C00551FC (UsbhEnableDeviceForWake.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v6; // rbx
  int v7; // edx
  _DWORD *v8; // rax
  unsigned int v9; // esi
  _DWORD *v10; // rax
  int v12; // eax
  int v13; // [rsp+48h] [rbp-8h]
  int v14; // [rsp+80h] [rbp+30h] BYREF
  int v15; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1,
        18,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
        a2);
  }
  v6 = PdoExt(a2);
  v7 = UsbhQueryPortState(*(_QWORD *)(a1 + 8), *((_WORD *)v6 + 714), (__int64)&v15, &v14);
  if ( v7 >= 0 && (v15 & 1) != 0 )
  {
    if ( (v6[355] & 0x100) != 0 && (int)PdoExt(a2)[588] >= 0 && !a3 && (v6[355] & 4) == 0 )
    {
      v12 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v14);
      if ( (v12 & 0xC0000000) == 0xC0000000 )
      {
        LOBYTE(v13) = 0;
        UsbhException(
          *(_QWORD *)(a1 + 8),
          *((unsigned __int16 *)v6 + 714),
          50,
          0,
          0,
          v12,
          v14,
          usbfile_pdopwr_c,
          1404,
          v13);
      }
    }
    v14 = *((unsigned __int16 *)v6 + 714);
    if ( dword_1C006C4D0 )
    {
      v8 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v8 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v8 + 554))(*((_QWORD *)v8 + 529), 0LL, 3LL, &v14);
    }
    v9 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *((unsigned __int16 *)v6 + 714));
    v14 = *((unsigned __int16 *)v6 + 714);
    if ( dword_1C006C4D0 )
    {
      v10 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v10 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v10 + 554))(*((_QWORD *)v10 + 529), 0LL, 4LL, &v14);
    }
  }
  else
  {
    LOBYTE(v13) = 0;
    UsbhException(*(_QWORD *)(a1 + 8), *((unsigned __int16 *)v6 + 714), 118, 0, 0, v7, v14, usbfile_pdopwr_c, 1420, v13);
    return (unsigned int)-1073741823;
  }
  return v9;
}
