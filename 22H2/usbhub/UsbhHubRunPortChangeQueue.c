/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x1C00071D0
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x1C0007F60 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C00071A0 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     UsbhPCE_psSUSPEND @ 0x1C001C160 (UsbhPCE_psSUSPEND.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002F39C (WPP_RECORDER_SF_dq.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C00346D8 (UsbhHubProcessTimeoutObj.c)
 *     UsbhPCE_wChangeERROR @ 0x1C003573C (UsbhPCE_wChangeERROR.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int PortState; // r13d
  int v29; // edx
  int v30; // eax
  int v31; // r15d
  int v32; // r8d
  _DWORD *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 result; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // [rsp+50h] [rbp-41h]
  __int64 v45; // [rsp+70h] [rbp-21h] BYREF
  __int64 v46; // [rsp+78h] [rbp-19h]
  __int128 v47; // [rsp+80h] [rbp-11h]
  __int128 v48; // [rsp+90h] [rbp-1h]
  __int128 v49; // [rsp+A0h] [rbp+Fh]
  __int64 v50; // [rsp+B0h] [rbp+1Fh]
  int v52; // [rsp+110h] [rbp+7Fh] BYREF
  int v53; // [rsp+114h] [rbp+83h]

  v53 = HIDWORD(a4);
  v4 = a3;
  v52 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  v46 = v7;
  if ( !v7 )
    goto LABEL_101;
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7);
  if ( !v4 || *(_DWORD *)a2 != 1146120296 )
    UsbhTrapFatal_Dbg(a1, a1);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 1466458992;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
    LODWORD(v8) = *(unsigned __int16 *)(a2 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      98,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      v4);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v10 = *(_DWORD **)(a1 + 64);
    v11 = *(unsigned __int16 *)(a2 + 4);
    v45 = 0LL;
    if ( !v10 )
LABEL_99:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v10 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v10,
        (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        74,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v11,
        v4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 909198672;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v11;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1413771367;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v11;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
    if ( (_WORD)v11 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( !v16 )
        goto LABEL_99;
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v16);
      if ( (unsigned __int16)v11 <= *(unsigned __int8 *)(v16 + 2938) )
      {
        v17 = *(_QWORD *)(v16 + 3056);
        if ( v17 )
        {
          v18 = 2928 * v11 + v17 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v19 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v19 = 1044672615;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 16) = v11;
            *(_QWORD *)(v19 + 24) = v18;
          }
          if ( v18 )
            v45 = UsbhDispatch_PortChangeQueueNullEventEx(a1, v18, 16, v4, (__int64)&v45);
        }
      }
    }
    if ( !v45 )
      goto LABEL_63;
    *(_QWORD *)(a2 + 376) = v4;
    v20 = v45;
    *(_QWORD *)(v4 + 24) = KeGetCurrentThread();
    v21 = v20 - 16;
    v22 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 1313891184;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v22;
        *(_QWORD *)(v24 + 24) = 0LL;
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 1145332592;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = a2;
          *(_QWORD *)(v26 + 24) = v21;
        }
      }
    }
    v27 = *(_DWORD *)(v21 + 8);
    if ( (v27 & 0x16) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
      v27 = *(_DWORD *)(v21 + 8);
    }
    if ( (v27 & 1) != 0 )
      *(_WORD *)(a2 + 2839) = 256;
    PortState = UsbhQueryPortState(a1);
    if ( PortState >> 30 == 3 )
      v52 = 0;
    v29 = *(_DWORD *)(v21 + 48);
    if ( PortState >> 30 != 3 )
    {
      if ( v29 == 2 )
        v30 = UsbhHubProcessTimeoutObj(a1, a2, v21, &v52);
      else
        v30 = UsbhHubDispatchPortEvent(a1);
      v31 = v30;
      goto LABEL_49;
    }
    v50 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( v29 == 2 )
    {
      UsbhHubProcessTimeoutObj(a1, a2, v21, &v52);
    }
    else if ( v29 == 1 )
    {
      UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v4, 1, *(_QWORD *)(v21 + 40));
      goto LABEL_87;
    }
    UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v4, 0, 0LL);
LABEL_87:
    WORD2(v47) = *(_WORD *)(a2 + 4);
    LODWORD(v47) = 1145332592;
    DWORD2(v47) = 0x80000;
    v31 = UsbhHubDispatchPortEvent(a1);
    if ( !(unsigned __int8)Usb_Disconnected(PortState) && !*(_BYTE *)(v46 + 5268) )
    {
      LOBYTE(v44) = 1;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v21, 56, PortState, 0, usbfile_pchange_c, 6038, v44);
    }
LABEL_49:
    *(_BYTE *)(a2 + 2840) = 0;
    if ( *(_DWORD *)(v21 + 48) == 1 )
      UsbhUnlatchPdo(a1, *(_QWORD *)(v21 + 40), v21, 1230065731LL);
    ExFreePoolWithTag((PVOID)v21, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v31 == 5 )
    {
      LODWORD(v4) = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      goto LABEL_63;
    }
    if ( *(int *)(a2 + 2876) > 50 )
      break;
    if ( v31 == 4 )
      goto LABEL_54;
    if ( v31 == 3 )
      goto LABEL_95;
    v4 = a3;
  }
  LOBYTE(v44) = 1;
  UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 6117, v44);
LABEL_95:
  *(_DWORD *)(a2 + 400) = 4;
LABEL_54:
  v33 = *(_DWORD **)(a1 + 64);
  if ( !v33 )
    goto LABEL_101;
  if ( *v33 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v33);
  LODWORD(v4) = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v33,
      v32,
      71,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v34 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 959530320;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = 0LL;
      *(_QWORD *)(v36 + 24) = v34;
    }
  }
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 19, a3, 0LL, 0, 0LL, 0LL);
LABEL_63:
  *(_DWORD *)(a2 + 8) = 0;
  v37 = *(_DWORD **)(a1 + 64);
  if ( !v37 )
LABEL_101:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v37 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v37);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  v38 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
      *(_DWORD *)v40 = 909133136;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_QWORD *)(v40 + 24) = v38;
    }
  }
  result = UsbhDispatch_PortChangeQueueEventEx(a1, a2, 6, v4, 0LL, 0, 0LL, 0LL);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v42 )
    {
      result = 762017649LL;
      v43 = *(_QWORD *)(v42 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
      *(_DWORD *)v43 = 762017649;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)(v43 + 16) = a2;
      *(_QWORD *)(v43 + 24) = 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               99,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               *(_WORD *)(a2 + 4));
  }
  return result;
}
