/*
 * XREFs of sub_1800BF42C @ 0x1800BF42C
 * Callers:
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_1800A0C9C @ 0x1800A0C9C (sub_1800A0C9C.c)
 *     sub_1800A13D0 @ 0x1800A13D0 (sub_1800A13D0.c)
 *     sub_1800A5420 @ 0x1800A5420 (sub_1800A5420.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BF42C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r14
  char v5; // r15
  int v6; // esi
  __int64 v7; // rdi
  bool v8; // al
  char v9; // cl
  char v10; // bl
  __int64 result; // rax
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  bool v14; // zf
  size_t v15[5]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF

  v3 = sub_1800752B4(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_180208968, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_180208988, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1802089A8, 0LL);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_180208D68, 0LL);
  v7 = sub_1800759E4(a1);
  v8 = v6 != 0;
  if ( (_DWORD)v3 )
    v8 = 1;
  v9 = v8;
  if ( v4 )
    v9 = 1;
  v10 = v9;
  if ( v5 )
    v10 = 1;
  v16 = 0LL;
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_18001CDF8(v15, (__int64)&qword_18020CFB8);
  sub_1800A0C9C(v7, &v16, v15);
  sub_1800A5420(v16, &qword_18020D0B8, v10);
  sub_1800A13D0(v7);
  result = sub_1800A13D0(v7);
  v12 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
