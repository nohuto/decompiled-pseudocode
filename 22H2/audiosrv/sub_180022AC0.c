/*
 * XREFs of sub_180022AC0 @ 0x180022AC0
 * Callers:
 *     sub_180001E08 @ 0x180001E08 (sub_180001E08.c)
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021ED0 @ 0x180021ED0 (sub_180021ED0.c)
 *     sub_180047DDC @ 0x180047DDC (sub_180047DDC.c)
 *     sub_180048308 @ 0x180048308 (sub_180048308.c)
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     sub_18004A5C4 @ 0x18004A5C4 (sub_18004A5C4.c)
 * Callees:
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=1
__int128 *__fastcall sub_180022AC0(_QWORD *a1, __int128 *a2, int a3, int a4)
{
  int v5; // ebx
  int v8; // edi
  __int64 v9; // rbx
  BOOL v10; // r14d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+30h] [rbp-28h]

  v5 = a3;
  v8 = 0;
  if ( a3 == 2 )
  {
    v5 = 0;
  }
  else if ( a3 )
  {
    goto LABEL_3;
  }
  v10 = 1;
  v11 = a1[10];
  if ( v11 )
  {
    *(_OWORD *)pvar = 0LL;
    v25 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
           v11,
           &xmmword_18015B7F8,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      v10 = LODWORD(pvar[1]) == 0;
    }
    PropVariantClear(pvar);
    if ( !v10 )
    {
      v9 = (__int64)(a1 + 21);
      goto LABEL_13;
    }
  }
LABEL_3:
  if ( !a4 )
  {
    v20 = sub_1800233B0(a1 + 207, v5);
    sub_1800230F0(v20);
    v21 = sub_1800233B0(a1 + 209, v5);
    sub_1800230F0(v21);
    v22 = sub_1800233B0(a1 + 211, v5);
    sub_1800230F0(v22);
  }
  if ( (unsigned __int64)v5 >= a1[19] )
  {
    v23 = sub_180118A38(pvar, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v23);
  }
  v9 = a1[20] + 16LL * v5;
LABEL_13:
  v12 = *(_DWORD *)(v9 + 8);
  if ( v12 )
  {
    v13 = 0;
    if ( v12 > 0 )
    {
      do
      {
        v14 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v13);
        v15 = *v14 - 0x4965933DC18E2F7ELL;
        if ( *v14 == 0x4965933DC18E2F7ELL )
          v15 = v14[1] + 0xCD572DD10E12E49LL;
        if ( !v15 )
        {
          if ( v13 == -1 )
            goto LABEL_21;
          v18 = xmmword_18015B810;
          goto LABEL_26;
        }
        ++v13;
      }
      while ( v13 < v12 );
      while ( 1 )
      {
LABEL_21:
        v16 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v8);
        v17 = *v16 - 0x4FD1B4939E90EA20LL;
        if ( *v16 == 0x4FD1B4939E90EA20LL )
          v17 = v16[1] + 0x30A9569EEC81575FLL;
        if ( !v17 )
          break;
        if ( ++v8 >= v12 )
          goto LABEL_30;
      }
      if ( v8 != -1 )
      {
        v18 = xmmword_18015B798;
        goto LABEL_26;
      }
    }
LABEL_30:
    v18 = *(_OWORD *)sub_180023320(v9, 0LL);
  }
  else
  {
    v18 = xmmword_18015B730;
  }
LABEL_26:
  *a2 = v18;
  return a2;
}
