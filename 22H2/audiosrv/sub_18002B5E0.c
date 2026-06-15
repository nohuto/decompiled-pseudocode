/*
 * XREFs of sub_18002B5E0 @ 0x18002B5E0
 * Callers:
 *     sub_18002B430 @ 0x18002B430 (sub_18002B430.c)
 *     sub_1800CE6DC @ 0x1800CE6DC (sub_1800CE6DC.c)
 * Callees:
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_1800CFB48 @ 0x1800CFB48 (sub_1800CFB48.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002B5E0(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  int v9; // r8d
  _QWORD *v10; // rax
  int i; // r8d
  __int64 v12; // rdi
  __int64 v13; // r14
  volatile signed __int32 *v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, __int64); // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, __int64); // rax
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, __int64); // rax
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, __int64); // rax
  __int64 v25; // r15
  __int64 v26; // rsi
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, __int64); // rax
  __int64 v28; // rdx
  __int64 result; // rax
  _DWORD *v30; // r12
  __int64 v31; // rax
  _DWORD *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // r12
  __int64 v37; // rax
  unsigned int v38; // eax
  _DWORD *v39; // [rsp+20h] [rbp-58h]
  _DWORD *v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+28h] [rbp-50h]

  try
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
LABEL_12:
      v12 = *(_QWORD *)(a1 + 64);
      if ( !v12 )
        sub_1800B8610(2147500037LL);
      v41 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(v12 + 88);
      v13 = *a2;
      v14 = (volatile signed __int32 *)(*a2 - 24);
      v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v14
                                                                                                 + 32LL))(*(_QWORD *)v14);
      if ( *((int *)v14 + 4) >= 0 && v15 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v14 )
      {
        _InterlockedIncrement(v14 + 4);
      }
      else
      {
        v30 = v14 + 2;
        v31 = (**v15)(v15, *((unsigned int *)v14 + 2), 2LL);
        v14 = (volatile signed __int32 *)v31;
        if ( !v31 )
          sub_1800BABDC();
        *(_DWORD *)(v31 + 8) = *v30;
        sub_18003447C(v31 + 24, 2LL * (*v30 + 1), v13, 2LL * (*v30 + 1));
      }
      *(_QWORD *)v12 = v14 + 6;
      v16 = a2[1];
      v17 = v16 - 24;
      v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 - 24)
                                                                                                 + 32LL))(*(_QWORD *)(v16 - 24));
      if ( *(int *)(v16 - 24 + 16) >= 0 && v18 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 16));
      }
      else
      {
        v32 = (_DWORD *)(v17 + 8);
        v33 = (**v18)(v18, *(unsigned int *)(v17 + 8), 2LL);
        v17 = v33;
        if ( !v33 )
          sub_1800BABDC();
        *(_DWORD *)(v33 + 8) = *v32;
        sub_18003447C(v33 + 24, 2LL * (*v32 + 1), v16, 2LL * (*v32 + 1));
      }
      *(_QWORD *)(v12 + 8) = v17 + 24;
      v19 = a2[2];
      v20 = v19 - 24;
      v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 - 24)
                                                                                                 + 32LL))(*(_QWORD *)(v19 - 24));
      if ( *(int *)(v19 - 24 + 16) >= 0 && v21 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 16));
      }
      else
      {
        v39 = (_DWORD *)(v20 + 8);
        v34 = (**v21)(v21, *(unsigned int *)(v20 + 8), 2LL);
        v20 = v34;
        if ( !v34 )
          sub_1800BABDC();
        *(_DWORD *)(v34 + 8) = *v39;
        sub_18003447C(v34 + 24, 2LL * (*v39 + 1), v19, 2LL * (*v39 + 1));
      }
      *(_QWORD *)(v12 + 16) = v20 + 24;
      *(_OWORD *)(v12 + 24) = *(_OWORD *)(a2 + 3);
      v22 = a2[5];
      v23 = v22 - 24;
      v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v22 - 24)
                                                                                                 + 32LL))(*(_QWORD *)(v22 - 24));
      if ( *(int *)(v22 - 24 + 16) >= 0 && v24 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 16));
      }
      else
      {
        v40 = (_DWORD *)(v23 + 8);
        v35 = (**v24)(v24, *(unsigned int *)(v23 + 8), 2LL);
        v23 = v35;
        if ( !v35 )
          sub_1800BABDC();
        *(_DWORD *)(v35 + 8) = *v40;
        sub_18003447C(v35 + 24, 2LL * (*v40 + 1), v22, 2LL * (*v40 + 1));
      }
      *(_QWORD *)(v12 + 40) = v23 + 24;
      *(_DWORD *)(v12 + 48) = *((_DWORD *)a2 + 12);
      *(_QWORD *)(v12 + 56) = a2[7];
      *(_DWORD *)(v12 + 64) = *((_DWORD *)a2 + 16);
      v25 = a2[9];
      v26 = v25 - 24;
      v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v25 - 24)
                                                                                                 + 32LL))(*(_QWORD *)(v25 - 24));
      if ( *(int *)(v25 - 24 + 16) >= 0 && v27 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 16));
      }
      else
      {
        v36 = (_DWORD *)(v26 + 8);
        v37 = (**v27)(v27, *(unsigned int *)(v26 + 8), 2LL);
        v26 = v37;
        if ( !v37 )
          sub_1800BABDC();
        *(_DWORD *)(v37 + 8) = *v36;
        sub_18003447C(v37 + 24, 2LL * (*v36 + 1), v25, 2LL * (*v36 + 1));
      }
      *(_QWORD *)(v12 + 72) = v26 + 24;
      *(_DWORD *)(v12 + 96) = a4;
      ++*(_QWORD *)(a1 + 8);
      v28 = 8LL * a3;
      *(_QWORD *)(v12 + 88) = *(_QWORD *)(v28 + *(_QWORD *)a1);
      *(_QWORD *)(v28 + *(_QWORD *)a1) = v12;
      if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
      {
        v38 = sub_1800CF858(a1);
        sub_1800CFB48(a1, v38);
      }
      return v12;
    }
    v6 = *(unsigned int *)(a1 + 52);
    if ( v6 )
    {
      if ( v6 == 10 )
        v7 = 0x1999999999999999LL;
      else
        v7 = 0xFFFFFFFFFFFFFFFFuLL / v6;
      if ( v7 < 0x68 )
        goto LABEL_31;
      v6 *= 104LL;
    }
    if ( ~v6 >= 8 )
    {
      v8 = (_QWORD *)o_malloc(v6 + 8);
      if ( v8 )
      {
        *v8 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v8;
        v9 = *(_DWORD *)(a1 + 52);
        v10 = &v8[13 * (unsigned int)(v9 - 1) + 1];
        for ( i = v9 - 1; i >= 0; --i )
        {
          v10[11] = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = v10;
          v10 -= 13;
        }
        goto LABEL_12;
      }
    }
LABEL_31:
    sub_1800B8610(2147942414LL);
  }
  catch ( ... )
  {
    *(_QWORD *)(v41 + 88) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v41;
    throw;
  }
  return result;
}
