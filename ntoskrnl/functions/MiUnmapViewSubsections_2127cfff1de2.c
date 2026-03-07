__int64 __fastcall MiUnmapViewSubsections(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v6; // ebp
  __int64 v7; // rdx
  KIRQL v8; // r15
  __int64 result; // rax

  v3 = 0LL;
  v4 = 0LL;
  v6 = *(_QWORD *)(a1 + 64) != 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
    v3 = MiDecrementSubsections(a2);
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  if ( v3 )
    v4 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  LOBYTE(v7) = v8;
  result = MiCheckControlArea(a1, v7);
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v4, v6, v3);
  return result;
}
