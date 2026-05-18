/*
 * XREFs of sub_180097B58 @ 0x180097B58
 * Callers:
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_180094970 @ 0x180094970 (sub_180094970.c)
 *     sub_1800BC4B0 @ 0x1800BC4B0 (sub_1800BC4B0.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800D7CAC @ 0x1800D7CAC (sub_1800D7CAC.c)
 *     sub_1800F4650 @ 0x1800F4650 (sub_1800F4650.c)
 *     sub_180104770 @ 0x180104770 (sub_180104770.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 *     sub_18010C5C0 @ 0x18010C5C0 (sub_18010C5C0.c)
 * Callees:
 *     sub_180097BE4 @ 0x180097BE4 (sub_180097BE4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180097B58(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a2[1];
  }
  *(_QWORD *)&v6 = *a2;
  *((_QWORD *)&v6 + 1) = v3;
  result = sub_180097BE4(a1, 0LL, &v6);
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
