/*
 * XREFs of xxxImmActivateThreadsLayout @ 0x1C01E3320
 * Callers:
 *     xxxImmActivateThreadsLayout @ 0x1C01E3320 (xxxImmActivateThreadsLayout.c)
 *     EditionImmActivateThreadsLayout @ 0x1C0208980 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C003D9CC (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     xxxImmActivateLayout @ 0x1C0136518 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3320 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  _QWORD *v9; // rbx
  int i; // esi
  _QWORD *v11; // r15
  __int64 v12; // rdi
  _QWORD v14[6]; // [rsp+50h] [rbp-2F8h] BYREF
  _QWORD v15[82]; // [rsp+80h] [rbp-2C8h] BYREF

  memset(v15, 0, 0x288uLL);
  v6 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  while ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 440);
    if ( v7 != a3 && (*(_DWORD *)(a1 + 488) & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 784) )
      {
        LockW32Thread(a1, (__int64)&v15[5 * v6 + 2]);
        v15[5 * v6++ + 1] = a1;
        if ( v6 == 16 )
          break;
      }
      else
      {
        *(_QWORD *)(a1 + 800) = *(_QWORD *)(v7 + 40);
        v14[0] = a1 + 440;
        v14[1] = a3;
        HMAssignmentLock(v14);
        if ( *(_QWORD *)(a1 + 792) )
          **(_QWORD **)(a1 + 480) |= 0x40uLL;
        *(_QWORD *)(*(_QWORD *)(a1 + 480) + 144LL) = *(_QWORD *)(a3 + 40);
        *(_WORD *)(*(_QWORD *)(a1 + 480) + 152LL) = *(_WORD *)(a3 + 72);
      }
    }
    a1 = *(_QWORD *)(a1 + 664);
  }
  if ( a2 )
    goto LABEL_15;
  if ( !a1 )
  {
    if ( !v6 )
      return 0LL;
LABEL_15:
    if ( !a1 )
      goto LABEL_18;
  }
  if ( *(_QWORD *)(a1 + 664) )
  {
    v15[0] = a2;
    return xxxImmActivateThreadsLayout(*(_QWORD *)(a1 + 664), v15, a3);
  }
LABEL_18:
  v15[0] = a2;
  v9 = v15;
  while ( v9 )
  {
    for ( i = v6 - 1; i >= 0; --i )
    {
      v11 = &v9[5 * i];
      v12 = v11[1];
      if ( (*(_DWORD *)(v12 + 488) & 1) == 0 )
      {
        xxxImmActivateLayout(v11[1], a3);
        if ( (*(_DWORD *)(v12 + 488) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v12 + 480) + 144LL) = *(_QWORD *)(a3 + 40);
          *(_WORD *)(*(_QWORD *)(v12 + 480) + 152LL) = *(_WORD *)(a3 + 72);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v11 + 2));
    }
    v9 = (_QWORD *)*v9;
    v6 = 16;
  }
  return 1LL;
}
