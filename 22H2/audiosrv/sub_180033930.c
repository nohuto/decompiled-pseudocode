/*
 * XREFs of sub_180033930 @ 0x180033930
 * Callers:
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_1800E3F00 @ 0x1800E3F00 (sub_1800E3F00.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     memmove @ 0x18007444B (memmove.c)
 */

_QWORD *__fastcall sub_180033930(_QWORD *a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // r15
  unsigned __int64 v13; // rdi
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rsi
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8
  __int64 v22; // rcx
  __int64 v23; // rax

  v6 = (__int64)&a2[-*a1] >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) || (v11 = v10 + v9, v10 + v9 < v8) )
    v11 = v8;
  v12 = v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v13 = -1LL;
  }
  else if ( v12 < 512 )
  {
    if ( v12 * 8 )
    {
      ProcessHeap = GetProcessHeap();
      v15 = HeapAlloc(ProcessHeap, 0, v12 * 8);
      goto LABEL_9;
    }
    goto LABEL_21;
  }
  v22 = v13 + 39;
  if ( v13 + 39 < v13 )
    v22 = -1LL;
  v23 = sub_180055F40(v22);
  if ( v23 )
  {
    v15 = (_QWORD *)((v23 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v15 - 1) = v23;
    goto LABEL_9;
  }
  o__invalid_parameter_noinfo_noreturn();
  __debugbreak();
LABEL_21:
  v15 = 0LL;
LABEL_9:
  v16 = &v15[v6];
  *v16 = *a3;
  v17 = (_BYTE *)a1[1];
  v18 = (_BYTE *)*a1;
  v19 = v15;
  if ( a2 == v17 )
  {
    v20 = v17 - v18;
  }
  else
  {
    memmove(v15, v18, a2 - v18);
    v19 = v16 + 1;
    v20 = a1[1] - (_QWORD)a2;
    v18 = a2;
  }
  memmove(v19, v18, v20);
  if ( *a1 )
    sub_1800472E0(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = v15;
  a1[1] = &v15[v8];
  a1[2] = &v15[v12];
  return v16;
}
