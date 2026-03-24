/*
 * XREFs of BgkpTryEnableConsole @ 0x14039C320
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B440 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A96F04 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C50B90 )
  {
    if ( byte_140C50BB1 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C113B8, 0LL);
  }
  return result;
}
