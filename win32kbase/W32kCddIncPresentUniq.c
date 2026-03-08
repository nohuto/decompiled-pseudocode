/*
 * XREFs of W32kCddIncPresentUniq @ 0x1C00D3630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddIncPresentUniq(__int64 a1)
{
  __int64 result; // rax

  result = SGDGetSessionState(a1);
  ++*(_DWORD *)(*(_QWORD *)(result + 24) + 6480LL);
  return result;
}
