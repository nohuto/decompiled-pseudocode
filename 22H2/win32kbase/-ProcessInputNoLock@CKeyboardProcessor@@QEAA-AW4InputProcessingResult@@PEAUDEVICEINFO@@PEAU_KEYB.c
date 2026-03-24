/*
 * XREFs of ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A2610
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C01A2068 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A1E64 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z @ 0x1C01A259C (-ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01AAC50 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C01B07B0 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C01B0810 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInputNoLock(
        __int64 a1,
        __int64 a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        unsigned int a4,
        bool a5)
{
  __int64 v5; // rsi
  unsigned int v8; // edx
  const struct _KEYBOARD_INPUT_DATA *v9; // rbp

  v5 = a4;
  if ( a2 )
  {
    if ( gpKL )
    {
      if ( *(_DWORD *)(gpKL + 88) )
      {
        if ( !*(_DWORD *)(gpKL + 116) )
        {
          v8 = *(_DWORD *)(a2 + 492);
          if ( *(_DWORD *)(gpKL + 104) != v8 || *(_DWORD *)(gpKL + 108) != *(_DWORD *)(a2 + 496) )
          {
            SearchAndSetKbdTbl((struct DEVICEINFO *)a2, v8, *(_DWORD *)(a2 + 496));
            *(_DWORD *)(gpKL + 104) = *(_DWORD *)(a2 + 492);
            *(_DWORD *)(gpKL + 108) = *(_DWORD *)(a2 + 496);
          }
        }
      }
    }
    if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
    {
      InputTraceLogging::Keyboard::DropInput();
    }
    else if ( a3 )
    {
      v9 = (const struct _KEYBOARD_INPUT_DATA *)((char *)a3 + v5);
      do
      {
        if ( a3 >= v9 )
          break;
        InputTraceLogging::Keyboard::ProcessInput(a3);
        if ( a5 )
          ProcessKeyboardInjectedInputViaRim(a3, a2, 0LL);
        else
          ProcessKeyboardInputWorker(a3, a2, 1LL);
        ++a3;
      }
      while ( a3 );
    }
  }
  return 0LL;
}
