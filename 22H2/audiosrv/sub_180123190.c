/*
 * XREFs of sub_180123190 @ 0x180123190
 * Callers:
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800326B0 @ 0x1800326B0 (sub_1800326B0.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005B960 @ 0x18005B960 (sub_18005B960.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012352C @ 0x18012352C (sub_18012352C.c)
 *     sub_180123628 @ 0x180123628 (sub_180123628.c)
 *     sub_1801236F8 @ 0x1801236F8 (sub_1801236F8.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180123190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  _OWORD *v9; // rdi
  _OWORD *v10; // rbx
  int v11; // eax
  unsigned int v12; // r14d
  int v13; // edx
  __int64 *v14; // rax
  __int64 v15; // r14
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v23; // [rsp+40h] [rbp-79h] BYREF
  int v24; // [rsp+48h] [rbp-71h] BYREF
  BOOL v25; // [rsp+50h] [rbp-69h] BYREF
  int v26; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+68h] [rbp-51h] BYREF
  __int64 v29; // [rsp+70h] [rbp-49h] BYREF
  LPVOID v30; // [rsp+78h] [rbp-41h] BYREF
  _OWORD *v31; // [rsp+80h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-31h] BYREF
  __int128 v33; // [rsp+90h] [rbp-29h] BYREF
  __int64 v34[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-9h]
  __int64 v36; // [rsp+B8h] [rbp-1h]
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+4Fh]

  *(_QWORD *)&v33 = a4;
  v35 = a3;
  v36 = a2;
  v30 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v34[0] = 0LL;
  v34[1] = 0LL;
  v10 = 0LL;
  v31 = 0LL;
  if ( !(unsigned __int8)sub_180123628(a2, a6) || (unsigned __int8)sub_1801236F8(a1, *(unsigned int *)(a3 + 48), a2, a6) )
  {
    v11 = sub_18005B960(a3, (__int64)v34, &v23, &pv);
    v12 = v11;
    v9 = pv;
    if ( v11 >= 0 )
    {
      v14 = (__int64 *)sub_1800234A0((unsigned __int64 *)(a1 + 152), *(int *)(a3 + 48));
      v25 = sub_180022EE0(v14, (_QWORD *)v33) != -1;
      v31 = v9;
      v24 = 1;
      v26 = 2;
      v11 = sub_1800326B0(&v29, &v26, &v25, &v24, &v23, &v31);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v10 = *(_OWORD **)(a1 + 16);
        v31 = v10;
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        v33 = *(_OWORD *)v33;
        v15 = v35;
        if ( (*(int (__fastcall **)(__int64, _OWORD *, __int128 *, __int64, _DWORD, _QWORD, __int64 *))(*(_QWORD *)v29 + 24LL))(
               v29,
               v10,
               &v33,
               1LL,
               *(_DWORD *)(v35 + 48),
               0LL,
               &v28) >= 0
          && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v28 + 24LL))(
               v28,
               &v30,
               &v27,
               0LL) >= 0 )
        {
          a6[9] = 0;
          if ( v27 )
          {
            v16 = 0;
            v17 = v30;
            v18 = v27;
            do
            {
              v19 = *v17 - 0x11E282116F64ADBELL;
              if ( *v17 == 0x11E282116F64ADBELL )
                v19 = v17[1] + 0x5FE0F28D8D38F74LL;
              if ( !v19 )
              {
                v16 |= 2u;
                a6[9] = v16;
              }
              v20 = *v17 - 0x11E282116F64ADBFLL;
              if ( *v17 == 0x11E282116F64ADBFLL )
                v20 = v17[1] + 0x5FE0F28D8D38F74LL;
              if ( v20 )
              {
                v16 = a6[9];
              }
              else
              {
                v16 |= 4u;
                a6[9] = v16;
              }
              v21 = *v17 - 0x11E282116F64ADC0LL;
              if ( *v17 == 0x11E282116F64ADC0LL )
                v21 = v17[1] + 0x5FE0F28D8D38F74LL;
              if ( !v21 )
              {
                v16 |= 8u;
                a6[9] = v16;
              }
              v17 += 2;
              --v18;
            }
            while ( v18 );
          }
        }
        if ( (a6[9] & 4) != 0 && (*(_DWORD *)(v15 + 48) == 3 || (a6[9] & 2) != 0) )
        {
          sub_18012352C(v36, a6 + 10);
          if ( a6[1] == 2 && a6[10] )
          {
            *a5 = 2;
            a6[16] = 0;
          }
          else if ( (a6[9] & 8) != 0 )
          {
            *a5 = 0;
            a6[16] = 9;
          }
          else
          {
            *a5 = 3;
            a6[16] = 7;
          }
        }
        else
        {
          *a5 = 2;
          a6[16] = 8;
        }
        goto LABEL_37;
      }
      v13 = 320;
    }
    else
    {
      v13 = 311;
    }
    sub_18004BD84((int)retaddr, v13, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp", v11);
    goto LABEL_38;
  }
  *a5 = 2;
  a6[16] = 5;
LABEL_37:
  a6[15] = *a5;
  v12 = 0;
LABEL_38:
  if ( v10 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  sub_1800384A4(v34);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  CoTaskMemFree(v9);
  CoTaskMemFree(v30);
  return v12;
}
