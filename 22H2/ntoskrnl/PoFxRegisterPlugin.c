/*
 * XREFs of PoFxRegisterPlugin @ 0x140984940
 * Callers:
 *     <none>
 * Callees:
 *     PopFxRegisterPluginEx @ 0x1403A85E8 (PopFxRegisterPluginEx.c)
 */

__int64 __fastcall PoFxRegisterPlugin(unsigned __int16 *a1, unsigned __int16 *a2)
{
  return PopFxRegisterPluginEx(a1, 0LL, a2);
}
