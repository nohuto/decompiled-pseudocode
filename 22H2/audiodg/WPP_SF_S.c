/*
 * XREFs of WPP_SF_S @ 0x14003E9A0
 * Callers:
 *     WinMain @ 0x140014C30 (WinMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_4b1fa032b8643535ec497c87501ebc2b_Traceguids, 24LL, a4);
}
