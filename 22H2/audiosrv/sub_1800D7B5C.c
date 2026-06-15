/*
 * XREFs of sub_1800D7B5C @ 0x1800D7B5C
 * Callers:
 *     sub_1800E1520 @ 0x1800E1520 (sub_1800E1520.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_18011E608 @ 0x18011E608 (sub_18011E608.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D7B5C(void *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v11; // [rsp+30h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+18h]
  int v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PVOID, void *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
         pv,
         a1,
         0LL,
         0LL,
         &v14);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(v14 + 16);
    v15 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 48LL))(v5, &v13);
    v3 = v2;
    if ( v2 >= 0 )
    {
      if ( v13 == 4 )
        goto LABEL_11;
      v7 = (_DWORD *)sub_180008448(v6, sub_1800B6240)[1];
      if ( *v7 > 4u )
      {
        v11 = a1;
        sub_1800B7704((__int64)v7, byte_18016715C, v8, v9, &v11);
      }
      v2 = sub_18011E608(v14);
      v3 = v2;
      if ( v2 >= 0 )
      {
LABEL_11:
        v3 = 0;
        goto LABEL_12;
      }
      v4 = 2278;
    }
    else
    {
      v4 = 2270;
    }
  }
  else
  {
    v4 = 2264;
  }
  sub_18004BD84((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v2);
LABEL_12:
  sub_18000F708(&v14);
  sub_18000F708(&v15);
  return v3;
}
