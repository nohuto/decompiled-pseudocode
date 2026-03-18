/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x1C0008BD0
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C00071D0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C00346D8 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C00015A0 (UsbhSignalResumeEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C00029EC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhWaitConnect @ 0x1C000ABD0 (UsbhWaitConnect.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhAcquireEnumBusLock @ 0x1C00126A8 (UsbhAcquireEnumBusLock.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C001518C (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0017FEC (UsbhSignalDriverResetEvent.c)
 *     UsbhHandleSuspend @ 0x1C001BDDC (UsbhHandleSuspend.c)
 *     UsbhEnumerate1 @ 0x1C001C7A8 (UsbhEnumerate1.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C002F0C8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002F39C (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSuspendEvent @ 0x1C0035C9C (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhEnumerate2 @ 0x1C004D298 (UsbhEnumerate2.c)
 *     UsbhDropDevice @ 0x1C004D614 (UsbhDropDevice.c)
 *     UsbhHandleOvercurrent @ 0x1C004D7C4 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v5; // r9
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  KIRQL v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // r8
  unsigned __int8 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // ecx
  int v42; // ebp
  __int64 v43; // r14
  __int16 v44; // dx
  int v45; // eax
  __int64 v46; // r14
  __int64 v47; // rcx
  void (__fastcall *v48)(_QWORD, int *, __int64, __int64); // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v53; // rbp
  char *PoolWithTag; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbp
  __int64 *v65; // r14
  __int64 *v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 *v69; // rdx
  __int64 **v70; // rcx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // r9
  __int64 v76; // rax
  int v77; // ebp
  __int64 v78; // rax
  int v79; // r8d
  __int64 v80; // rdx
  struct _KEVENT *v81; // rcx
  __int64 v82; // r10
  int v83; // eax
  __int64 v84; // rbp
  int v85; // eax
  int v86; // [rsp+48h] [rbp-50h]
  int v87; // [rsp+50h] [rbp-48h] BYREF
  KIRQL v88; // [rsp+58h] [rbp-40h]

  v5 = a3;
  if ( !a1 )
    goto LABEL_186;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_185;
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v9 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(v8 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
    *(_DWORD *)v10 = 729179504;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = a2;
    *(_QWORD *)(v10 + 24) = v9;
    LODWORD(v9) = *(unsigned __int16 *)(a2 + 4);
  }
  v11 = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      (unsigned __int16)v9,
      88,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v9,
      0);
    v11 = *(_WORD *)(a2 + 4);
    v5 = a3;
  }
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1313891184;
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = 0LL;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1145332592;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = a2;
        *(_QWORD *)(v15 + 24) = v5;
      }
    }
  }
  v16 = 0LL;
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 1329877100;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v17;
      *(_QWORD *)(v19 + 24) = 1884308559LL;
    }
  }
  v20 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_1C006C500 = (__int64)&dword_1C006C508;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 1413771367;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = v17;
      *(_QWORD *)(v22 + 24) = 0LL;
    }
  }
  if ( !(_WORD)v17 )
    goto LABEL_30;
  v23 = *(_QWORD *)(a1 + 64);
  if ( !v23 )
LABEL_185:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v23 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v23);
  if ( (unsigned __int16)v17 <= *(unsigned __int8 *)(v23 + 2938) )
  {
    v24 = *(_QWORD *)(v23 + 3056);
    if ( v24 )
    {
      v25 = 2928 * v17 + v24 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v26 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v26 = 1044672615;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = v17;
        *(_QWORD *)(v26 + 24) = v25;
      }
      if ( v25 )
      {
        v16 = *(_QWORD *)(v25 + 392);
        if ( v16 )
        {
          v53 = *(_QWORD *)(v16 + 64);
          if ( !v53 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v25 + 392), 0LL);
          if ( *(_DWORD *)v53 != 1329877064 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v25 + 392), *(_QWORD *)(v16 + 64));
          PoolWithTag = (char *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x30uLL, 0x42554855u);
          if ( PoolWithTag )
          {
            *(_QWORD *)(PoolWithTag + 4) = 0LL;
            *(_QWORD *)(PoolWithTag + 12) = 0LL;
            *((_DWORD *)PoolWithTag + 5) = 0;
            *((_QWORD *)PoolWithTag + 5) = 0LL;
            *((_QWORD *)PoolWithTag + 3) = 1884308559LL;
            *(_DWORD *)PoolWithTag = 1668571500;
            *((_QWORD *)PoolWithTag + 4) = v16;
            v55 = PoolWithTag + 8;
            v56 = *(_QWORD **)(v53 + 1280);
            if ( *v56 != v53 + 1272 )
              goto LABEL_180;
            *v55 = v53 + 1272;
            v55[1] = v56;
            *v56 = v55;
            *(_QWORD *)(v53 + 1280) = v55;
          }
          else
          {
            ++*(_DWORD *)(v53 + 1288);
          }
        }
      }
    }
  }
