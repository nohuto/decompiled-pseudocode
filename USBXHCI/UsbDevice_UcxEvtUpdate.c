/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x1C001DDD0
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D43C (UsbDevice_UpdateUsbDevice.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 */

char __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r13
  char v10; // r8
  __int64 v11; // rax
  unsigned int v12; // r10d
  __int64 *v13; // rsi
  _QWORD **v14; // rcx
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // r8
  int v18; // edx
  int v19; // edx
  __int64 v20; // rax
  __int64 *v21; // rax
  char v22; // cl
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _OWORD v29[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+40h] [rbp-38h]

  memset(v29, 0, sizeof(v29));
  v2 = 0;
  v30 = 0LL;
  LOWORD(v29[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v29);
  v4 = *((_QWORD *)&v29[0] + 1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v29[0] + 1) + 16LL),
         off_1C00632C0);
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v7 + 144);
  v9 = *(_QWORD *)(v7 + 88);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
  {
    v10 = *(_BYTE *)(v5 + 657);
    v11 = *(_QWORD *)((v10 != 0 ? 648LL : 640LL) + v5);
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 44);
    else
      v12 = 0;
    v13 = (__int64 *)(v6 + 648);
    v14 = (_QWORD **)(v6 + 648);
    if ( !v10 )
      v14 = (_QWORD **)(v6 + 640);
    v15 = *v14;
    if ( v15 )
      v15 = (_QWORD *)v15[2];
    memset(v15, 0, v12);
    v16 = (__int64 *)(v6 + 648);
    if ( !*(_BYTE *)(v6 + 657) )
      v16 = (__int64 *)(v6 + 640);
    v17 = *v16;
    if ( *v16 )
      v17 = *(_QWORD *)(v17 + 16);
    v18 = *(_DWORD *)(v9 + 104);
    *(_DWORD *)(v17 + 4) |= 1u;
    v19 = v18 & 4;
    *(_WORD *)((v19 != 0 ? 0x20 : 0) + v17 + 36) = *(_WORD *)(v4 + 48);
    v20 = v19 != 0 ? 0x20 : 0;
    *(_DWORD *)(v20 + v17 + 40) &= 0x3FFFFFu;
    memset((void *)(v6 + 456), 0, 0x60uLL);
    *(_QWORD *)(v6 + 504) = v6;
    *(_QWORD *)(v6 + 496) = UsbDevice_UpdateCompletion;
    *(_DWORD *)(v6 + 492) = *(_DWORD *)(v6 + 492) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 495) = *(_BYTE *)(v6 + 135);
    v21 = (__int64 *)(v6 + 648);
    v22 = *(_BYTE *)(v6 + 657);
    if ( !v22 )
      v21 = (__int64 *)(v6 + 640);
    v23 = *v21;
    if ( v23 )
      v23 = *(_QWORD *)(v23 + 24);
    *(_QWORD *)(v6 + 480) = v23;
    v24 = (__int64 *)(v6 + 648);
    if ( !v22 )
      v24 = (__int64 *)(v6 + 640);
    v25 = *v24;
    if ( v25 )
      v25 = *(_QWORD *)(v25 + 16);
    *(_QWORD *)(v6 + 528) = v25;
    if ( !v22 )
      v13 = (__int64 *)(v6 + 640);
    v26 = *v13;
    if ( *v13 )
      LODWORD(v26) = *(_DWORD *)(v26 + 44);
    v27 = *(_QWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 536) = v26;
    *(_DWORD *)(v6 + 540) = 1;
    *(_QWORD *)(v6 + 544) = v6;
    if ( Controller_IsControllerAccessible(v27) )
    {
      *(_QWORD *)(v6 + 424) = a2;
      *(_BYTE *)(v6 + 432) = 0;
      return Command_SendCommand(v8, v6 + 456);
    }
    v2 = -1073741810;
  }
  else
  {
    UsbDevice_UpdateUsbDevice(v5, v4);
  }
  *(_QWORD *)(v6 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v2);
}
