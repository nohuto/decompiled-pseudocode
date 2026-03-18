/*
 * XREFs of ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C00387C4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1C003B668 (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 */

void __fastcall CMouseProcessor::EndStreamToken::~EndStreamToken(CMouseProcessor::EndStreamToken *this)
{
  const struct CMouseProcessor::CMouseEvent *v1; // rdx

  if ( *((_BYTE *)this + 16) )
  {
    v1 = (const struct CMouseProcessor::CMouseEvent *)*((_QWORD *)this + 1);
    if ( *((_DWORD *)v1 + 4) != 3 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)this + 3696LL), 1, 1) )
        return;
      v1 = (const struct CMouseProcessor::CMouseEvent *)*((_QWORD *)this + 1);
    }
    CMouseProcessor::SendInputStreamEndedMessage(*(CMouseProcessor **)this, v1);
  }
}
