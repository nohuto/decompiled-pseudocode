char __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v9; // ebp
  void *v10; // rcx

  v4 = *(unsigned int *)(a2 + 52);
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  v6 = v4 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  if ( !v6 )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v4) = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -(__int64)v6);
  if ( !a3 || !*(_QWORD *)(a3 + 24) )
  {
    v9 = a4 & 1;
    if ( (a4 & 1) == 0 )
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    LOBYTE(v4) = MiReturnFullProcessCommitment(a1, v6);
    if ( !v9 )
      LOBYTE(v4) = UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
LABEL_8:
    if ( !a3 )
      return v4;
  }
  v10 = *(void **)(a3 + 24);
  if ( v10 )
  {
    LOBYTE(v4) = ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return v4;
}
