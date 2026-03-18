/*
 * XREFs of ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C00052B0
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C00050DC (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C0005350 (ProcessKeyboardInjectedInputViaRim.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DB33C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01DB3B8 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01E41D0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInputNoLock(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rsi
  unsigned __int64 v8; // rbp
  int v9; // esi
  unsigned int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  BOOL v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = a1;
  v5 = a4;
  if ( a2 )
  {
    if ( gpKL )
    {
      if ( *(_DWORD *)(gpKL + 88) )
      {
        if ( !*(_DWORD *)(gpKL + 116) )
        {
          v11 = *(_DWORD *)(a2 + 484);
          if ( *(_DWORD *)(gpKL + 104) != v11 || *(_DWORD *)(gpKL + 108) != *(_DWORD *)(a2 + 488) )
          {
            SearchAndSetKbdTbl((struct DEVICEINFO *)a2, v11, *(_DWORD *)(a2 + 488));
            *(_DWORD *)(gpKL + 104) = *(_DWORD *)(a2 + 484);
            *(_DWORD *)(gpKL + 108) = *(_DWORD *)(a2 + 488);
          }
        }
      }
    }
    if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
    {
      InputTraceLogging::Keyboard::DropInput(1LL);
    }
    else if ( a3 )
    {
      v8 = a3 + v5;
      v9 = a5;
      do
      {
        if ( a3 >= v8 )
          break;
        if ( (unsigned int)dword_1C028EE70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x4000LL) )
        {
          LODWORD(v14) = v9;
          v15 = (*(_WORD *)(a3 + 4) & 1) == 0;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C028EE70,
            (unsigned int)&unk_1C0261EA9,
            v12,
            v13,
            (__int64)&v15,
            (__int64)&v14);
        }
        if ( (_BYTE)v9 )
          ProcessKeyboardInjectedInputViaRim(a3, a2, 0LL);
        else
          ProcessKeyboardInputWorker(a3, a2, 1LL);
        a3 += 12LL;
      }
      while ( a3 );
    }
  }
  return 0LL;
}
