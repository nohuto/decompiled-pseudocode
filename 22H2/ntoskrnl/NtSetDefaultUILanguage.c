/*
 * XREFs of NtSetDefaultUILanguage @ 0x1407FD140
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x1407FC998 (ExpSetPendingUILanguage.c)
 */

__int64 __fastcall NtSetDefaultUILanguage(__int16 a1)
{
  if ( a1 )
    return 0LL;
  else
    return ExpSetPendingUILanguage();
}
