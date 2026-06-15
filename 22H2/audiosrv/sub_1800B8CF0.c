/*
 * XREFs of sub_1800B8CF0 @ 0x1800B8CF0
 * Callers:
 *     sub_1800B7428 @ 0x1800B7428 (sub_1800B7428.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B8CF0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v6; // r14
  RTL_SRWLOCK *v9; // rbx
  void *v10; // rcx
  unsigned int v11; // edi
  __int64 result; // rax
  PVOID v13; // rbx
  RTL_SRWLOCK *v14; // rsi
  void *v15; // rcx
  PVOID Ptr; // [rsp+60h] [rbp+18h] BYREF

  Ptr = 0LL;
  v6 = a5;
  *a5 = 0LL;
  if ( **(_QWORD **)(a4 + 24) )
  {
    v9 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    AcquireSRWLockShared(v9);
    v10 = **(void ***)(a4 + 24);
    if ( v10 )
    {
      Ptr = DecodePointer(v10);
      v11 = (**(__int64 (__fastcall ***)(PVOID, void *, _QWORD *))Ptr)(Ptr, &unk_18016D400, v6);
      if ( v9 )
        ReleaseSRWLockShared(v9);
      return v11;
    }
    if ( v9 )
      ReleaseSRWLockShared(v9);
  }
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64, void *, PVOID *))a4)(a2, a4, &unk_18016D400, &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*a2 & 4) != 0 )
      goto LABEL_17;
    v13 = 0LL;
    v14 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    AcquireSRWLockExclusive(v14);
    v15 = **(void ***)(a4 + 24);
    if ( v15 )
    {
      v13 = DecodePointer(v15);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v13 + 8LL))(v13);
    }
    else
    {
      **(_QWORD **)(a4 + 24) = EncodePointer(Ptr);
    }
    if ( v14 )
      ReleaseSRWLockExclusive(v14);
    if ( !v13 )
    {
LABEL_17:
      v13 = Ptr;
    }
    else
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    *v6 = v13;
    return 0LL;
  }
  return result;
}
