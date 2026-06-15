/*
 * XREFs of sub_180136D4C @ 0x180136D4C
 * Callers:
 *     sub_1800D8D90 @ 0x1800D8D90 (sub_1800D8D90.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180133858 @ 0x180133858 (sub_180133858.c)
 *     sub_1801338F0 @ 0x1801338F0 (sub_1801338F0.c)
 *     sub_180133BDC @ 0x180133BDC (sub_180133BDC.c)
 *     sub_180135100 @ 0x180135100 (sub_180135100.c)
 *     sub_1801361C8 @ 0x1801361C8 (sub_1801361C8.c)
 *     sub_1801366A8 @ 0x1801366A8 (sub_1801366A8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180136D4C(__int64 a1, const WCHAR *a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  int v12; // edx
  char v13; // r14
  __int64 *i; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // si
  void (__fastcall ***v18)(_QWORD); // rcx
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]
  const WCHAR *v22; // [rsp+80h] [rbp+30h] BYREF
  const WCHAR *v23; // [rsp+90h] [rbp+40h] BYREF

  if ( !*(_BYTE *)(a1 + 96) )
  {
    v4 = -2147418113;
    v5 = 2039;
LABEL_3:
    sub_18004BD84((int)retaddr, v5, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v4);
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 209) )
  {
    v4 = -2147467259;
    v5 = 2040;
    goto LABEL_3;
  }
  v7 = sub_1801361C8(a1, a2);
  if ( v7 == -1 )
  {
    v4 = -2147024809;
    v5 = 2045;
    goto LABEL_3;
  }
  if ( !*(_BYTE *)(32LL * v7 + a1 + 272) )
  {
    v4 = -2147024809;
    v5 = 2046;
    goto LABEL_3;
  }
  v19 = 0LL;
  v20 = 0LL;
  v8 = sub_180135100(a1, (__int64 *)&v19);
  v11 = v8;
  if ( v8 >= 0 )
  {
    v13 = 0;
    for ( i = (__int64 *)v19; i != *((__int64 **)&v19 + 1); i += 4 )
    {
      LOBYTE(v22) = 0;
      v15 = (__int64)i;
      if ( (unsigned __int64)i[3] >= 8 )
        v15 = *i;
      v8 = sub_1801366A8(a1, v15, a2, &v22);
      v11 = v8;
      if ( v8 < 0 )
      {
        v12 = 2056;
        goto LABEL_24;
      }
      v17 = (char)v22;
      if ( (unsigned int)dword_18019C4F0 > 5 )
      {
        v23 = a2;
        sub_1801338F0(v16, byte_18016C8B6, v9, v10, (void **)&v23, (__int64)&v22);
      }
      if ( v13 || v17 )
        v13 = 1;
    }
    if ( v13 )
    {
      v18 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
      if ( v18 )
      {
        if ( (unsigned int)dword_18019C4F0 > 5 )
        {
          v22 = a2;
          sub_180133858((__int64)v18, byte_18016C5AD, v9, v10, (void **)&v22);
          v18 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
        }
        (**v18)(v18);
      }
    }
    v11 = 0;
  }
  else
  {
    v12 = 2050;
LABEL_24:
    sub_18004BD84((int)retaddr, v12, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v8);
  }
  if ( (_QWORD)v19 )
  {
    sub_180133BDC((__int64 *)v19, *((__int64 **)&v19 + 1));
    sub_1800472E0(v19, (v20 - v19) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  return v11;
}
