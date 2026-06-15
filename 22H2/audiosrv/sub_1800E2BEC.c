/*
 * XREFs of sub_1800E2BEC @ 0x1800E2BEC
 * Callers:
 *     sub_1800E24D0 @ 0x1800E24D0 (sub_1800E24D0.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD72C @ 0x1800CD72C (sub_1800CD72C.c)
 *     sub_1800D021C @ 0x1800D021C (sub_1800D021C.c)
 */

__int64 __fastcall sub_1800E2BEC(__int64 **a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  SIZE_T v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r12
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 *v21; // [rsp+70h] [rbp+8h]
  __int64 *v23; // [rsp+88h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v6 + 1;
  }
  else
  {
    v10 = v6 + 1;
  }
  v11 = 8 * v10;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = sub_180008EAC(v11);
  try
  {
    v13 = v12;
    v20 = (__int64)v12;
    v14 = &v12[v5];
    v23 = v14 + 1;
    v15 = *a3;
    *v14 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v21 = v14;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      sub_1800CD72C(v18, a2, v13);
      v21 = v13;
      v17 = v14 + 1;
      v16 = a1[1];
      v18 = a2;
    }
    sub_1800CD72C(v18, v16, v17);
    sub_1800D021C((__int64)a1, (__int64)v13, v7, v10);
    result = (__int64)&(*a1)[v5];
  }
  catch ( ... )
  {
    sub_1800CD58C(v21, v23);
    sub_1800472E0(v20, 8 * v10);
    throw;
  }
  return result;
}
