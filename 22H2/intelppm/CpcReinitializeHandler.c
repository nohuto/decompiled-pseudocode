/*
 * XREFs of CpcReinitializeHandler @ 0x1C0009040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0008BB0 (WriteGenAddrMaybeHiddenEx.c)
 */

void __fastcall CpcReinitializeHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 92) )
    WriteGenAddrMaybeHiddenEx(*(_QWORD *)a1, (_BYTE *)(*(_QWORD *)(a1 + 112) + 344LL), 1LL);
  if ( *(_BYTE *)(a1 + 104) )
  {
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 80LL) )
    {
      ((void (*)(void))qword_1C001C5A0)();
      ((void (*)(void))qword_1C001C5B0)();
    }
  }
}
