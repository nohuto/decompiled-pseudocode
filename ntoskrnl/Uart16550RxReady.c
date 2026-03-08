/*
 * XREFs of Uart16550RxReady @ 0x14067AA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

bool __fastcall Uart16550RxReady(__int64 a1, __int64 a2)
{
  char v2; // al
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( *(_QWORD *)a1 )
    {
      LOBYTE(a2) = 5;
      v2 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2);
      if ( v2 != -1 && (v2 & 1) != 0 )
        return 1;
    }
  }
  return result;
}
