/*
 * XREFs of NtGdiGetRandomRgn @ 0x1C00B2B60
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRandomRgn @ 0x1C0042BB0 (GreGetRandomRgn.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  int v6; // edi
  unsigned int RandomRgn; // ebx

  if ( a3 == 5 )
    return 0LL;
  if ( a3 == 4 )
  {
    v6 = 1;
    UserEnterUserCritSecShared();
  }
  else
  {
    v6 = 0;
  }
  RandomRgn = GreGetRandomRgn(a1, a2, a3);
  if ( v6 )
    UserLeaveUserCritSec();
  return RandomRgn;
}
