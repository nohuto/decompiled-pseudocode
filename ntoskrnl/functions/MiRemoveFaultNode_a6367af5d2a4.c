void __fastcall MiRemoveFaultNode(__int64 a1)
{
  volatile LONG *v2; // rdi
  __int64 *v3; // rsi

  if ( *(_BYTE *)(a1 + 73) )
  {
    v2 = &dword_140C66EE0;
    v3 = &qword_140C66EE8;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 68) )
    {
      *(_BYTE *)(a1 + 69) = 0;
      return;
    }
    v2 = &dword_140C66EF0;
    v3 = &qword_140C66EF8;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  RtlAvlRemoveNode((unsigned __int64 *)v3, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 69) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
}
