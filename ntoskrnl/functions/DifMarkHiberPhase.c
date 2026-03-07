void DifMarkHiberPhase()
{
  __int64 *i; // rbx
  __int64 *j; // rdi
  __int64 *k; // rdi

  for ( i = (__int64 *)DifAPIThunkContextHead; i != &DifAPIThunkContextHead; i = (__int64 *)*i )
  {
    for ( j = (__int64 *)i[2]; j != i + 2; j = (__int64 *)*j )
      PoSetHiberRange(0LL, 0x10000u, j - 2, 0x20uLL, 0x4E666944u);
    for ( k = (__int64 *)i[4]; k != i + 4; k = (__int64 *)*k )
      PoSetHiberRange(0LL, 0x10000u, k - 2, 0x20uLL, 0x4E666944u);
    PoSetHiberRange(0LL, 0x10000u, i - 2, 0x40uLL, 0x4E666944u);
  }
}
