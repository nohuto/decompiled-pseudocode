/*
 * XREFs of sub_180005BE4 @ 0x180005BE4
 * Callers:
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 */

__int64 __fastcall sub_180005BE4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbx
  _QWORD *v8; // r15
  __int64 v9; // r14
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, __int64); // rcx
  __int64 v14; // r14
  __int64 v15; // r15
  _DWORD *v16; // r12
  __int64 v17; // rax

  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  v4 = *a2;
  v5 = (volatile signed __int32 *)(*(_QWORD *)a1 - 24LL);
  if ( (volatile signed __int32 *)(v4 - 24) != v5 )
  {
    if ( *((int *)v5 + 4) >= 0 && *(_QWORD *)(v4 - 24) == *(_QWORD *)v5 )
    {
      v14 = sub_180006C80();
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5, v5);
      *(_QWORD *)a1 = v14 + 24;
    }
    else
    {
      sub_18002BB70(a1, v4, *(unsigned int *)(v4 - 16));
    }
  }
  v6 = a2[1];
  v7 = *(_QWORD *)(a1 + 8) - 24LL;
  if ( v6 - 24 != v7 )
  {
    if ( *(int *)(v7 + 16) >= 0 && *(_QWORD *)(v6 - 24) == *(_QWORD *)v7 )
    {
      v15 = sub_180006C80();
      sub_180006A30(v7);
      *(_QWORD *)(a1 + 8) = v15 + 24;
    }
    else
    {
      sub_18002BB70(a1 + 8, v6, *(unsigned int *)(v6 - 16));
    }
  }
  *(_DWORD *)(a1 + 40) = *((_DWORD *)a2 + 10);
  v8 = (_QWORD *)(a1 + 32);
  v9 = a2[4];
  v10 = (volatile signed __int32 *)(v9 - 24);
  v11 = (volatile signed __int32 *)(*v8 - 24LL);
  if ( (volatile signed __int32 *)(v9 - 24) != v11 )
  {
    if ( *((int *)v11 + 4) >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v10
                                                                                                 + 32LL))(*(_QWORD *)v10);
      if ( *((int *)v10 + 4) >= 0 && v12 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v10 )
      {
        _InterlockedIncrement(v10 + 4);
      }
      else
      {
        v16 = v10 + 2;
        v17 = (**v12)(v12, *((unsigned int *)v10 + 2), 2LL);
        v10 = (volatile signed __int32 *)v17;
        if ( !v17 )
          sub_1800BABDC();
        *(_DWORD *)(v17 + 8) = *v16;
        sub_18003447C(v17 + 24, 2LL * (*v16 + 1), v9, 2LL * (*v16 + 1));
      }
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11, v11);
      *v8 = v10 + 6;
    }
    else
    {
      sub_18002BB70(v8, v9, *(unsigned int *)(v9 - 16));
    }
  }
  return 0LL;
}
