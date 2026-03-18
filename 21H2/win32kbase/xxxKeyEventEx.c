/*
 * XREFs of xxxKeyEventEx @ 0x1C003D9F0
 * Callers:
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00B1B20 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00B4EA0 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01E426C (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01E4538 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     xxxKeyEvent @ 0x1C01EA500 (xxxKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01EA564 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C01EA604 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EAEA0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB020 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB260 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB450 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB6C0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB7E0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C003E4F0 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C003E518 (ApiSetEditionKeyEventLLHook.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C003E734 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ApiSetEditionUpdateSASModifiers @ 0x1C003E764 (ApiSetEditionUpdateSASModifiers.c)
 *     GetKeyEventInputSource @ 0x1C003E890 (GetKeyEventInputSource.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C003EC84 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01DB3B8 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01DB4D0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1C01E920C (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgW.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01E9324 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01E9884 (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 */

void __fastcall xxxKeyEventEx(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        __int64 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10)
{
  unsigned int v10; // r14d
  unsigned __int16 *v11; // rbx
  struct tagTHREADINFO *v13; // rax
  int v15; // r12d
  unsigned int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 KeyboardProcessor; // rax
  int v24; // r14d
  unsigned int v25; // [rsp+58h] [rbp-59h]
  __int64 v26; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v27[2]; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v28; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v29; // [rsp+7Ch] [rbp-35h] BYREF
  BOOL v30; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v31; // [rsp+84h] [rbp-2Dh]
  __int128 v32; // [rsp+88h] [rbp-29h]
  __int64 v33; // [rsp+98h] [rbp-19h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v35[2]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+47h] BYREF
  unsigned int v37; // [rsp+108h] [rbp+57h]
  __int64 v38; // [rsp+110h] [rbp+5Fh]

  v38 = a4;
  v37 = a3;
  *(_QWORD *)v27 = 0LL;
  v10 = 0;
  v11 = a6;
  v13 = gptiCurrent;
  *(_QWORD *)&v32 = gptiCurrent;
  if ( a6 )
    v15 = *a6;
  else
    v15 = 0xFFFF;
  LODWORD(a6) = v15;
  v26 = -1LL;
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::OnKeyEvent((CAsyncKeyEventMonitor *)0xFFFFFFFFLL);
    v13 = (struct tagTHREADINFO *)v32;
  }
  v16 = a7;
  v17 = a9;
  if ( a7 )
  {
    if ( a9 )
    {
      v10 = *(_DWORD *)(a9 + 8);
      v20 = *(_QWORD *)a9;
    }
    else
    {
      v18 = *((_QWORD *)v13 + 53);
      v19 = *(_DWORD *)(v18 + 12);
      v20 = *(_QWORD *)(v18 + 880);
      v10 = v19 >> 31;
    }
    v26 = v20;
  }
  GetKeyEventInputSource(a7, (unsigned __int16)v15, a9, v27);
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x40u);
  v31 = (unsigned __int16)(((a1 & 0x8000) != 0) + 256);
  v21 = v31;
  a7 = v31;
  if ( (unsigned int)dword_1C028EE70 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x4000LL) )
    {
      LODWORD(v36) = a8;
      v29 = v37;
      v33 = (__int64)a5;
      v28 = v16;
      v30 = (a1 & 0x8000) == 0;
      v34 = InputTraceLogging::OriginIdToString(v27[1]);
      v35[0] = (__int64)InputTraceLogging::DeviceTypeToString(v27[0]);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C028EE70,
        (int)&dword_1C0263239,
        (__int64)v35,
        (__int64)&v34,
        (__int64)&v30,
        (__int64)&v33,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v36);
    }
    v21 = a7;
  }
  if ( (byte_1C0295764 & 0x10) != 0 && (byte_1C0295764 & 4) == 0 )
    a7 = v21 + 4;
  LOWORD(v36) = a1 & 0x100;
  LOBYTE(v22) = CKeyboardProcessor::HandleLeftRightVKs(a1);
  ApiSetEditionUpdateSASModifiers(v16, v22, a2, a1 & 0x8000);
  if ( a8 )
    goto LABEL_29;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  if ( KeyboardProcessor && *(_DWORD *)(KeyboardProcessor + 24) )
  {
    if ( v11 )
    {
      if ( !*(_QWORD *)(v32 + 440) )
      {
        if ( gspklGlobalActive )
        {
          *(_QWORD *)&v32 = v32 + 440;
          *((_QWORD *)&v32 + 1) = gspklGlobalActive;
          *(_OWORD *)v35 = v32;
          HMAssignmentLock((__int64 **)v35, 0LL);
        }
      }
      CKeyboardProcessor::ForwardInputToKeyboardOverrider(v16 != 0, a2, a1, *v11, a5, v37, v11[2], a10);
      return;
    }
LABEL_29:
    v24 = v38;
    goto LABEL_15;
  }
  v25 = v10;
  v24 = v38;
  if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                       v32,
                       (unsigned __int16)v36,
                       (unsigned __int16)v31,
                       a7,
                       a1,
                       a2,
                       a1 & 0x8000,
                       v16,
                       v37,
                       v38,
                       v25,
                       (__int64)&v26) != 1 )
  {
LABEL_15:
    xxxUpdateGlobalsAndSendKeyEvent(
      a1,
      a2,
      v37,
      v24,
      (__int64)a5,
      (__int64)v11,
      (__int16)a6,
      v16,
      a8,
      v17,
      (__int64)v27,
      (__int64)a10);
    return;
  }
  InputTraceLogging::Keyboard::DropInput(3LL);
}
