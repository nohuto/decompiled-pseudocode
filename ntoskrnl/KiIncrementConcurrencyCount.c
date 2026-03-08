/*
 * XREFs of KiIncrementConcurrencyCount @ 0x1402EA420
 * Callers:
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIncrementConcurrencyCount(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // rcx

  LOBYTE(v2) = *a1 & 0x7F;
  if ( (_BYTE)v2 == 21 )
  {
    *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
    v2 = *(unsigned int *)(a2 + 540);
    v3 = (volatile signed __int32 *)&a1[4 * v2 + 536];
  }
  else
  {
    v3 = (volatile signed __int32 *)(a1 + 40);
  }
  _InterlockedIncrement(v3);
  return v2;
}
