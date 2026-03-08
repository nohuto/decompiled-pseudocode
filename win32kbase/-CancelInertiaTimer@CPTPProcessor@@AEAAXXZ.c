/*
 * XREFs of ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1C020D3FC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C020E0C0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C02111DC (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 */

void __fastcall CPTPProcessor::CancelInertiaTimer(void **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( *((_BYTE *)this + 384) )
  {
    v5 = SGDGetUserSessionState(this, a2, a3, a4);
    CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(v5 + 16840), 1, 0, this[65]);
    *((_BYTE *)this + 384) = 0;
  }
  *((_DWORD *)this + 95) &= ~1u;
}
