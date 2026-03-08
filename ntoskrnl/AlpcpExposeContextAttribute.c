/*
 * XREFs of AlpcpExposeContextAttribute @ 0x14077ED40
 * Callers:
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14077EC7C (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpExposeContextAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rax
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // rax
  __int64 result; // rax

  v4 = (_QWORD *)(a2 + 64);
  if ( *(_QWORD *)(a2 + 56) == a1 || *v4 == a1 )
    v5 = *(_QWORD *)(a2 + 128);
  else
    v5 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)a3 = v5;
  if ( *(_QWORD *)(a2 + 56) == a1 || *v4 == a1 )
    v6 = *(_DWORD *)(a2 + 72);
  else
    v6 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a3 + 16) = v6;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a3 + 8) = v7;
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a2 + 264);
  result = *(unsigned int *)(a2 + 272);
  *(_DWORD *)(a3 + 24) = result;
  if ( a4 )
  {
    if ( v5 )
      *a4 |= 0x20000000u;
  }
  return result;
}
