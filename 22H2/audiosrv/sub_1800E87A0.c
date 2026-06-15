/*
 * XREFs of sub_1800E87A0 @ 0x1800E87A0
 * Callers:
 *     sub_18006EFB0 @ 0x18006EFB0 (sub_18006EFB0.c)
 *     sub_1800E8E10 @ 0x1800E8E10 (sub_1800E8E10.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 *     sub_1800D1744 @ 0x1800D1744 (sub_1800D1744.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800E87A0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 *v8; // r12
  __int64 *v9; // r8
  __int64 **v10; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 *v13; // r15
  __int64 *k; // r13
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 result; // rax
  __int64 *v19; // rbx
  _QWORD *m; // rsi
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 *v25; // rbx
  _QWORD *n; // rdi
  int v27; // eax
  unsigned int v28; // r13d
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 *v32; // r13
  __int64 *ii; // rbx
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 *v36; // rdx
  __int64 v37; // rax
  __int128 v38; // [rsp+20h] [rbp-98h] BYREF
  __int64 v39; // [rsp+30h] [rbp-88h]
  __int128 v40; // [rsp+38h] [rbp-80h] BYREF
  __int64 v41; // [rsp+48h] [rbp-70h]
  __int128 v42; // [rsp+50h] [rbp-68h] BYREF
  __int64 v43; // [rsp+60h] [rbp-58h]
  __int128 v44; // [rsp+68h] [rbp-50h] BYREF
  __int64 *v45; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+C0h] [rbp+8h] BYREF
  __int64 *v48; // [rsp+C8h] [rbp+10h]
  __int64 v49; // [rsp+D0h] [rbp+18h]
  __int64 *v50; // [rsp+D8h] [rbp+20h]

  v49 = a3;
  v48 = a2;
  v44 = 0LL;
  v4 = 0LL;
  v45 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v47 = v5;
  v7 = **(_QWORD ***)(a1 + 56);
  v8 = 0LL;
  try
  {
    while ( v7 != *(_QWORD **)(a1 + 56) )
    {
      v9 = v7 + 8;
      if ( v4 == v8 )
      {
        sub_1800CD5C4((__int64 *)&v44, (__int64)v8, v9);
        v4 = v45;
        v8 = (__int64 *)*((_QWORD *)&v44 + 1);
      }
      else
      {
        *v8 = *v9;
        sub_180047458(v8++);
        *((_QWORD *)&v44 + 1) = v8;
      }
      v10 = (__int64 **)v7[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (_QWORD *)i;
        v7 = (_QWORD *)i;
      }
      else
      {
        v7 = (_QWORD *)v7[2];
        for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
    if ( v5 )
      LeaveCriticalSection(v5);
    v13 = (__int64 *)v44;
    for ( k = (__int64 *)v44; ; ++k )
    {
      v50 = k;
      if ( k == v8 )
        break;
      v38 = 0LL;
      v39 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*k + 80LL))(*k, &v38);
      v16 = v15;
      if ( v15 < 0 )
      {
        sub_18004BD84((int)retaddr, 736, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp", v15);
        v17 = v38;
        if ( (_QWORD)v38 )
        {
          sub_1800CD58C((__int64 *)v38, *((__int64 **)&v38 + 1));
          sub_1800472E0(v17, (v39 - v17) & 0xFFFFFFFFFFFFFFF8uLL);
          v38 = 0LL;
          v39 = 0LL;
        }
        if ( v13 )
        {
          sub_1800CD58C(v13, v8);
          sub_1800472E0((__int64)v13, 8 * (v4 - v13));
        }
        return v16;
      }
      v19 = (__int64 *)v38;
      for ( m = (_QWORD *)v38; m != *((_QWORD **)&v38 + 1); ++m )
      {
        v40 = 0LL;
        v41 = 0LL;
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)*k + 104LL))(*k, *m, &v40);
        v22 = v21;
        if ( v21 < 0 )
        {
          sub_18004BD84((int)retaddr, 751, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp", v21);
          v23 = v40;
          if ( (_QWORD)v40 )
          {
            sub_1800CD58C((__int64 *)v40, *((__int64 **)&v40 + 1));
            sub_1800472E0(v23, (v41 - v23) & 0xFFFFFFFFFFFFFFF8uLL);
            v40 = 0LL;
            v41 = 0LL;
          }
          v24 = v38;
          if ( (_QWORD)v38 )
          {
            sub_1800CD58C((__int64 *)v38, *((__int64 **)&v38 + 1));
            sub_1800472E0(v24, (v39 - v24) & 0xFFFFFFFFFFFFFFF8uLL);
            v38 = 0LL;
            v39 = 0LL;
          }
          if ( v13 )
          {
            sub_1800CD58C(v13, v8);
            sub_1800472E0((__int64)v13, 8 * (v4 - v13));
          }
          return v22;
        }
        v25 = (__int64 *)v40;
        for ( n = (_QWORD *)v40; n != *((_QWORD **)&v40 + 1); ++n )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*n + 152LL))(*n)
            || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*n + 232LL))(*n) )
          {
            v42 = 0LL;
            v43 = 0LL;
            v27 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*n + 344LL))(*n, &v42);
            v28 = v27;
            if ( v27 < 0 )
            {
              sub_18004BD84(
                (int)retaddr,
                764,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                v27);
              v29 = v42;
              if ( (_QWORD)v42 )
              {
                sub_1800CD58C((__int64 *)v42, *((__int64 **)&v42 + 1));
                sub_1800472E0(v29, (v43 - v29) & 0xFFFFFFFFFFFFFFF8uLL);
                v42 = 0LL;
                v43 = 0LL;
              }
              v30 = v40;
              if ( (_QWORD)v40 )
              {
                sub_1800CD58C((__int64 *)v40, *((__int64 **)&v40 + 1));
                sub_1800472E0(v30, (v41 - v30) & 0xFFFFFFFFFFFFFFF8uLL);
                v40 = 0LL;
                v41 = 0LL;
              }
              v31 = v38;
              if ( (_QWORD)v38 )
              {
                sub_1800CD58C((__int64 *)v38, *((__int64 **)&v38 + 1));
                sub_1800472E0(v31, (v39 - v31) & 0xFFFFFFFFFFFFFFF8uLL);
                v38 = 0LL;
                v39 = 0LL;
              }
              if ( v13 )
              {
                sub_1800CD58C(v13, v8);
                sub_1800472E0((__int64)v13, 8 * (v4 - v13));
              }
              return v28;
            }
            v32 = (__int64 *)v42;
            for ( ii = (__int64 *)v42; ii != *((__int64 **)&v42 + 1); ++ii )
            {
              v34 = *(_QWORD *)(v49 + 56);
              if ( !v34 )
                std::_Xbad_function_call();
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 16LL))(v34, ii) )
              {
                sub_180048790(&v47, *ii);
                v35 = v48;
                v36 = (__int64 *)v48[1];
                if ( (__int64 *)v48[2] == v36 )
                {
                  sub_1800D1744(v48, v36, (__int64 *)&v47);
                }
                else
                {
                  v37 = (__int64)v47;
                  v47 = 0LL;
                  *v36 = v37;
                  v35[1] += 8LL;
                }
                sub_18000F708((__int64 *)&v47);
              }
              v32 = (__int64 *)v42;
            }
            if ( v32 )
            {
              sub_1800CD58C(v32, *((__int64 **)&v42 + 1));
              sub_1800472E0((__int64)v32, (v43 - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF8uLL);
            }
          }
          v25 = (__int64 *)v40;
        }
        if ( v25 )
        {
          sub_1800CD58C(v25, *((__int64 **)&v40 + 1));
          sub_1800472E0((__int64)v25, (v41 - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v19 = (__int64 *)v38;
        k = v50;
      }
      if ( v19 )
      {
        sub_1800CD58C(v19, *((__int64 **)&v38 + 1));
        sub_1800472E0((__int64)v19, (v39 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    if ( v13 )
    {
      sub_1800CD58C(v13, v8);
      sub_1800472E0((__int64)v13, 8 * (v4 - v13));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v47) = sub_1800C437C(
                     (int)retaddr,
                     781,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                     v6);
    return (unsigned int)v47;
  }
  return result;
}
