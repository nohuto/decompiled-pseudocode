/*
 * XREFs of sub_180019860 @ 0x180019860
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_1800179FC @ 0x1800179FC (sub_1800179FC.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180075328 @ 0x180075328 (sub_180075328.c)
 *     sub_180085FEC @ 0x180085FEC (sub_180085FEC.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180019860(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rax
  signed int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  _QWORD v12[2]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v13[4]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-9h] BYREF
  int v15; // [rsp+58h] [rbp-1h] BYREF
  __int128 v16; // [rsp+60h] [rbp+7h] BYREF
  __int128 v17; // [rsp+70h] [rbp+17h] BYREF
  __int128 v18; // [rsp+80h] [rbp+27h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+5Fh]

  v15 = a2;
  v16 = 0LL;
  sub_180075328(*(_QWORD *)(a1 + 56), &v16);
  v18 = 0LL;
  sub_1800615B4(v16 + 16, &v18);
  v17 = 0LL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001269C(v13, (__int64)&qword_1802086E8);
  v4 = sub_180087A00(v16, v12, v13);
  sub_180085FEC(v16, &v17, -1LL, v4, v12[0], v12[1]);
  v14 = 0LL;
  v5 = sub_1800179FC(&v14, &v15, &v17);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v14;
    v7 = 0LL;
    v14 = 0LL;
    *a3 = v8;
    v6 = 0;
  }
  else
  {
    sub_18000DC98(retaddr, 320, (__int64)"SpectreRenderer.cpp", v5);
    v7 = v14;
  }
  if ( v7 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  if ( BYTE8(v18) )
    sub_180061A34(v18);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return v6;
}
