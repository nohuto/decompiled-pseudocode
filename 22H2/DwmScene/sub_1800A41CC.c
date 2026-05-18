/*
 * XREFs of sub_1800A41CC @ 0x1800A41CC
 * Callers:
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180018074 @ 0x180018074 (sub_180018074.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800A41CC(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  volatile signed __int32 *v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 *v20; // rax
  __int64 v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+40h] [rbp-C0h]
  _BYTE v23[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  _QWORD v26[6]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v28; // [rsp+A8h] [rbp-58h]
  _QWORD v29[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v30[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+F0h] [rbp-10h] BYREF

  v21 = a4;
  v22 = a1;
  v26[4] = a2;
  pExceptionObject[8] = a3;
  if ( ((a5 | a4) & a6) != 0 )
    goto LABEL_18;
  *(_OWORD *)a2 = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v9 = 0LL;
  do
  {
    v10 = sub_1800A40D4(a1, &v27, v9 | a4, a5 | a6 & ~v9, 0);
    v11 = (_QWORD *)a2[1];
    if ( (_QWORD *)a2[2] == v11 )
    {
      sub_180018074(a2, v11, v10);
    }
    else
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      *v11 = *v10;
      v11[1] = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      a2[1] += 16LL;
    }
    v12 = v28;
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    v26[5] = v23;
    v25 = 15LL;
    v24 = 0LL;
    v23[0] = 0;
    v26[2] = 0LL;
    v26[3] = 0LL;
    sub_18001CDF8(v26, (__int64)a3);
    sub_1800F2EE8(*(_QWORD *)(a2[1] - 16), v26, v9 & ~a7, v23);
    v9 = a6 & ((~a6 | v9) + 1);
    a4 = v21;
    a1 = v22;
  }
  while ( v9 );
  v13 = a3[3];
  if ( v13 >= 0x10 )
  {
    v14 = v13 + 1;
    v15 = *a3;
    if ( v14 < 0x1000 )
    {
LABEL_15:
      j_j__o_free(v15);
      goto LABEL_16;
    }
    v16 = v14 + 39;
    v17 = *(_QWORD *)(v15 - 8);
    v18 = v15 - v17;
    if ( (unsigned __int64)(v18 - 8) <= 0x1F )
    {
      v15 = v17;
      goto LABEL_15;
    }
    o__invalid_parameter_noinfo_noreturn(v18, v16);
LABEL_18:
    sub_18000FD48(v30);
    v20 = sub_18000FD48(v29);
    sub_180027FF4(pExceptionObject, v20, 361, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
LABEL_16:
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  return a2;
}
