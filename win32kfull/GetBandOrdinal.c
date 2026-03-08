/*
 * XREFs of GetBandOrdinal @ 0x1C0025CC4
 * Callers:
 *     SetWindowGroupBand @ 0x1C0025CE4 (SetWindowGroupBand.c)
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBandOrdinal(int a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdx

  result = 0LL;
  v2 = &gazbidOrder;
  do
  {
    if ( *v2 == a1 )
      break;
    result = (unsigned int)(result + 1);
    ++v2;
  }
  while ( (unsigned int)result < 0x12 );
  return result;
}
