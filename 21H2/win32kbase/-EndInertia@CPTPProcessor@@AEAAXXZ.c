/*
 * XREFs of ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DDF8C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DE5A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E11D4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01E1BD4 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 */

void __fastcall CPTPProcessor::EndInertia(CPTPProcessor *this)
{
  if ( *((_BYTE *)this + 376) )
  {
    CHidInput::HandlePTPInertiaTimer(this, 1, 0, *((void **)this + 64));
    *((_BYTE *)this + 376) = 0;
  }
  if ( (*((_DWORD *)this + 93) & 1) != 0 )
  {
    CInertiaManager::PostInertiaMessage(
      this,
      0x23Cu,
      (CPTPProcessor *)((char *)this + 160),
      *(struct tagPOINT *)((char *)this + 352),
      *(struct tagPOINT *)((char *)this + 360));
    *((_DWORD *)this + 93) &= ~1u;
  }
}
