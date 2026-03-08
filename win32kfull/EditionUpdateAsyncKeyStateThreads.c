/*
 * XREFs of EditionUpdateAsyncKeyStateThreads @ 0x1C00CCCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUpdateAsyncKeyStateThreads(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v3; // rcx
  unsigned __int64 v4; // r9
  char v5; // r10
  __int64 v6; // rdx
  __int64 result; // rax

  if ( a2 < 0x20u )
    ++*(_DWORD *)(gpsi + 6988LL);
  v3 = *(_QWORD **)(grpdeskRitInput + 168LL);
  if ( v3 != (_QWORD *)(grpdeskRitInput + 168LL) )
  {
    v4 = (unsigned __int64)a2 >> 3;
    v5 = a2 & 7;
    do
    {
      v6 = *(v3 - 39);
      *(_BYTE *)(v4 + v6 + 204) |= 1 << v5;
      if ( v6 != a1 )
        *(_DWORD *)(v6 + 396) |= 1u;
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != (_QWORD *)(grpdeskRitInput + 168LL) );
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 6984LL);
  return result;
}
