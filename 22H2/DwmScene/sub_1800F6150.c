/*
 * XREFs of sub_1800F6150 @ 0x1800F6150
 * Callers:
 *     sub_1800F5FE8 @ 0x1800F5FE8 (sub_1800F5FE8.c)
 * Callees:
 *     sub_180092088 @ 0x180092088 (sub_180092088.c)
 *     sub_1800F0948 @ 0x1800F0948 (sub_1800F0948.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_1800F601C @ 0x1800F601C (sub_1800F601C.c)
 *     sub_1800F659C @ 0x1800F659C (sub_1800F659C.c)
 *     _o_pow @ 0x18011E070 (_o_pow.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800F6150(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, char a5, int a6, char a7)
{
  __int64 *v7; // r13
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // esi
  _BYTE *v13; // rax
  unsigned int v14; // ebx
  __int16 v15; // r14
  _BYTE *v16; // rdx
  __int16 v17; // r13
  __int16 v18; // r12
  __int64 v19; // r8
  _BYTE *v20; // rdx
  __int16 v21; // r15
  unsigned int v22; // r14d
  __int16 v23; // r12
  _BYTE *v24; // rdx
  __int16 v25; // r15
  unsigned int i; // ebx
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  _WORD v35[2]; // [rsp+58h] [rbp-A1h] BYREF
  int v36; // [rsp+5Ch] [rbp-9Dh]
  __int64 v37; // [rsp+60h] [rbp-99h]
  __int64 *v38; // [rsp+68h] [rbp-91h]
  _QWORD *v39; // [rsp+70h] [rbp-89h]
  __int64 *v40; // [rsp+78h] [rbp-81h]
  __int128 v41; // [rsp+80h] [rbp-79h] BYREF
  _BYTE *v42; // [rsp+90h] [rbp-69h]
  __int128 v43; // [rsp+98h] [rbp-61h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-51h]
  __int128 v45; // [rsp+B0h] [rbp-49h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-39h]
  __int128 v47; // [rsp+C8h] [rbp-31h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-21h]

  v39 = a2;
  v7 = a1;
  v38 = a1;
  v40 = a1;
  v36 = 0;
  v8 = (int)o_pow();
  v48 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  LOBYTE(v9) = a5;
  sub_1800F659C(v11, v10, v9, v8, (__int64)&v47, (__int64)&v45, (__int64)&v43);
  v12 = v8 + 1;
  v13 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( a5 )
  {
    v22 = 1;
    if ( v8 )
    {
      v23 = v8 + 1;
      v24 = (_BYTE *)*((_QWORD *)&v41 + 1);
      do
      {
        v25 = v23 - v12;
        if ( v22 > 1 )
        {
          v35[0] = v23 - v12;
          if ( v13 == v24 )
          {
            sub_1800F597C((const void **)&v41, v24, v35);
            v13 = v42;
            v24 = (_BYTE *)*((_QWORD *)&v41 + 1);
          }
          else
          {
            *(_WORD *)v24 = v25;
            v24 += 2;
            *((_QWORD *)&v41 + 1) = v24;
          }
        }
        for ( i = 0; i <= v8; ++i )
        {
          v35[0] = i + v25;
          if ( v13 == v24 )
          {
            sub_1800F597C((const void **)&v41, v24, v35);
            v13 = v42;
            v27 = (_BYTE *)*((_QWORD *)&v41 + 1);
          }
          else
          {
            *(_WORD *)v24 = i + v25;
            v27 = v24 + 2;
            *((_QWORD *)&v41 + 1) = v27;
          }
          v35[0] = i + v23;
          if ( v13 == v27 )
          {
            sub_1800F597C((const void **)&v41, v27, v35);
            v13 = v42;
            v24 = (_BYTE *)*((_QWORD *)&v41 + 1);
          }
          else
          {
            *(_WORD *)v27 = i + v23;
            v24 = v27 + 2;
            *((_QWORD *)&v41 + 1) = v24;
          }
        }
        if ( v22 < v8 )
        {
          v35[0] = v8 + v23;
          if ( v13 == v24 )
          {
            sub_1800F597C((const void **)&v41, v24, v35);
            v13 = v42;
            v24 = (_BYTE *)*((_QWORD *)&v41 + 1);
          }
          else
          {
            *(_WORD *)v24 = v8 + v23;
            v24 += 2;
            *((_QWORD *)&v41 + 1) = v24;
          }
        }
        ++v22;
        v23 += v12;
      }
      while ( v22 <= v8 );
    }
  }
  else
  {
    v14 = 1;
    if ( v8 )
    {
      v15 = v8 + 1;
      v16 = (_BYTE *)*((_QWORD *)&v41 + 1);
      do
      {
        v17 = v15 - v12;
        if ( v14 > 1 )
        {
          v35[0] = v8 + v17;
          if ( v13 == v16 )
          {
            sub_1800F597C((const void **)&v41, v16, v35);
            v13 = v42;
            v16 = (_BYTE *)*((_QWORD *)&v41 + 1);
          }
          else
          {
            *(_WORD *)v16 = v8 + v17;
            v16 += 2;
            *((_QWORD *)&v41 + 1) = v16;
          }
        }
        if ( v8 == -1 )
        {
          v21 = v15;
        }
        else
        {
          v18 = v8;
          v19 = v12;
          v37 = v12;
          do
          {
            v35[0] = v18 + v17;
            if ( v13 == v16 )
            {
              sub_1800F597C((const void **)&v41, v16, v35);
              v13 = v42;
              v20 = (_BYTE *)*((_QWORD *)&v41 + 1);
              v19 = v37;
            }
            else
            {
              *(_WORD *)v16 = v18 + v17;
              v20 = v16 + 2;
              *((_QWORD *)&v41 + 1) = v20;
            }
            v21 = v15;
            v35[0] = v18 + v15;
            if ( v13 == v20 )
            {
              sub_1800F597C((const void **)&v41, v20, v35);
              v13 = v42;
              v16 = (_BYTE *)*((_QWORD *)&v41 + 1);
              v19 = v37;
            }
            else
            {
              *(_WORD *)v20 = v18 + v15;
              v16 = v20 + 2;
              *((_QWORD *)&v41 + 1) = v16;
            }
            --v18;
            v37 = --v19;
          }
          while ( v19 );
        }
        if ( v14 < v8 )
        {
          v35[0] = v21;
          if ( v13 == v16 )
          {
            sub_1800F597C((const void **)&v41, v16, v35);
            v13 = v42;
            v16 = (_BYTE *)*((_QWORD *)&v41 + 1);
          }
          else
          {
            *(_WORD *)v16 = v21;
            v16 += 2;
            *((_QWORD *)&v41 + 1) = v16;
          }
        }
        ++v14;
        v15 += v12;
      }
      while ( v14 <= v8 );
      v7 = v38;
    }
  }
  *(_OWORD *)v7 = 0LL;
  sub_1800F601C(v7, v39, 3, (__int64 *)&v47, (__int64 *)&v41, (__int64 *)&v45, (__int64 *)&v43, a7, 1, 1);
  v36 = 1;
  sub_180092088(*v7, 0);
  v28 = v41;
  if ( (_QWORD)v41 )
  {
    v29 = 2 * ((__int64)&v42[-v41] >> 1);
    if ( v29 >= 0x1000 )
    {
      v30 = v29 + 39;
      v28 = *(_QWORD *)(v41 - 8);
      if ( (unsigned __int64)(v41 - v28 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v28, v30);
        __debugbreak();
      }
    }
    j_j__o_free(v28);
  }
  v31 = v43;
  if ( (_QWORD)v43 )
  {
    v32 = (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v32 >= 0x1000 )
    {
      v33 = v32 + 39;
      v31 = *(_QWORD *)(v43 - 8);
      if ( (unsigned __int64)(v43 - v31 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v31, v33);
        __debugbreak();
      }
    }
    j_j__o_free(v31);
    v43 = 0LL;
    v44 = 0LL;
  }
  sub_1800F0948((__int64 *)&v45);
  sub_1800F0948((__int64 *)&v47);
  return v7;
}
