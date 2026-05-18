/*
 * XREFs of sub_180089770 @ 0x180089770
 * Callers:
 *     sub_180089530 @ 0x180089530 (sub_180089530.c)
 * Callees:
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_1800895D4 @ 0x1800895D4 (sub_1800895D4.c)
 *     sub_180089E4C @ 0x180089E4C (sub_180089E4C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180089770(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  char v5[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v6[24]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-10h] BYREF

  sub_18006187C(a1 + 16, a2);
  v5[0] = 1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, char *, _QWORD, __int64))sub_180089E4C)(a2 + 72, v5, 0LL, 5LL) )
  {
    v7[0] = 0;
    *(_QWORD *)v6 = qword_18021AB40;
    *(_DWORD *)&v6[8] = dword_18021AB48;
    *(_QWORD *)&v6[12] = qword_18021AB40;
    *(_DWORD *)&v6[20] = dword_18021AB48;
    *(_OWORD *)(a2 + 48) = *(_OWORD *)v6;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v6[16];
    v3 = *(_QWORD *)(a2 + 40);
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)&v6[8] = v3;
    sub_1800895D4((__int64 *)v6, a2 + 48, (__int64)v7);
    if ( *(_QWORD *)&v6[8]
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v6[8] + 8LL), 0xFFFFFFFF) == 1 )
    {
      v4 = *(_QWORD *)&v6[8];
      (***(void (__fastcall ****)(_QWORD))&v6[8])(*(_QWORD *)&v6[8]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v6[8] + 8LL))(*(_QWORD *)&v6[8]);
    }
  }
}
