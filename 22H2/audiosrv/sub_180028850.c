/*
 * XREFs of sub_180028850 @ 0x180028850
 * Callers:
 *     sub_180027860 @ 0x180027860 (sub_180027860.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD778 @ 0x1800CD778 (sub_1800CD778.c)
 */

_QWORD *__fastcall sub_180028850(unsigned __int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  SIZE_T v11; // r12
  unsigned __int64 v12; // rdi
  HANDLE ProcessHeap; // rax
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // r9
  _QWORD *i; // rdx
  __int64 *v20; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // r13
  __int64 v25; // rcx
  _QWORD *v26; // [rsp+80h] [rbp+18h]

  v26 = a3;
  v5 = (__int64)((__int64)a2 - *a1) >> 3;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (__int64)(a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) || (v10 = v9 + v8, v9 + v8 < v7) )
    v10 = v7;
  v11 = 8 * v10;
  v12 = 8 * v10;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v12 = -1LL;
  }
  else if ( v11 < 0x1000 )
  {
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      v14 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v11);
      a3 = v26;
      goto LABEL_9;
    }
    goto LABEL_22;
  }
  v22 = v12 + 39;
  if ( v12 + 39 < v12 )
    v22 = -1LL;
  v23 = sub_180055F40(v22);
  if ( v23 )
  {
    v14 = (v23 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v14 - 8) = v23;
    a3 = v26;
    goto LABEL_9;
  }
  o__invalid_parameter_noinfo_noreturn();
  __debugbreak();
LABEL_22:
  v14 = 0LL;
LABEL_9:
  v15 = (_QWORD *)(v14 + 8 * v5);
  v16 = *a3;
  *v15 = *a3;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = (_QWORD *)a1[1];
  v18 = (_QWORD *)*a1;
  if ( a2 == v17 )
  {
    for ( i = (_QWORD *)v14; v18 != v17; ++v18 )
    {
      *i = 0LL;
      if ( i != v18 )
      {
        *i = *v18;
        *v18 = 0LL;
      }
      ++i;
    }
  }
  else
  {
    sub_1800CD778(*a1, a2, v14);
    sub_1800CD778(a2, a1[1], v15 + 1);
  }
  v20 = (__int64 *)*a1;
  if ( *a1 )
  {
    v24 = (__int64 *)a1[1];
    if ( v20 != v24 )
    {
      do
      {
        v25 = *v20;
        if ( *v20 )
        {
          *v20 = 0LL;
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 16LL))(v25, i);
        }
        ++v20;
      }
      while ( v20 != v24 );
      v20 = (__int64 *)*a1;
    }
    sub_1800472E0(v20, (a1[2] - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v14;
  a1[1] = v14 + 8 * v7;
  a1[2] = v11 + v14;
  return v15;
}
