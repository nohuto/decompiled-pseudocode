/*
 * XREFs of IsCapturedBySystem @ 0x1C0217F70
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007A190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

bool __fastcall IsCapturedBySystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 MouseProcessor; // rax
  char v6; // bl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  v6 = 0;
  if ( MouseProcessor )
    return CInputDest::operator==((int *)(MouseProcessor + 3576), a1) != 0;
  return v6;
}
