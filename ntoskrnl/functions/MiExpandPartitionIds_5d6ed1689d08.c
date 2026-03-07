__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  RTL_BITMAP *Pool; // rax
  __int64 v2; // rsi
  RTL_BITMAP *v3; // rdi
  ULONG_PTR v4; // rax
  unsigned __int64 v5; // rbx
  __int64 *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v0 = 512;
  if ( (__int64 *)qword_140C67048 != &qword_140C67040 )
    v0 = qword_140C67028->SizeOfBitMap + 512;
  if ( v0 <= qword_140C67028->SizeOfBitMap )
    return 0LL;
  if ( v0 > 0x400 )
    return 0LL;
  Pool = (RTL_BITMAP *)MiAllocatePool(64, 8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2), 0x20206D4Du);
  v2 = 0LL;
  v3 = Pool;
  if ( !Pool )
    return 0LL;
  Pool->SizeOfBitMap = v0;
  Pool->Buffer = &Pool[1].SizeOfBitMap;
  if ( (__int64 *)qword_140C67048 == &qword_140C67040 )
  {
    v4 = MiReservePtes((__int64)&qword_140C695C0, 2u);
    if ( !v4 )
      goto LABEL_14;
    v5 = (__int64)(v4 << 25) >> 16;
    if ( !v5 )
      goto LABEL_14;
  }
  else
  {
    v5 = qword_140C67048 + 8LL * qword_140C67028->SizeOfBitMap;
  }
  PteAddress = (__int64 *)MiGetPteAddress(v5);
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, (__int64)PteAddress, 33, 9) )
  {
    if ( (__int64 *)qword_140C67048 == &qword_140C67040 )
      MiReleasePtes((__int64)&qword_140C695C0, PteAddress, 1u);
LABEL_14:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v5, 0, 0x1000uLL);
  if ( (__int64 *)qword_140C67048 == &qword_140C67040 )
  {
    *(_QWORD *)v5 = *(_QWORD *)qword_140C67048;
    qword_140C67048 = v5;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140C67028->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140C67028->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140C67028 != (PRTL_BITMAP)&dword_140C67030 )
    ExFreePoolWithTag(qword_140C67028, 0);
  qword_140C67028 = v3;
  return 1LL;
}