LABEL_30:
  qword_1C006C500 = 0LL;
  KeReleaseSpinLock(&HubG, v20);
  if ( v16 )
    *(_DWORD *)(a2 + 416) = 1;
  v27 = *a4;
  v28 = (v16 != 0) | 0x10;
  if ( (v27 & 1) == 0 )
    v28 = v16 != 0;
  v29 = v28 | 2;
  if ( (v27 & 4) == 0 )
    v29 = v28;
  if ( (v27 & 8) != 0 )
    v29 |= 4u;
  *(_WORD *)(a2 + 420) = v27;
  v30 = v29 | 8;
  if ( (v27 & 2) == 0 )
    v30 = v29;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v31 = *(_QWORD *)(a1 + 64);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
      *(_DWORD *)v32 = 1414087210;
      *(_QWORD *)(v32 + 24) = v30;
      *(_QWORD *)(v32 + 8) = 0LL;
      *(_QWORD *)(v32 + 16) = v27;
    }
  }
  v33 = *(unsigned __int16 *)(a2 + 4);
  v34 = *(unsigned int *)(a2 + 400);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 844382762;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = v34;
      *(_QWORD *)(v36 + 24) = v33;
    }
  }
  v37 = a3;
  v38 = *(unsigned int *)(a3 + 8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
      *(_DWORD *)v40 = 861159978;
      *(_QWORD *)(v40 + 24) = v30;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = v38;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v38,
        89,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_WORD *)(a2 + 420));
      v37 = a3;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int16 *)(a2 + 4),
          v38,
          90,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_DWORD *)(a2 + 400));
        v37 = a3;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v38,
            91,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            *(_DWORD *)(v37 + 8));
          v37 = a3;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v38,
            92,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            v30);
          v37 = a3;
        }
      }
    }
  }
  if ( (*(_WORD *)(a2 + 420) & 0x108) == 0 )
  {
    v76 = *(unsigned int *)(v37 + 8);
    if ( (v76 & 0x80008) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v77 = a3;
      }
      else
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          93,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
        v77 = a3;
        v76 = *(unsigned int *)(a3 + 8);
      }
      Log(a1, 512, 1886353240, v30, v76);
      v30 &= ~8u;
      UsbhSignalResumeEvent(a1, a2);
      UsbhSignalSuspendEvent(a1, a2);
      LOBYTE(v86) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 60, v77, 56, 0, 0, usbfile_pchange_c, 5582, v86);
      v37 = a3;
    }
  }
  v41 = *(_DWORD *)(v37 + 8);
  v42 = *(_DWORD *)(v37 + 32);
  v43 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v44 = *(_WORD *)(a2 + 420);
  v45 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v43;
  v46 = a2 + 32 * (v43 + 27);
  v87 = 0;
  *(_DWORD *)v46 = v45;
  *(_DWORD *)(v46 + 4) = v41;
  *(_BYTE *)(v46 + 18) = v30;
  *(_WORD *)(v46 + 16) = v44;
  *(_QWORD *)(v46 + 8) = v16;
  *(_BYTE *)(v46 + 19) = 0;
  *(_DWORD *)(v46 + 20) = v42;
  *(_DWORD *)(v46 + 28) = 1;
  v47 = *(_QWORD *)(a1 + 64);
  if ( !v47 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v47 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v48 = *(void (__fastcall **)(_QWORD, int *, __int64, __int64))(v47 + 4592);
  if ( v48 )
  {
    v48(*(_QWORD *)(v47 + 4560), &v87, v38, v34);
    LODWORD(v48) = v87;
    v37 = a3;
  }
  *(_DWORD *)(v46 + 24) = (_DWORD)v48 - v42;
  if ( !v16 )
  {
LABEL_67:
    if ( (*(_DWORD *)(v37 + 8) & 0x20000) == 0 || (v75 = *(_QWORD *)(v37 + 40), v75 == v16) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          94,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
        v37 = a3;
      }
      v49 = *(_DWORD *)(a2 + 400);
      if ( v49 )
      {
        v71 = v49 - 1;
        if ( v71 )
        {
          v72 = v71 - 1;
          if ( v72 )
          {
            v73 = v72 - 1;
            if ( v73 )
            {
              v74 = v73 - 1;
              if ( v74 )
              {
                if ( v74 == 1 )
                  *(_DWORD *)(a2 + 400) = UsbhHandleSuspend(a1, v16);
              }
              else
              {
                if ( (*(_DWORD *)(v37 + 8) & 8) != 0 )
                {
                  *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent(a1, v16);
                }
                else
                {
                  *(_DWORD *)(a2 + 400) = 4;
                  v83 = *(_DWORD *)(v37 + 8);
                  if ( (v83 & 0x20000) != 0 )
                  {
                    UsbhSignalSyncDeviceResetPdo(a1, v16, 3221225473LL);
                    UsbhSignalDriverResetEvent(a1, a2);
                    v84 = a3;
                    v83 = *(_DWORD *)(a3 + 8);
                  }
                  else
                  {
                    v84 = a3;
                  }
                  if ( (v83 & 0x10000) != 0 )
                  {
                    UsbhSignalSyncDeviceResetPdo(a1, v16, 3221225473LL);
                    UsbhSignalDriverResetEvent(a1, a2);
                    v83 = *(_DWORD *)(v84 + 8);
                  }
                  if ( (v83 & 0x40000) != 0 )
                  {
                    UsbhSignalSuspendEvent(a1, a2);
                    v83 = *(_DWORD *)(v84 + 8);
                  }
                  if ( (v83 & 0x100000) != 0 )
                  {
                    UsbhSignalResumeEvent(a1, a2);
                    if ( v30 == 1 )
                    {
                      UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
                      UsbhDropDevice(a1, a2, v16);
                    }
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    96,
                    (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids);
                }
                Log(a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v30);
              }
            }
            else
            {
              if ( (*(_DWORD *)(v37 + 8) & 8) != 0 )
                UsbhHandleOvercurrent(a1, v16);
              *(_DWORD *)(a2 + 400) = 3;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  95,
                  (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids);
              }
              Log(a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v30);
            }
          }
          else
          {
            *(_DWORD *)(a2 + 400) = UsbhEnumerate2(a1, v16);
          }
        }
        else
        {
          *(_DWORD *)(a2 + 400) = UsbhEnumerate1(a1, v16);
        }
      }
      else
      {
        *(_DWORD *)(a2 + 400) = UsbhWaitConnect(a1, v16);
      }
    }
    else
    {
      Log(a1, 512, 1685222994, v75, *(unsigned int *)(v37 + 8));
      UsbhSignalSyncDeviceResetPdo(a1, *(_QWORD *)(v82 + 40), 3221225486LL);
      UsbhSignalDriverResetEvent(a1, a2);
    }
    goto LABEL_73;
  }
  v57 = *(_QWORD *)(v16 + 64);
  if ( !v57 )
    goto LABEL_178;
  if ( *(_DWORD *)v57 != 1329877064 )
    UsbhTrapFatal_Dbg(v16, *(_QWORD *)(v16 + 64));
  if ( !*(_BYTE *)(v57 + 2740) || (*(_BYTE *)(a2 + 420) & 1) != 0 )
  {
    if ( (*(_DWORD *)(v57 + 1420) & 0x400000) != 0 )
    {
      KeWaitForSingleObject((PVOID)(v57 + 2944), Executive, 0, 0, 0LL);
      if ( (*(_DWORD *)(v57 + 1420) & 0x4000000) != 0 && (*(_BYTE *)(a3 + 8) & 1) != 0 )
      {
        Log(a1, 512, 1144213585, HIBYTE(*(_DWORD *)(v57 + 1420)) & 1, *(unsigned __int16 *)(a2 + 420));
        *(_DWORD *)(v57 + 1420) |= 0x3000000u;
        v81 = (struct _KEVENT *)(v57 + 2920);
        if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
          KeSetEvent(v81, 0, 0);
        else
          KeResetEvent(v81);
        KeSetEvent((PRKEVENT)(v57 + 2944), 0, 0);
        goto LABEL_73;
      }
      KeSetEvent((PRKEVENT)(v57 + 2944), 0, 0);
      v37 = a3;
    }
    goto LABEL_67;
  }
  v78 = *(unsigned int *)(v37 + 8);
  if ( (v78 & 0x30008) != 0 )
  {
    if ( (v78 & 0x30000) != 0 )
    {
      Log(a1, 512, 1650742098, *(_QWORD *)(v37 + 40), *(unsigned int *)(v37 + 8));
      UsbhSignalSyncDeviceResetPdo(a1, v16, 3221225473LL);
      UsbhSignalDriverResetEvent(a1, a2);
      v78 = *(unsigned int *)(a3 + 8);
    }
    Log(a1, 512, 1650741836, 0, v78);
    v79 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v8 + 3072) == v79 )
    {
      v80 = *(_QWORD *)(a2 + 376);
      if ( *(_QWORD *)(v8 + 3080) == v80 )
        UsbhReleaseEnumBusLockEx(a1, v80, v79);
    }
    LOBYTE(v86) = 1;
    UsbhException(a1, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 5639, v86);
  }
