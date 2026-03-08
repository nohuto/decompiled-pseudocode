/*
 * XREFs of PspGetBaseTrapFrame @ 0x1402822C0
 * Callers:
 *     PsGetBaseTrapFrame @ 0x14045B2A0 (PsGetBaseTrapFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  __int64 i; // r8
  int v3; // eax

  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  v3 = 0;
  if ( a2 )
  {
    LOBYTE(v3) = *(_QWORD *)(i + 32) != 0LL;
    *a2 = v3;
  }
  return i - 400;
}
