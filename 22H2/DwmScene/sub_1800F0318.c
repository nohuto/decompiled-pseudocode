/*
 * XREFs of sub_1800F0318 @ 0x1800F0318
 * Callers:
 *     sub_18008D50C @ 0x18008D50C (sub_18008D50C.c)
 *     sub_1800A138C @ 0x1800A138C (sub_1800A138C.c)
 *     sub_1800D7CAC @ 0x1800D7CAC (sub_1800D7CAC.c)
 *     sub_1800EF670 @ 0x1800EF670 (sub_1800EF670.c)
 *     sub_1800F4650 @ 0x1800F4650 (sub_1800F4650.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 *     sub_18010C5C0 @ 0x18010C5C0 (sub_18010C5C0.c)
 * Callees:
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 *     sub_1800F03B0 @ 0x1800F03B0 (sub_1800F03B0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F0318(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_1800ED08C(*(_QWORD *)(a1 + 16), a2);
  v10[0] = *a3;
  v10[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_1800F03B0(a1, v5, v10);
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
