/*
 * XREFs of NtSetDefaultUILanguage @ 0x14078BD30
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x14078BF70 (ExpSetPendingUILanguage.c)
 */

__int64 __fastcall NtSetDefaultUILanguage(__int16 a1)
{
  if ( a1 )
    return 0LL;
  else
    return ExpSetPendingUILanguage();
}
