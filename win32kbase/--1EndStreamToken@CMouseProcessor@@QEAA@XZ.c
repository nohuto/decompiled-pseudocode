/*
 * XREFs of ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C007D028
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1C023101C (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 */

void __fastcall CMouseProcessor::EndStreamToken::~EndStreamToken(CMouseProcessor **this)
{
  if ( *((_BYTE *)this + 16)
    && (*((_DWORD *)this + 5) & 0xFFFFFFFB) != 0
    && (*((_DWORD *)this[1] + 4) == 3 || !_InterlockedCompareExchange((volatile signed __int32 *)*this + 924, 1, 1)) )
  {
    CMouseProcessor::SendInputStreamEndedMessage(*this, this[1]);
  }
}
