/*
 * XREFs of ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DEE34
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DF5B0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1C04 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01E2548 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 */

void __fastcall CPTPProcessor::EndInertia(CPTPProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  CInertiaManager *v6; // rcx

  if ( *((_BYTE *)this + 400) )
  {
    v5 = SGDGetUserSessionState(this, a2, a3, a4);
    CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(v5 + 16840), 1, 0, *((void **)this + 67));
    *((_BYTE *)this + 400) = 0;
  }
  if ( (*((_DWORD *)this + 99) & 1) != 0 )
  {
    SGDGetUserSessionState(this, a2, a3, a4);
    CInertiaManager::PostInertiaMessage(
      v6,
      0x23Cu,
      (CPTPProcessor *)((char *)this + 184),
      *(struct tagPOINT *)((char *)this + 376),
      *(struct tagPOINT *)((char *)this + 384));
    *((_DWORD *)this + 99) &= ~1u;
  }
}
