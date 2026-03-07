__int64 __fastcall NtAllocateLocallyUniqueId(unsigned __int64 a1)
{
  __int64 v1; // rdx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v1 = a1;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= 0x7FFFFFFF0000LL )
      v1 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v1 = *(_BYTE *)v1;
    *(_BYTE *)(v1 + 7) = *(_BYTE *)(v1 + 7);
  }
  *(_QWORD *)a1 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  return 0LL;
}
