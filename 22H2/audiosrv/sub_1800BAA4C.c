/*
 * XREFs of sub_1800BAA4C @ 0x1800BAA4C
 * Callers:
 *     sub_1800B7A50 @ 0x1800B7A50 (sub_1800B7A50.c)
 *     sub_1800B7A84 @ 0x1800B7A84 (sub_1800B7A84.c)
 *     sub_1800BAD3C @ 0x1800BAD3C (sub_1800BAD3C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_1800BAA4C(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int16 *v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  int v11; // eax
  RTL_SRWLOCK *v12; // rdi
  void **v13; // rax
  void *v14; // rbp
  PVOID v15; // rax

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 8;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( v6 >= v7 )
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) == 0;
  while ( 1 )
  {
    if ( *(_QWORD *)v6 )
    {
      if ( !a2 )
        break;
      v8 = *(unsigned __int16 **)(*(_QWORD *)v6 + 32LL);
      if ( v8 )
      {
        v9 = a2 - (_QWORD)v8;
        do
        {
          v10 = *(unsigned __int16 *)((char *)v8 + v9);
          v11 = *v8 - v10;
          if ( v11 )
            break;
          ++v8;
        }
        while ( v10 );
        if ( !v11 )
          break;
      }
    }
LABEL_18:
    v6 += 8LL;
    if ( v6 >= v7 )
      return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) == 0;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) || a3 )
  {
    if ( **(_QWORD **)(*(_QWORD *)v6 + 24LL) )
    {
      v12 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
      AcquireSRWLockExclusive(v12);
      v13 = *(void ***)(*(_QWORD *)v6 + 24LL);
      v14 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        if ( v12 )
          ReleaseSRWLockExclusive(v12);
        v15 = DecodePointer(v14);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 16LL))(v15);
      }
      else if ( v12 )
      {
        ReleaseSRWLockExclusive(v12);
      }
    }
    goto LABEL_18;
  }
  return 0;
}
