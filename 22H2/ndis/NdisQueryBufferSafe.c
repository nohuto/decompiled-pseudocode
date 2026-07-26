/*
 * XREFs of NdisQueryBufferSafe @ 0x1C00BF9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisQueryBufferSafe(__int64 a1, _QWORD *a2, _DWORD *a3, int a4)
{
  PVOID v7; // rax
  __int64 result; // rax

  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
      v7 = *(PVOID *)(a1 + 24);
    else
      v7 = MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, a4 | 0x40000000u);
    *a2 = v7;
  }
  result = *(unsigned int *)(a1 + 40);
  *a3 = result;
  return result;
}
