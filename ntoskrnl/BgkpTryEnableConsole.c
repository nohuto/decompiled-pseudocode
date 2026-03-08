/*
 * XREFs of BgkpTryEnableConsole @ 0x140384818
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B99F84 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140C6A80A )
  {
    if ( qword_140C6A7E8 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C0BC48, 0LL);
  }
  return result;
}
