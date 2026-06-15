/*
 * XREFs of sub_1800FFDC0 @ 0x1800FFDC0
 * Callers:
 *     sub_180062450 @ 0x180062450 (sub_180062450.c)
 *     sub_1800627C0 @ 0x1800627C0 (sub_1800627C0.c)
 *     sub_1800F9C30 @ 0x1800F9C30 (sub_1800F9C30.c)
 * Callees:
 *     sub_1800FA18C @ 0x1800FA18C (sub_1800FA18C.c)
 *     sub_1800FFE3C @ 0x1800FFE3C (sub_1800FFE3C.c)
 */

void __fastcall sub_1800FFDC0(__int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)(a1 + 152);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 152));
  SRWLock = v1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 148), 0xFFFFFFFF) == 1 )
  {
    sub_1800FFE3C(&SRWLock, 0LL);
    if ( a1 )
      sub_1800FA18C(a1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
