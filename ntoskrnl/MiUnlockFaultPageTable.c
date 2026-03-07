void __fastcall MiUnlockFaultPageTable(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_WORD *)(a1 + 10) )
      MiEmptyDeferredWorkingSetEntries(a1);
    MiUnlockPageTableInternal(v1, *(_QWORD *)(a1 + 16));
    *(_BYTE *)(a1 + 13) |= 2u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
