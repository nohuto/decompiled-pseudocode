/*
 * XREFs of xxxKeyEventEx @ 0x1C004BFD0
 * Callers:
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C009F120 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00A29C0 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01AADBC (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01AB088 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01AB4A0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01AB620 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01AB860 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01ABA50 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01ABCC0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01ABDE0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     xxxKeyEvent @ 0x1C01B11D0 (xxxKeyEvent.c)
 *     xxxProcessKeyEvent @ 0x1C01B1220 (xxxProcessKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01B1594 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C01B162C (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0030310 (HMAssignmentLock.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004C1F0 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C004CA8C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C004CAB4 (ApiSetEditionKeyEventLLHook.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C004CC74 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ApiSetEditionUpdateSASModifiers @ 0x1C004CCA4 (ApiSetEditionUpdateSASModifiers.c)
 *     GetKeyEventInputSource @ 0x1C004CD80 (GetKeyEventInputSource.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C004D99C (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A1F34 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A2050 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1C01AFCE4 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgW.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01AFDFC (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01B034C (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
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
  unsigned int v25; // [rsp+58h] [rbp-69h]
  __int64 v26; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v27[2]; // [rsp+70h] [rbp-51h] BYREF
  unsigned int v28; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+7Ch] [rbp-45h] BYREF
  BOOL v30; // [rsp+80h] [rbp-41h] BYREF
  unsigned int v31; // [rsp+84h] [rbp-3Dh]
  struct tagTHREADINFO *v32; // [rsp+88h] [rbp-39h]
  __int64 v33; // [rsp+90h] [rbp-31h] BYREF
  __int64 v34; // [rsp+98h] [rbp-29h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-19h]
  __int128 v37; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v38; // [rsp+108h] [rbp+47h] BYREF
  unsigned int v39; // [rsp+118h] [rbp+57h]
  __int64 v40; // [rsp+120h] [rbp+5Fh]

  v40 = a4;
  v39 = a3;
  *(_QWORD *)v27 = 0LL;
  v10 = 0;
  v11 = a6;
  v13 = gptiCurrent;
  v32 = gptiCurrent;
  if ( a6 )
    v15 = *a6;
  else
    v15 = 0xFFFF;
  LODWORD(a6) = v15;
  v26 = -1LL;
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::OnKeyEvent((CAsyncKeyEventMonitor *)0xFFFFFFFFLL);
    v13 = v32;
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
  if ( (unsigned int)dword_1C024BA90 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x4000LL) )
    {
      LODWORD(v38) = a8;
      v29 = v39;
      v33 = (__int64)a5;
      v28 = v16;
      v30 = (a1 & 0x8000) == 0;
      v34 = InputTraceLogging::OriginIdToString(v27[1]);
      v35 = (__int64)InputTraceLogging::DeviceTypeToString(v27[0]);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C024BA90,
        (int)&dword_1C021FFD5,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v30,
        (__int64)&v33,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v38);
    }
    v21 = a7;
  }
  if ( (byte_1C0250884 & 0x10) != 0 && (byte_1C0250884 & 4) == 0 )
    a7 = v21 + 4;
  LOWORD(v38) = a1 & 0x100;
  LOBYTE(v22) = CKeyboardProcessor::HandleLeftRightVKs(a1);
  ApiSetEditionUpdateSASModifiers(v16, v22, a2, a1 & 0x8000);
  if ( a8 )
    goto LABEL_29;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  if ( KeyboardProcessor && *(_DWORD *)(KeyboardProcessor + 24) )
  {
    if ( v11 )
    {
      if ( !*((_QWORD *)v32 + 55) )
      {
        if ( gspklGlobalActive )
        {
          *(_QWORD *)&v36 = (char *)v32 + 440;
          *((_QWORD *)&v36 + 1) = gspklGlobalActive;
          v37 = v36;
          HMAssignmentLock((__int64 **)&v37);
        }
      }
      CKeyboardProcessor::ForwardInputToKeyboardOverrider(v16 != 0, a2, a1, *v11, a5, v39, v11[2], a10);
      return;
    }
LABEL_29:
    v24 = v40;
    goto LABEL_15;
  }
  v25 = v10;
  v24 = v40;
  if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                       (_DWORD)v32,
                       (unsigned __int16)v38,
                       (unsigned __int16)v31,
                       a7,
                       a1,
                       a2,
                       a1 & 0x8000,
                       v16,
                       v39,
                       v40,
                       v25,
                       (__int64)&v26) != 1 )
  {
LABEL_15:
    xxxUpdateGlobalsAndSendKeyEvent(
      a1,
      a2,
      v39,
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
