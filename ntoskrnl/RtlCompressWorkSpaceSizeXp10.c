/*
 * XREFs of RtlCompressWorkSpaceSizeXp10 @ 0x1409C0EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompressWorkSpaceSizeXp10(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a1 && a1 != 256 )
    return 3221225659LL;
  *a2 = 33629472;
  result = 0LL;
  *a3 = 38488;
  return result;
}
