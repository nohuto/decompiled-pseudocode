/*
 * XREFs of NtGdiGetRgnBox @ 0x1C0008AB0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C00A70C0 (GreGetRgnBox.c)
 */

__int64 __fastcall NtGdiGetRgnBox(HRGN a1, _OWORD *a2)
{
  __int64 result; // rax

  result = GreGetRgnBox(a1);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = 0LL;
  }
  return result;
}
