/*
 * XREFs of ?PostNewMessage@CBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z @ 0x1C00873D0
 * Callers:
 *     ?PostNewMessage@CDWMBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z @ 0x1C0087250 (-PostNewMessage@CDWMBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBackchannelManager::PostNewMessage(PRKEVENT *this, struct CFlipConsumerMessage *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rdx

  if ( *((_DWORD *)this + 6) < *((_DWORD *)this + 7) )
  {
    v4 = this + 1;
    if ( (_QWORD *)*v4 == v4 )
      KeSetEvent(this[4], 1, 0);
    v5 = (_QWORD *)v4[1];
    v6 = (_QWORD *)(((unsigned __int64)a2 + 48) & -(__int64)(a2 != 0LL));
    if ( (_QWORD *)*v5 != v4 )
      __fastfail(3u);
    *v6 = v4;
    *(_QWORD *)((((unsigned __int64)a2 + 48) & -(__int64)(a2 != 0LL)) + 8) = v5;
    *v5 = v6;
    v4[1] = v6;
    ++*((_DWORD *)a2 + 2);
    ++*((_DWORD *)this + 6);
  }
}
