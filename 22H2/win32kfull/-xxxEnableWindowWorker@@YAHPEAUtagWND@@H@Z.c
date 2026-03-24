/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00371DC
 * Callers:
 *     xxxEnableWindow @ 0x1C0037170 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C0208B88 (xxxDisableImmersiveOwner.c)
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034370 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C003757C (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  char v6; // r14
  int v7; // ebp

  v3 = 0;
  v4 = (int)a2;
  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  if ( (v6 == 0) == a2 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    PriorityBoostCUI::UpdateProcessPriorityWhenEnableStateIsChanging(a1, (struct tagWND *)a2, a3);
  }
  if ( (_DWORD)v4 )
  {
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) &= ~8u;
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) &= ~1u;
  }
  else
  {
    xxxSendMessage(a1, 31LL, 0LL, 0LL);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
      xxxSetFocus(0LL);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) |= 8u;
  }
  if ( v7 )
  {
    xxxWindowEvent(0x800Au, 0);
    xxxSendMessage(a1, 10LL, v4, 0LL);
  }
  LOBYTE(v3) = v6 != 0;
  return v3;
}
