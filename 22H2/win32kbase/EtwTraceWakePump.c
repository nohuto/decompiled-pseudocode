/*
 * XREFs of EtwTraceWakePump @ 0x1C00573C0
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0056FE0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00575D0 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00DEF46 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x1C00DF44A (McTemplateK0cppppqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceWakePump(char a1, __int64 *a2, char a3)
{
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    if ( a2 )
      v5 = *a2;
    else
      LOBYTE(v5) = 0;
    LOBYTE(v6) = GetCallbackCount();
    McTemplateK0cppppqq_EtwWriteTransfer(v7, (unsigned int)&WakePump, v8, v6, a1, v5, 0, 0, a3, 0);
  }
}
