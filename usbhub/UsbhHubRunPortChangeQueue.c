__int64 __fastcall UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
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
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int PortState; // r13d
  int v28; // eax
  int v29; // r12d
  int v30; // r8d
  _DWORD *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  _DWORD *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 result; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // [rsp+70h] [rbp-21h] BYREF
  __int64 v44; // [rsp+78h] [rbp-19h]
  __int128 v45; // [rsp+80h] [rbp-11h]
  __int128 v46; // [rsp+90h] [rbp-1h]
  __int128 v47; // [rsp+A0h] [rbp+Fh]
  __int64 v48; // [rsp+B0h] [rbp+1Fh]
  int v50; // [rsp+110h] [rbp+7Fh] BYREF
  int v51; // [rsp+114h] [rbp+83h]

  v51 = HIDWORD(a4);
  v4 = a3;
  v50 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  v44 = v7;
  if ( !v7 )
    goto LABEL_99;
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
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      98,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v10 = *(_DWORD **)(a1 + 64);
    v11 = *(unsigned __int16 *)(a2 + 4);
    v43 = 0LL;
    if ( !v10 )
LABEL_97:
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
        goto LABEL_97;
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
            v43 = UsbhDispatch_PortChangeQueueNullEventEx(a1, v18, 16, v4, (__int64)&v43);
        }
      }
    }
    if ( !v43 )
      goto LABEL_61;
    *(_QWORD *)(a2 + 376) = v4;
    v20 = v43;
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
    if ( (*(_DWORD *)(v21 + 8) & 0x16) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
    if ( (*(_DWORD *)(v21 + 8) & 1) != 0 )
      *(_WORD *)(a2 + 2839) = 256;
    PortState = UsbhQueryPortState(a1);
    if ( (PortState & 0xC0000000) != 0xC0000000 )
    {
      if ( *(_DWORD *)(v21 + 48) == 2 )
        v28 = UsbhHubProcessTimeoutObj(a1, a2, v21, &v50);
      else
        v28 = UsbhHubDispatchPortEvent(a1);
      v29 = v28;
      goto LABEL_47;
    }
    v50 = 0;
    v42 = *(_DWORD *)(v21 + 48);
    v48 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    if ( v42 == 2 )
    {
      UsbhHubProcessTimeoutObj(a1, a2, v21, &v50);
    }
    else if ( v42 == 1 )
    {
      UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v4, 1, *(_QWORD *)(v21 + 40));
      goto LABEL_85;
    }
    UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v4, 0, 0LL);
LABEL_85:
    WORD2(v45) = *(_WORD *)(a2 + 4);
    LODWORD(v45) = 1145332592;
    DWORD2(v45) = 0x80000;
    v29 = UsbhHubDispatchPortEvent(a1);
    if ( !(unsigned __int8)Usb_Disconnected(PortState) && !*(_BYTE *)(v44 + 5268) )
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v21, 56, PortState, 0, usbfile_pchange_c, 6038, 1);
LABEL_47:
    *(_BYTE *)(a2 + 2840) = 0;
    if ( *(_DWORD *)(v21 + 48) == 1 )
      UsbhUnlatchPdo(a1, *(_QWORD *)(v21 + 40), v21, 0x49515043u);
    ExFreePoolWithTag((PVOID)v21, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v29 == 5 )
    {
      LODWORD(v4) = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      goto LABEL_61;
    }
    if ( *(int *)(a2 + 2876) > 50 )
      break;
    if ( v29 == 4 )
      goto LABEL_52;
    if ( v29 == 3 )
      goto LABEL_93;
    v4 = a3;
  }
  UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 6117, 1);
LABEL_93:
  *(_DWORD *)(a2 + 400) = 4;
LABEL_52:
  v31 = *(_DWORD **)(a1 + 64);
  if ( !v31 )
    goto LABEL_99;
  if ( *v31 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v31);
  LODWORD(v4) = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v31,
      v30,
      71,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v32 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v33 = *(_QWORD *)(a1 + 64);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
      *(_DWORD *)v34 = 959530320;
      *(_QWORD *)(v34 + 8) = 0LL;
      *(_QWORD *)(v34 + 16) = 0LL;
      *(_QWORD *)(v34 + 24) = v32;
    }
  }
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 19, a3, 0LL, 0, 0LL, 0LL);
LABEL_61:
  *(_DWORD *)(a2 + 8) = 0;
  v35 = *(_DWORD **)(a1 + 64);
  if ( !v35 )
LABEL_99:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v35 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v35);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  v36 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 909133136;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = 0LL;
      *(_QWORD *)(v38 + 24) = v36;
    }
  }
  result = UsbhDispatch_PortChangeQueueEventEx(a1, a2, 6, v4, 0LL, 0, 0LL, 0LL);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v40 = *(_QWORD *)(a1 + 64);
    if ( v40 )
    {
      result = 762017649LL;
      v41 = *(_QWORD *)(v40 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
      *(_DWORD *)v41 = 762017649;
      *(_QWORD *)(v41 + 8) = 0LL;
      *(_QWORD *)(v41 + 16) = a2;
      *(_QWORD *)(v41 + 24) = 0LL;
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
