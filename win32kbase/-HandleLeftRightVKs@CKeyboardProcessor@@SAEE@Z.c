/*
 * XREFs of ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C0080360
 * Callers:
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C0175720 (NtUserPostKeyboardInputMessage.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021E280 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CKeyboardProcessor::HandleLeftRightVKs(unsigned __int8 a1)
{
  if ( (unsigned __int8)(a1 + 96) <= 5u )
    return (a1 - 160) / 2 + 16;
  else
    return a1;
}
