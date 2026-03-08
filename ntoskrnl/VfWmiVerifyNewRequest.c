/*
 * XREFs of VfWmiVerifyNewRequest @ 0x140AE4B00
 * Callers:
 *     <none>
 * Callees:
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 */

__int64 __fastcall VfWmiVerifyNewRequest(
        const void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const void *a6)
{
  int v6; // ebx
  __int64 result; // rax

  v6 = *((_DWORD *)*a1 + 12);
  if ( v6 != -1073741637 )
  {
    result = ViErrorReport1(0x210u, a6, *a1);
    if ( v6 < 0 )
    {
      result = a5;
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
    }
  }
  return result;
}
