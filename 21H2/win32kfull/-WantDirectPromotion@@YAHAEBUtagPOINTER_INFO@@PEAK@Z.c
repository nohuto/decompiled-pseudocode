/*
 * XREFs of ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C016DA36
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C021424C (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall WantDirectPromotion(const struct tagPOINTER_INFO *a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 ThreadWin32Thread; // rax

  v2 = *((_DWORD *)a1 + 3);
  if ( (v2 & 0x10000) != 0 )
  {
    v4 = 0x10000000;
  }
  else
  {
    if ( (v2 & 0x40004) != 0 )
      return 0LL;
    v4 = 0;
  }
  v5 = ValidateHwnd(*((_QWORD *)a1 + 3));
  if ( v5 )
  {
    ThreadWin32Thread = *(_QWORD *)(v5 + 16);
    if ( !ThreadWin32Thread )
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( (*(_QWORD *)(ThreadWin32Thread + 648) & 0x40000000000LL) != 0 )
    {
      *a2 = v4;
      return 1LL;
    }
  }
  return 0LL;
}
