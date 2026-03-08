/*
 * XREFs of CiProcessAddThread @ 0x1C000B100
 * Callers:
 *     CiThreadCreate @ 0x1C000AD80 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiProcessAddThread(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *v2; // rdx
  _QWORD *v3; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = (_QWORD *)(a1 + 112);
  v3 = *(_QWORD **)(v1 + 72);
  result = v1 + 64;
  if ( *v3 != v1 + 64 )
    __fastfail(3u);
  *v2 = result;
  *(_QWORD *)(a1 + 120) = v3;
  *v3 = v2;
  *(_QWORD *)(v1 + 72) = v2;
  *(_BYTE *)(a1 + 148) ^= (*(_BYTE *)(a1 + 148) ^ *(_BYTE *)(v1 + 88)) & 1;
  return result;
}
