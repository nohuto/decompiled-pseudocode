__int64 *__fastcall MiGetSharedProtosAtDpcLevel(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rsi
  __int64 *v6; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(__int64 **)(a3 + 24);
  while ( v6 )
  {
    if ( a2 > *((_DWORD *)v6 + 16) )
    {
      v6 = (__int64 *)v6[1];
    }
    else
    {
      if ( a2 >= *((_DWORD *)v6 + 16) )
        break;
      v6 = (__int64 *)*v6;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return v6;
}
