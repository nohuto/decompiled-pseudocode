/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000E4EC
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C007C520 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000E29C (HUBFDO_GetPortStatusForDebugging.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00796AC (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInfo(__int64 a1, __int64 a2, size_t a3, int a4, char a5)
{
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // esi
  _QWORD *i; // rax
  _QWORD *v13; // rcx
  __int64 j; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  _WORD *v18; // rcx
  int v19; // eax
  KIRQL v20; // al
  int v21; // ecx
  KIRQL v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
  unsigned int v25; // r11d
  _QWORD *v26; // rcx
  __int64 v27; // r9
  unsigned int k; // r10d
  _BYTE *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // edx
  bool v38; // sf
  const EVENT_DESCRIPTOR *v39; // rdx
  int v40; // edx
  PKSPIN_LOCK *v41; // r8
  __int64 v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+28h] [rbp-40h]
  void *v45; // [rsp+30h] [rbp-38h] BYREF
  KIRQL v46; // [rsp+38h] [rbp-30h]
  PKSPIN_LOCK SpinLock[2]; // [rsp+40h] [rbp-28h] BYREF

  v45 = 0LL;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C006A198);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v45,
          0LL);
  if ( (v11 & 0x80000000) == 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters(v10, 4, a4, (_DWORD)v45, 35LL, a3);
    if ( (v11 & 0x80000000) == 0 )
    {
      v8 = *(unsigned __int16 *)v45;
      memset(v45, 0, a3);
      for ( i = *(_QWORD **)(v10 + 2360); ; i = (_QWORD *)*i )
      {
        v13 = i - 31;
        if ( (_QWORD *)(v10 + 2360) == i )
          goto LABEL_9;
        if ( *((unsigned __int16 *)v13 + 100) == v8 )
          break;
      }
      if ( i == (_QWORD *)248 )
      {
LABEL_9:
        *(_DWORD *)((char *)v45 + 31) = 3;
        goto LABEL_10;
      }
      *(_DWORD *)((char *)v45 + 31) = *((_DWORD *)v13 + 356);
LABEL_10:
      if ( *(_BYTE *)(v10 + 12) )
        HUBFDO_GetPortStatusForDebugging((_QWORD *)v10, v8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
        WdfDriverGlobals,
        *(_QWORD *)(v10 + 16));
      for ( j = 0LL; ; j = v16 )
      {
        v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                *(_QWORD *)(v10 + 16),
                j,
                1LL);
        v16 = v15;
        if ( !v15
          || v15 != *(_QWORD *)(v10 + 2656)
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v15,
                                     off_1C006A0F8)
                                 + 48) == v8 )
        {
          break;
        }
      }
      if ( v16 )
      {
        v17 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                            WdfDriverGlobals,
                            v16,
                            off_1C006A0F8)
                        + 24);
        *(_DWORD *)v45 = v8;
        v18 = v45;
        *(_OWORD *)((char *)v45 + 4) = *(_OWORD *)(v17 + 1988);
        v18[10] = *(_WORD *)(v17 + 2004);
        *(_DWORD *)((char *)v45 + 27) = 0;
        v19 = *(_DWORD *)(v17 + 172);
        if ( a5 )
        {
          if ( v19 == 3 )
            *((_BYTE *)v45 + 23) = 2;
          else
            *((_BYTE *)v45 + 23) = v19;
        }
        else
        {
          *((_BYTE *)v45 + 23) = v19 == 0;
        }
        *(_WORD *)((char *)v45 + 25) = *(_WORD *)(v17 + 1648);
        if ( (*(_DWORD *)(v17 + 1632) & 2) != 0 )
          *((_BYTE *)v45 + 24) = 1;
        SpinLock[0] = (PKSPIN_LOCK)(v17 + 40);
        v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 40));
        v21 = *(_DWORD *)(v17 + 1636);
        v22 = v20;
        v46 = v20;
        if ( (v21 & 0x10) != 0 && (v23 = *(_QWORD *)(v17 + 48)) != 0 )
        {
          v24 = a3 - 35;
          v25 = 0;
          *((_BYTE *)v45 + 22) = *(_BYTE *)(v23 + 37);
          *(_DWORD *)((char *)v45 + 27) = *(_DWORD *)(*(_QWORD *)(v17 + 48) + 8LL);
          v26 = (_QWORD *)(*(_QWORD *)(v17 + 48) + 16LL);
          v27 = *v26 - 8LL;
          if ( v26 != (_QWORD *)*v26 )
          {
            do
            {
              if ( v24 < 0xB )
                break;
              for ( k = 0; k < *(_DWORD *)(v27 + 24); *(_DWORD *)((char *)v45 + v31 + 42) = 0 )
              {
                if ( v24 < 0xB )
                  break;
                v29 = v45;
                v24 -= 11LL;
                v30 = v25++;
                v31 = 11 * v30;
                v32 = k++;
                v33 = *(_QWORD *)(v27 + 72 * (v32 + 1));
                *(_DWORD *)((char *)v45 + v31 + 35) = *(_DWORD *)v33;
                *(_WORD *)&v29[v31 + 39] = *(_WORD *)(v33 + 4);
                v29[v31 + 41] = *(_BYTE *)(v33 + 6);
              }
              v34 = *(_QWORD *)(v27 + 8);
              v27 = v34 - 8;
            }
            while ( *(_QWORD *)(v17 + 48) + 16LL != v34 );
            v22 = v46;
          }
          KeReleaseSpinLock(SpinLock[0], v22);
          v35 = a3 - v24;
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 40), v20);
          v35 = 35LL;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v35);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          35LL);
        v11 = 0;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 2520),
      2u,
      3u,
      0x3Au,
      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
      v11);
  }
  if ( a5 == 1 )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    *(_OWORD *)SpinLock = 0LL;
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    v37 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, PKSPIN_LOCK *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v36, SpinLock)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v38 = v37 < 0;
    v39 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_COMPLETE;
  }
  else
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    *(_OWORD *)SpinLock = 0LL;
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    v40 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, PKSPIN_LOCK *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v36, SpinLock)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v38 = v40 < 0;
    v39 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_COMPLETE;
  }
  v41 = SpinLock;
  if ( v38 )
    v41 = 0LL;
  LODWORD(v44) = v11;
  LODWORD(v43) = v8;
  McTemplateK0pqq_EtwWriteTransfer(v36, v39, (const GUID *)v41, *(_QWORD *)(v10 + 248), v43, v44);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}
