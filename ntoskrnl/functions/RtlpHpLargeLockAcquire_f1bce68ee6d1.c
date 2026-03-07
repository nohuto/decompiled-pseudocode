char __fastcall RtlpHpLargeLockAcquire(_DWORD *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive(a1 + 16, *a1 & 1);
}
