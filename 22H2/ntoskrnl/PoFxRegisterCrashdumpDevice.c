/*
 * XREFs of PoFxRegisterCrashdumpDevice @ 0x140862040
 * Callers:
 *     <none>
 * Callees:
 *     PopPluginRegisterCrashdumpDevice @ 0x1403B2784 (PopPluginRegisterCrashdumpDevice.c)
 */

__int64 __fastcall PoFxRegisterCrashdumpDevice(__int64 a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 64) )
    return PopPluginRegisterCrashdumpDevice(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72), a1);
  return 3221225659LL;
}
