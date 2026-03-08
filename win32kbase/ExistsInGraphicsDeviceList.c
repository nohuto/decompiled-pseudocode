/*
 * XREFs of ExistsInGraphicsDeviceList @ 0x1C0194FB4
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C0168718 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExistsInGraphicsDeviceList(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL); result; result = *(_QWORD *)(result + 128) )
  {
    if ( a1 == result )
      return 1LL;
  }
  return result;
}
