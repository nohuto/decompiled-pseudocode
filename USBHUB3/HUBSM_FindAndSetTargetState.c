char __fastcall HUBSM_FindAndSetTargetState(__int64 a1, unsigned int a2, _BYTE *a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // r15d
  char v8; // bp
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v13; // eax
  _BYTE *v14; // r10
  struct _KEVENT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  _UNKNOWN **v21; // rdx
  int v22; // eax
  __int64 v23; // r13
  int v24; // esi
  unsigned __int16 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int16 v29; // r9
  __int64 v30; // rax
  unsigned int v31; // edx
  int v33; // [rsp+20h] [rbp-78h]
  __int64 v34; // [rsp+28h] [rbp-70h]
  __int64 v35; // [rsp+30h] [rbp-68h]
  __int64 v36; // [rsp+38h] [rbp-60h]
  __int64 v37; // [rsp+40h] [rbp-58h]
  int v38; // [rsp+A0h] [rbp+8h]
  __int64 v41; // [rsp+B8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 880);
  v5 = *(_QWORD *)(a1 + 976);
  v6 = a2;
  *a3 = 0;
  v7 = v3;
  v41 = v5;
  v8 = 1;
  v38 = *(_DWORD *)(a1 + 984);
  while ( 1 )
  {
    v9 = v7;
    LODWORD(v10) = 0;
    v11 = 1002;
    v12 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v7 + 852) - *(_DWORD *)(a1 + 984)));
    v13 = *(_DWORD *)(v12 + 32);
    if ( v13 != 1000 )
    {
      v5 = 0LL;
      while ( v6 != v13 )
      {
        v10 = (unsigned int)(v10 + 1);
        v5 = (unsigned int)v10;
        v13 = *(_DWORD *)(v12 + 8 * v10 + 32);
        if ( v13 == 1000 )
          goto LABEL_8;
      }
      v11 = *(_DWORD *)(v12 + 8 * v5 + 36);
      if ( v11 != 1002 )
        break;
LABEL_8:
      v5 = v41;
    }
    if ( !v7 )
      break;
    --v7;
  }
  v14 = a3;
  if ( v11 > 0x3EE )
  {
    switch ( v11 )
    {
      case 0x3EFu:
        v31 = -1073741630;
        break;
      case 0x3F0u:
        v31 = -1073741810;
        break;
      case 0x3F1u:
        v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1608LL);
        goto LABEL_19;
      case 0x3F2u:
        v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1584LL);
        goto LABEL_19;
      case 0x3F3u:
        v16 = 3027LL;
LABEL_21:
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
          v16);
        return 0;
      default:
        goto LABEL_31;
    }
    HUBHTX_CompleteGetPortStatusWithFailedStatus(*(_QWORD *)(a1 + 960), v31);
    return 0;
  }
  switch ( v11 )
  {
    case 0x3EEu:
      v18 = *(_QWORD **)(a1 + 960);
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              v18[62]);
      memset((void *)(*(_QWORD *)(v19 + 184) - 72LL), 0, 0x48uLL);
      *(_DWORD *)(v19 + 48) = -1073741823;
      HUBFDO_CompleteGetDescriptorRequest(*v18, *(unsigned __int16 *)(v18[1] + 200LL), v18[62], -1073741823, 0);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v18);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v20,
        "User Mode FDO Request",
        583LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      return 0;
    case 0x3E8u:
      return 0;
    case 0x3EAu:
      HUBSM_LogUnhandledEvent(a1, v6);
      return 0;
    case 0x3EBu:
      v17 = *(_QWORD *)(a1 + 960);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2104))(
        WdfDriverGlobals,
        *(_QWORD *)(v17 + 456),
        3221225473LL);
      if ( (*(_DWORD *)(v17 + 1636) & 0x40) != 0 )
      {
        *(_OWORD *)(a1 + 1012) = 0LL;
        _InterlockedAnd((volatile signed __int32 *)(v17 + 1636), 0xFFFFFFBF);
      }
      return 0;
    case 0x3ECu:
      v16 = 3011LL;
      goto LABEL_21;
    case 0x3EDu:
      v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 472LL);
LABEL_19:
      KeSetEvent(v15, 0, 0);
      return 0;
  }
LABEL_31:
  v21 = &WPP_RECORDER_INITIALIZED;
  if ( v7 >= v3 )
    goto LABEL_49;
  do
  {
    v22 = *(_DWORD *)(a1 + 984);
    v23 = v3 - 1;
    v24 = *(_DWORD *)(a1 + 4 * v23 + 852);
    --v3;
    switch ( v22 )
    {
      case 2000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_45;
        v25 = 16;
        goto LABEL_44;
      case 3000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_45;
        v25 = 17;
        goto LABEL_44;
      case 4000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_45;
        v25 = 15;
        goto LABEL_44;
    }
    if ( v22 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 18;
LABEL_44:
      v34 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL(v5, (__int64)v21, v12, v25, v33);
    }
LABEL_45:
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v24;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v23;
    v26 = *(unsigned __int8 *)(a1 + 832);
    v5 = 3 * v26;
    *(_DWORD *)(a1 + 12 * v26) = 1000;
    *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LODWORD(v37) = v23;
      LODWORD(v36) = 1000;
      LODWORD(v35) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v24 - *(_DWORD *)(a1 + 984)));
      LODWORD(v34) = *(_DWORD *)(a1 + 984);
      McTemplateK0ppqqqq_EtwWriteTransfer(
        v5,
        &USBHUB3_ETW_EVENT_STATE_MACHINE,
        (const GUID *)(a1 + 1012),
        *(_QWORD *)(a1 + 1032),
        *(_QWORD *)(a1 + 960),
        v34,
        v35,
        v36,
        v37);
    }
  }
  while ( v3 > v7 );
  v6 = a2;
  v21 = &WPP_RECORDER_INITIALIZED;
  v14 = a3;
  v9 = v7;
LABEL_49:
  v27 = *(_QWORD *)(v41 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v9 + 852) - v38));
  if ( (*(_DWORD *)(v27 + 16) & 0x40) != 0 )
    *v14 = 1;
  *(_DWORD *)(a1 + 4 * v9 + 852) = v11;
  v28 = *(_DWORD *)(a1 + 984);
  *(_DWORD *)(a1 + 880) = v7;
  switch ( v28 )
  {
    case 2000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_64;
      v29 = 16;
      goto LABEL_63;
    case 3000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_64;
      v29 = 17;
      goto LABEL_63;
    case 4000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_64;
      v29 = 15;
LABEL_63:
      v34 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL(v27, (__int64)&WPP_RECORDER_INITIALIZED, v12, v29, v33);
      goto LABEL_64;
  }
  if ( v28 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = 18;
    goto LABEL_63;
  }
LABEL_64:
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v11;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v7;
  v30 = *(unsigned __int8 *)(a1 + 832);
  *(_DWORD *)(a1 + 12 * v30) = v6;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    LODWORD(v37) = v7;
    LODWORD(v36) = v6;
    LODWORD(v35) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (v11 - *(_DWORD *)(a1 + 984)));
    LODWORD(v34) = *(_DWORD *)(a1 + 984);
    McTemplateK0ppqqqq_EtwWriteTransfer(
      3 * v30,
      &USBHUB3_ETW_EVENT_STATE_MACHINE,
      (const GUID *)(a1 + 1012),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 960),
      v34,
      v35,
      v36,
      v37);
  }
  if ( *(_BYTE *)(a1 + 1049) )
    HUBMISC_DbgBreak("Break On State Transition", v21);
  return v8;
}
