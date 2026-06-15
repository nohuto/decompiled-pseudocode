/*
 * XREFs of sub_1800C99E4 @ 0x1800C99E4
 * Callers:
 *     sub_1800D07A0 @ 0x1800D07A0 (sub_1800D07A0.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800C6588 @ 0x1800C6588 (sub_1800C6588.c)
 *     sub_1800CADB4 @ 0x1800CADB4 (sub_1800CADB4.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D4618 @ 0x1800D4618 (sub_1800D4618.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800C99E4(__int64 a1, _WORD *a2, __int64 a3, _DWORD *a4, _DWORD *a5, bool *a6)
{
  int v7; // edi
  __int64 v8; // rax
  char *v9; // rdx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // r14
  volatile signed __int32 *v12; // rbx
  __int64 v13; // r8
  char *v14; // rdx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // r14
  volatile signed __int32 *v17; // rbx
  __int64 v18; // r8
  char *v19; // rdx
  volatile signed __int32 *v20; // rcx
  volatile signed __int32 *v21; // r14
  volatile signed __int32 *v22; // rbx
  __int64 v23; // r8
  char *v24; // rdx
  volatile signed __int32 *v25; // rcx
  volatile signed __int32 *v26; // r14
  volatile signed __int32 *v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rax
  bool v30; // bl
  __int64 v31; // rdx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  ATL::CAtlException *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // [rsp+20h] [rbp-78h] BYREF
  __int64 v39; // [rsp+28h] [rbp-70h] BYREF
  volatile signed __int32 *v40; // [rsp+30h] [rbp-68h] BYREF
  volatile signed __int32 *v41; // [rsp+38h] [rbp-60h] BYREF
  volatile signed __int32 *v42; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int32 *v43; // [rsp+48h] [rbp-50h] BYREF
  __int64 v44; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v45; // [rsp+58h] [rbp-40h] BYREF
  ATL::CAtlException *v46; // [rsp+60h] [rbp-38h] BYREF
  int v48; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v49; // [rsp+B0h] [rbp+18h]
  _DWORD *v50; // [rsp+B8h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  LODWORD(v38) = 0;
  sub_180003E08(&v39, (__int64)&qword_18019F818);
  sub_180003E08(&v43, (__int64)&qword_18019F818);
  sub_180003E08(&v42, (__int64)&qword_18019F818);
  sub_180003E08(&v41, (__int64)&qword_18019F818);
  sub_180003E08(&v40, (__int64)&qword_18019F818);
  v7 = 0;
  if ( a2 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
  }
  else
  {
    LODWORD(v8) = 0;
  }
  try
  {
    sub_18002BB70(&v39, a2, v8);
  }
  catch ( ATL::CAtlException *v45 )
  {
    v36 = v45;
    if ( *(_DWORD *)v45 == -1073741571 )
      o__resetstkoflw();
    v48 = *(_DWORD *)v36;
    v7 = v48;
    if ( v48 < 0 )
      goto LABEL_35;
  }
  v48 = 0;
  v9 = *(char **)sub_1800CADB4(&v39, &v38, v37, &v48);
  v10 = (volatile signed __int32 *)(v9 - 24);
  v11 = v43 - 6;
  if ( v9 - 24 != (char *)(v43 - 6) )
  {
    if ( *((int *)v11 + 4) >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v12 = sub_180006C80(v10);
      sub_180006A30(v11);
      v43 = v12 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)&v43, v9, *((_DWORD *)v9 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v38 - 24));
  if ( v48 == -1 )
    goto LABEL_34;
  v14 = *(char **)sub_1800CADB4(&v39, &v38, v13, &v48);
  v15 = (volatile signed __int32 *)(v14 - 24);
  v16 = v42 - 6;
  if ( v14 - 24 != (char *)(v42 - 6) )
  {
    if ( *((int *)v16 + 4) >= 0 && *(_QWORD *)v15 == *(_QWORD *)v16 )
    {
      v17 = sub_180006C80(v15);
      sub_180006A30(v16);
      v42 = v17 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)&v42, v14, *((_DWORD *)v14 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v38 - 24));
  if ( v48 == -1 )
    goto LABEL_34;
  v19 = *(char **)sub_1800CADB4(&v39, &v38, v18, &v48);
  v20 = (volatile signed __int32 *)(v19 - 24);
  v21 = v41 - 6;
  if ( v19 - 24 != (char *)(v41 - 6) )
  {
    if ( *((int *)v21 + 4) >= 0 && *(_QWORD *)v20 == *(_QWORD *)v21 )
    {
      v22 = sub_180006C80(v20);
      sub_180006A30(v21);
      v41 = v22 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)&v41, v19, *((_DWORD *)v19 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v38 - 24));
  if ( v48 == -1 )
    goto LABEL_34;
  v24 = *(char **)sub_1800CADB4(&v39, &v38, v23, &v48);
  v25 = (volatile signed __int32 *)(v24 - 24);
  v26 = v40 - 6;
  if ( v24 - 24 != (char *)(v40 - 6) )
  {
    if ( *((int *)v26 + 4) >= 0 && *(_QWORD *)v25 == *(_QWORD *)v26 )
    {
      v27 = sub_180006C80(v25);
      sub_180006A30(v26);
      v40 = v27 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)&v40, v24, *((_DWORD *)v24 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v38 - 24));
  if ( v48 == -1 )
    goto LABEL_34;
  v29 = sub_1800CADB4(&v39, &v44, v28, &v48);
  v30 = 1;
  LODWORD(v38) = 1;
  if ( !sub_1800C6588(v29, v31) )
    v30 = v48 != -1;
  sub_180006A30((volatile signed __int32 *)(v44 - 24));
  if ( v30 )
  {
LABEL_34:
    v7 = -2147467259;
  }
  else
  {
    try
    {
      sub_1800D4618(&v43);
      sub_1800D4618(&v42);
      sub_1800D4618(&v41);
      sub_1800D4618(&v40);
    }
    catch ( ATL::CAtlException *v46 )
    {
      v48 = *(_DWORD *)v46;
      v7 = v48;
    }
    if ( v7 >= 0 )
    {
      v7 = sub_1800D3CD4(v49, a1, v43);
      if ( v7 >= 0 )
      {
        v33 = o_wcstoul(v42, 0LL, 10LL);
        *v50 = v33;
        v34 = o_wcstoul(v41, 0LL, 10LL);
        *a5 = v34;
        v35 = o_wcstoul(v40, 0LL, 10LL);
        *a6 = v35 != 0;
        goto LABEL_36;
      }
    }
  }
LABEL_35:
  sub_18005E8F8((__int64)"CAudioSession::ParseStreamSwitchId", 631, v7);
LABEL_36:
  sub_180006A30(v40 - 6);
  sub_180006A30(v41 - 6);
  sub_180006A30(v42 - 6);
  sub_180006A30(v43 - 6);
  sub_180006A30((volatile signed __int32 *)(v39 - 24));
  return (unsigned int)v7;
}
