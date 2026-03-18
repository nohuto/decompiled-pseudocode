/*
 * XREFs of ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C01660B4
 * Callers:
 *     UserAddAtomToAtomTableEx @ 0x1C00570D0 (UserAddAtomToAtomTableEx.c)
 *     UserAddAtomEx @ 0x1C00931F0 (UserAddAtomEx.c)
 *     UserAddAtomToAtomTable @ 0x1C00C4BBC (UserAddAtomToAtomTable.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 */

void __fastcall LkdForAtomAdditionFailure(PRTL_ATOM_TABLE a1, int a2)
{
  __int64 ThreadWin32Thread; // rax

  if ( a1 == UserAtomTableHandle )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 224LL) |= 0x800uLL;
    if ( !byte_1C029E418 )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 21LL, a2, 0LL, KeGetCurrentThread(), 0LL, 0LL, 0);
      byte_1C029E418 = 1;
    }
  }
}
