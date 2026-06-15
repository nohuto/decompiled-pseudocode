/*
 * XREFs of sub_1800B9328 @ 0x1800B9328
 * Callers:
 *     sub_1800B7400 @ 0x1800B7400 (sub_1800B7400.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B9328(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // eax

  if ( *(_BYTE *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(_QWORD *)(a1 + 88);
    while ( v3 != v4 )
    {
      _InterlockedAnd(*(volatile signed __int32 **)(v3 + 8), *(_DWORD *)v3 != 0 ? -5 : -2111);
      v3 += 16LL;
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 80);
    v5 = 1;
    if ( *(_DWORD *)(a1 + 28) != -1 )
      v5 = *(_DWORD *)(a1 + 28) + 1;
    *(_DWORD *)(a1 + 28) = v5;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