LABEL_73:
  if ( !*(_DWORD *)(a2 + 416) )
    goto LABEL_74;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    v58 = *(_QWORD *)(a1 + 64);
    if ( v58 )
    {
      v59 = *(_QWORD *)(v58 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
      *(_DWORD *)v59 = 827354229;
      *(_QWORD *)(v59 + 8) = 0LL;
      *(_QWORD *)(v59 + 16) = v16;
      *(_QWORD *)(v59 + 24) = a2;
    }
  }
  v88 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_1C006C500 = (__int64)&dword_1C006C508;
  *(_DWORD *)(a2 + 416) = 0;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    v60 = *(_QWORD *)(a1 + 64);
    if ( v60 )
    {
      v61 = *(_QWORD *)(v60 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v60 + 880)) & *(_DWORD *)(v60 + 884));
      *(_DWORD *)v61 = 844131445;
      *(_QWORD *)(v61 + 8) = 0LL;
      *(_QWORD *)(v61 + 16) = v16;
      *(_QWORD *)(v61 + 24) = a2;
    }
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v62 = *(_QWORD *)(a1 + 64);
    if ( v62 )
    {
      v63 = *(_QWORD *)(v62 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v62 + 880)) & *(_DWORD *)(v62 + 884));
      *(_DWORD *)v63 = 1348891236;
      *(_QWORD *)(v63 + 8) = 0LL;
      *(_QWORD *)(v63 + 16) = v16;
      *(_QWORD *)(v63 + 24) = 1884308559LL;
    }
  }
  if ( !v16 )
