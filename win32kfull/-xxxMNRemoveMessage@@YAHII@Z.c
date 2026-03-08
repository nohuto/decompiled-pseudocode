/*
 * XREFs of ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0216788
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C00946B0 (xxxInternalGetMessage.c)
 */

__int64 __fastcall xxxMNRemoveMessage(int a1, int a2)
{
  _OWORD v5[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( !(unsigned int)xxxInternalGetMessage(v5, 0LL, 0, 0, 2, 0) || DWORD2(v5[0]) != a1 && DWORD2(v5[0]) != a2 )
    return 0LL;
  xxxInternalGetMessage(v5, 0LL, DWORD2(v5[0]), DWORD2(v5[0]), 1, 0);
  return 1LL;
}
