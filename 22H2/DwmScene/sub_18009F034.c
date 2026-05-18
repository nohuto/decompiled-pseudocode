/*
 * XREFs of sub_18009F034 @ 0x18009F034
 * Callers:
 *     sub_18007B500 @ 0x18007B500 (sub_18007B500.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 *     sub_18009C5F0 @ 0x18009C5F0 (sub_18009C5F0.c)
 *     sub_18009C65C @ 0x18009C65C (sub_18009C65C.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009F034(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 result; // rax
  volatile signed __int32 *v18; // rcx

  v2 = a1[2333];
  if ( v2 )
  {
    v3 = (a1[2335] - v2) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v3 >= 0x1000 )
    {
      v4 = v3 + 39;
      v5 = *(_QWORD *)(v2 - 8);
      v6 = v2 - v5;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
        goto LABEL_28;
      v2 = v5;
    }
    j_j__o_free(v2);
    a1[2333] = 0LL;
    a1[2334] = 0LL;
    a1[2335] = 0LL;
  }
  v7 = (volatile signed __int32 *)a1[2332];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a1[2330];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  sub_18001FFEC(a1 + 2326, (__int64)(a1 + 2326));
  sub_18009C65C(a1 + 2324, (__int64)(a1 + 2324));
  sub_18009C5F0(a1 + 2322, (__int64)(a1 + 2322));
  sub_18009C65C(a1 + 2320, (__int64)(a1 + 2320));
  v9 = a1[2319];
  if ( v9 >= 0x10 )
  {
    v10 = a1[2316];
    v11 = v9 + 1;
    if ( v11 >= 0x1000 )
    {
      v4 = v11 + 39;
      v12 = *(_QWORD *)(v10 - 8);
      v6 = v10 - v12;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
        goto LABEL_28;
      v10 = v12;
    }
    j_j__o_free(v10);
  }
  a1[2318] = 0LL;
  a1[2319] = 15LL;
  *((_BYTE *)a1 + 18528) = 0;
  v13 = a1[2315];
  if ( v13 < 0x10 )
    goto LABEL_24;
  v14 = a1[2312];
  v15 = v13 + 1;
  if ( v15 >= 0x1000 )
  {
    v4 = v15 + 39;
    v16 = *(_QWORD *)(v14 - 8);
    v6 = v14 - v16;
    if ( (unsigned __int64)(v6 - 8) <= 0x1F )
    {
      v14 = v16;
      goto LABEL_23;
    }
LABEL_28:
    o__invalid_parameter_noinfo_noreturn(v6, v4);
    JUMPOUT(0x18009F2B5LL);
  }
LABEL_23:
  j_j__o_free(v14);
LABEL_24:
  a1[2314] = 0LL;
  a1[2315] = 15LL;
  *((_BYTE *)a1 + 18496) = 0;
  `eh vector destructor iterator'(a1 + 263, 0x20uLL, 0x200uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_180064680(a1 + 261, (__int64)(a1 + 261));
  `eh vector destructor iterator'(a1 + 4, 0x20uLL, 0x40uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  result = sub_180064680(a1 + 2, (__int64)(a1 + 2));
  v18 = (volatile signed __int32 *)a1[1];
  if ( v18 )
  {
    result = (unsigned int)_InterlockedDecrement(v18 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  return result;
}
