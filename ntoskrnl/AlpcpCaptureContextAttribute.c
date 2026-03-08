/*
 * XREFs of AlpcpCaptureContextAttribute @ 0x1407CAA6C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1407CAAD0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpCaptureContextAttribute(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx

  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a3 + 264);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a3 + 272);
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    *a4 = v5;
  else
    a4[1] = v5;
  return 0LL;
}
