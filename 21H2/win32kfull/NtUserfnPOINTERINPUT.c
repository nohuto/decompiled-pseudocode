/*
 * XREFs of NtUserfnPOINTERINPUT @ 0x1C0203880
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1C02037C0 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     xxxSendPointerMessage @ 0x1C01EB770 (xxxSendPointerMessage.c)
 */

__int64 __fastcall NtUserfnPOINTERINPUT(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // r10
  int v13; // r8d

  v10 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    UserSetLastError(1400LL, v11);
    return v10;
  }
  v13 = a6;
  if ( a6 != 689 && a6 != 691 && (a6 <= 0x2B6 || a6 > 0x2B8) )
    return v10;
  if ( a2 == 528 )
  {
    if ( (_WORD)a3 != 582 )
      return v10;
    a3 >>= 16;
    return xxxSendPointerMessage(ThreadWin32Thread, (unsigned __int16)a3, a1, a2, v10, a5, v13);
  }
  if ( a2 == 587 )
  {
    v10 = a4;
    return xxxSendPointerMessage(ThreadWin32Thread, (unsigned __int16)a3, a1, a2, v10, a5, v13);
  }
  if ( (a2 != 592 || (*(_DWORD *)(ThreadWin32Thread + 1256) & 0x2000) != 0)
    && IsPointerInputMessage(a2)
    && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *(_QWORD *)(ThreadWin32Thread + 424) )
  {
    return xxxSendPointerMessage(ThreadWin32Thread, (unsigned __int16)a3, a1, a2, v10, a5, v13);
  }
  return v10;
}