LABEL_186:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v64 = *(_QWORD *)(v16 + 64);
  if ( !v64 )
LABEL_178:
    UsbhTrapFatal_Dbg(v16, 0LL);
  if ( *(_DWORD *)v64 != 1329877064 )
    UsbhTrapFatal_Dbg(v16, *(_QWORD *)(v16 + 64));
  v65 = (__int64 *)(v64 + 1272);
  v66 = *(__int64 **)(v64 + 1272);
  if ( v66 == (__int64 *)(v64 + 1272) )
  {
LABEL_181:
    v85 = *(_DWORD *)(v64 + 1288);
    if ( v85 )
      *(_DWORD *)(v64 + 1288) = v85 - 1;
    goto LABEL_114;
  }
  while ( 1 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v67 = *(_QWORD *)(a1 + 64);
      if ( v67 )
      {
        v68 = *(_QWORD *)(v67 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v67 + 880)) & *(_DWORD *)(v67 + 884));
        *(_DWORD *)v68 = 1064591724;
        *(_QWORD *)(v68 + 8) = 0LL;
        *(_QWORD *)(v68 + 16) = v64;
        *(_QWORD *)(v68 + 24) = 1884308559LL;
      }
    }
    if ( *((_DWORD *)v66 + 4) == 1884308559 && !v66[4] )
      break;
    v66 = (__int64 *)*v66;
    if ( v66 == v65 )
      goto LABEL_181;
  }
  v69 = (__int64 *)*v66;
  if ( *(__int64 **)(*v66 + 8) != v66 || (v70 = (__int64 **)v66[1], *v70 != v66) )
LABEL_180:
    __fastfail(3u);
  *v70 = v69;
  v69[1] = (__int64)v70;
  ExFreePoolWithTag(v66 - 1, 0);
LABEL_114:
  if ( (__int64 *)*v65 == v65 && !*(_DWORD *)(v64 + 1288) )
    KeSetEvent((PRKEVENT)(v64 + 1296), 0, 0);
  qword_1C006C500 = 0LL;
  KeReleaseSpinLock(&HubG, v88);
LABEL_74:
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v50 = *(_QWORD *)(a1 + 64);
    if ( v50 )
    {
      v51 = *(_QWORD *)(v50 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
      *(_DWORD *)v51 = 762733936;
      *(_QWORD *)(v51 + 8) = 0LL;
      *(_QWORD *)(v51 + 16) = a2;
      *(_QWORD *)(v51 + 24) = 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      97,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}
