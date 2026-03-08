/*
 * XREFs of ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C017BB80
 * Callers:
 *     UserAddAtomEx @ 0x1C00A62B0 (UserAddAtomEx.c)
 *     UserAddAtomToAtomTableEx @ 0x1C00BE980 (UserAddAtomToAtomTableEx.c)
 *     UserAddAtomToAtomTable @ 0x1C00D25BC (UserAddAtomToAtomTable.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 */

void __fastcall LkdForAtomAdditionFailure(PRTL_ATOM_TABLE a1, int a2)
{
  __int64 ThreadWin32Thread; // rax

  if ( a1 == UserAtomTableHandle )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 224LL) |= 0x800uLL;
    if ( !byte_1C02D86BC )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 21LL, a2, 0LL, KeGetCurrentThread(), 0LL, 0LL, 0);
      byte_1C02D86BC = 1;
    }
  }
}
