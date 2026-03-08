/*
 * XREFs of FilterEvalImpliedAnd @ 0x140761F24
 * Callers:
 *     FilterEval @ 0x1406CC630 (FilterEval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PropertyEval @ 0x1407622B0 (PropertyEval.c)
 */

__int64 __fastcall FilterEvalImpliedAnd(
        __int64 (__fastcall *a1)(__int64, __int64, unsigned int *, unsigned int *, _QWORD *),
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  _DWORD *v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int v10; // ebp
  __int64 (__fastcall *v12)(__int64, __int64, unsigned int *, unsigned int *, _QWORD *); // r10
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-68h]
  unsigned int v17; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0;
  v17 = 0;
  v7 = 0;
  v18[0] = 0LL;
  v20 = 0;
  *a5 = 0;
  v10 = 1;
  v12 = a1;
  if ( a3 )
  {
    v13 = (_QWORD *)(a4 + 48);
    while ( (*(_DWORD *)(v13 - 6) & 0xFF00000) == 0 )
    {
      v14 = v12(a2, 56LL * v7 + a4 + 8, &v17, &v20, v18);
      v6 = v14;
      if ( v14 == -1073741275 )
      {
        v6 = 0;
        v10 = 0;
      }
      else
      {
        if ( v14 )
          goto LABEL_10;
        LODWORD(v16) = *((_DWORD *)v13 - 2);
        PropertyEval(v17, v18[0], v20, *((unsigned int *)v13 - 12), v16, *v13, *((_DWORD *)v13 - 1), v5);
        if ( *v5 == v6 )
          return 0LL;
      }
      v12 = a1;
      ++v7;
      v13 += 7;
      if ( v7 >= a3 )
        goto LABEL_10;
    }
    v6 = -1073741811;
LABEL_10:
    if ( !v10 && !v6 )
      return (unsigned int)-1073741823;
  }
  return v6;
}
