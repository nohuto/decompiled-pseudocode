/*
 * XREFs of sub_1800CFF9C @ 0x1800CFF9C
 * Callers:
 *     sub_1800D134C @ 0x1800D134C (sub_1800D134C.c)
 * Callees:
 *     sub_180002AA0 @ 0x180002AA0 (sub_180002AA0.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 *     sub_1800C8F7C @ 0x1800C8F7C (sub_1800C8F7C.c)
 *     sub_1800CE45C @ 0x1800CE45C (sub_1800CE45C.c)
 *     sub_1800CF46C @ 0x1800CF46C (sub_1800CF46C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CFF9C(__int64 a1, const WCHAR *a2, const WCHAR *a3, __int64 a4, char a5)
{
  const WCHAR *v5; // rdi
  const WCHAR *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  int v14; // eax
  __int64 *v15; // rbx
  __int64 *j; // rdi
  __int64 *v17; // rsi
  _QWORD *v18; // r14
  __int64 v19; // rdi
  unsigned int v20; // ebx
  const WCHAR *v21; // rax
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  __int64 *i; // rbx
  __int64 *v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+28h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+30h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+38h] [rbp-28h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+38h]
  unsigned __int64 v34; // [rsp+A0h] [rbp+40h] BYREF
  const WCHAR *v35; // [rsp+A8h] [rbp+48h]
  const WCHAR *v36; // [rsp+B0h] [rbp+50h]

  v36 = a3;
  v35 = a2;
  v5 = a3;
  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v29 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v30 = v8;
  v28 = sub_18002C4D0(a1 + 56);
  if ( v28 )
  {
    v10 = v9;
    do
    {
      v11 = (__int64 *)sub_1800CF46C(v10, &v28);
      v13 = *v11;
      if ( *v11 && (unsigned int)sub_1800C8F7C(*v11, v12, v6, v5) )
      {
        v31 = 0LL;
        v32 = 0LL;
        v14 = sub_180002AA0(v13, (__int64)&v31);
        if ( v14 >= 0 )
        {
          v17 = (__int64 *)v31;
          v18 = (_QWORD *)v31;
          if ( (_QWORD)v31 != *((_QWORD *)&v31 + 1) )
          {
            while ( 1 )
            {
              a5 = 0;
              v19 = *v18;
              v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 40LL))(*v18);
              v21 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
              v22 = sub_1800CE45C(v21, v20, (bool *)&a5);
              if ( v22 < 0 )
                break;
              if ( !a5 )
                goto LABEL_18;
              if ( ++v18 == *((_QWORD **)&v31 + 1) )
                goto LABEL_20;
            }
            sub_18006D26C(
              (int)retaddr,
              1717,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              v22);
LABEL_18:
            LOBYTE(v23) = 1;
            v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v13 + 16) + 32LL))(
                    v13 + 16,
                    0LL,
                    v23);
            if ( v24 < 0 )
              sub_18006D26C(
                (int)retaddr,
                1721,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                v24);
          }
LABEL_20:
          if ( v17 )
          {
            for ( i = v17; i != *((__int64 **)&v31 + 1); ++i )
              sub_18000F708(i);
            v34 = (v32 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF8uLL;
            v27 = v17;
            if ( v34 >= 0x1000 )
            {
              sub_1800BB290(&v27, &v34);
              v17 = v27;
            }
            sub_18006A148(v17);
          }
          v6 = v35;
        }
        else
        {
          sub_18006D26C(
            (int)retaddr,
            1708,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            v14);
          v15 = (__int64 *)v31;
          if ( (_QWORD)v31 )
          {
            for ( j = (__int64 *)v31; j != *((__int64 **)&v31 + 1); ++j )
              sub_18000F708(j);
            v34 = (v32 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL;
            v27 = v15;
            if ( v34 >= 0x1000 )
            {
              sub_1800BB290(&v27, &v34);
              v15 = v27;
            }
            sub_18006A148(v15);
          }
        }
      }
      v5 = v36;
    }
    while ( v28 );
    v8 = v29;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
